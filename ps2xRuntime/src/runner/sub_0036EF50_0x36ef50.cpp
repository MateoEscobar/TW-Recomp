#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036EF50
// Address: 0x36ef50 - 0x36f0d0
void sub_0036EF50_0x36ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EF50_0x36ef50");
#endif

    switch (ctx->pc) {
        case 0x36ef84u: goto label_36ef84;
        case 0x36ef8cu: goto label_36ef8c;
        case 0x36efa0u: goto label_36efa0;
        case 0x36efa8u: goto label_36efa8;
        case 0x36efb8u: goto label_36efb8;
        case 0x36efd0u: goto label_36efd0;
        case 0x36efd8u: goto label_36efd8;
        case 0x36eff0u: goto label_36eff0;
        case 0x36f008u: goto label_36f008;
        case 0x36f010u: goto label_36f010;
        case 0x36f034u: goto label_36f034;
        case 0x36f040u: goto label_36f040;
        case 0x36f050u: goto label_36f050;
        case 0x36f064u: goto label_36f064;
        case 0x36f078u: goto label_36f078;
        case 0x36f088u: goto label_36f088;
        case 0x36f09cu: goto label_36f09c;
        default: break;
    }

    ctx->pc = 0x36ef50u;

    // 0x36ef50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x36ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x36ef54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ef58: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x36ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x36ef5c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x36ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x36ef60: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36ef60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36ef64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef68: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x36ef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x36ef6c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x36ef6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x36ef70: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x36ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x36ef74: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x36ef74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36ef78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x36ef78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x36ef7c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36EF7Cu;
    SET_GPR_U32(ctx, 31, 0x36EF84u);
    ctx->pc = 0x36EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF7Cu;
    // 0x36ef80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36EF7Cu, 0x36EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF84u;
label_36ef84:
    // 0x36ef84: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36EF84u;
    SET_GPR_U32(ctx, 31, 0x36EF8Cu);
    ctx->pc = 0x36EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF84u;
    // 0x36ef88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36EF84u, 0x36EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF8Cu;
label_36ef8c:
    // 0x36ef8c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36ef8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36ef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36ef94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36ef98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36EF98u;
    SET_GPR_U32(ctx, 31, 0x36EFA0u);
    ctx->pc = 0x36EF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF98u;
    // 0x36ef9c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36EF98u, 0x36EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EFA0u;
label_36efa0:
    // 0x36efa0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36EFA0u;
    SET_GPR_U32(ctx, 31, 0x36EFA8u);
    ctx->pc = 0x36EFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EFA0u;
    // 0x36efa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36EFA0u, 0x36EFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EFA8u;
label_36efa8:
    // 0x36efa8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36efa8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36efac: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x36efacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36efb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36efb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efb4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x36efb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_36efb8:
    // 0x36efb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36efb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36efbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36efbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36efc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36efc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36efc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efc8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36EFC8u;
    SET_GPR_U32(ctx, 31, 0x36EFD0u);
    ctx->pc = 0x36EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EFC8u;
    // 0x36efcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36EFC8u, 0x36EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EFD0u;
label_36efd0:
    // 0x36efd0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36EFD0u;
    SET_GPR_U32(ctx, 31, 0x36EFD8u);
    ctx->pc = 0x36EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EFD0u;
    // 0x36efd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36EFD0u, 0x36EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EFD8u;
label_36efd8:
    // 0x36efd8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36efd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36efdc: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x36efdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x36efe0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36EFE0u;
    {
        const bool branch_taken_0x36efe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFE0u;
        // 0x36efe4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36efe0) {
            ctx->pc = 0x36EFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36efb8;
        }
    }
    ctx->pc = 0x36EFE8u;
    // 0x36efe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36efe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36efec: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x36efecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36eff0:
    // 0x36eff0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36eff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36eff4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36eff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eff8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36eff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36effc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36effcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f000: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36F000u;
    SET_GPR_U32(ctx, 31, 0x36F008u);
    ctx->pc = 0x36F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F000u;
    // 0x36f004: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36F000u, 0x36F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F008u;
label_36f008:
    // 0x36f008: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36F008u;
    SET_GPR_U32(ctx, 31, 0x36F010u);
    ctx->pc = 0x36F00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F008u;
    // 0x36f00c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36F008u, 0x36F010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F010u;
label_36f010:
    // 0x36f010: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x36f010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x36f014: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x36f014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x36f018: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36F018u;
    {
        const bool branch_taken_0x36f018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F018u;
        // 0x36f01c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f018) {
            ctx->pc = 0x36EFF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36eff0;
        }
    }
    ctx->pc = 0x36F020u;
    // 0x36f020: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36f020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f024: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36f024u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36f028: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x36f028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f02c: 0xc06d776  jal         func_1B5DD8
    ctx->pc = 0x36F02Cu;
    SET_GPR_U32(ctx, 31, 0x36F034u);
    ctx->pc = 0x36F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F02Cu;
    // 0x36f030: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5DD8u, 0x36F02Cu, 0x36F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F034u;
label_36f034:
    // 0x36f034: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36f034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f038: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36f038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36f03c: 0x0  nop
    ctx->pc = 0x36f03cu;
    // NOP
label_36f040:
    // 0x36f040: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x36f040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x36f044: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36f044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36f048: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36F048u;
    SET_GPR_U32(ctx, 31, 0x36F050u);
    ctx->pc = 0x36F04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F048u;
    // 0x36f04c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36F048u, 0x36F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F050u;
label_36f050:
    // 0x36f050: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36f050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f054: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f058: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36f058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36f05c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36F05Cu;
    SET_GPR_U32(ctx, 31, 0x36F064u);
    ctx->pc = 0x36F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F05Cu;
    // 0x36f060: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36F05Cu, 0x36F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F064u;
label_36f064:
    // 0x36f064: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x36f064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x36f068: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36F068u;
    {
        const bool branch_taken_0x36f068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F068u;
        // 0x36f06c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f068) {
            ctx->pc = 0x36F040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f040;
        }
    }
    ctx->pc = 0x36F070u;
    // 0x36f070: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36f070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f074: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x36f074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36f078:
    // 0x36f078: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x36f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x36f07c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36f07cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36f080: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x36F080u;
    SET_GPR_U32(ctx, 31, 0x36F088u);
    ctx->pc = 0x36F084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F080u;
    // 0x36f084: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x36F080u, 0x36F088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F088u;
label_36f088:
    // 0x36f088: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36f088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f08c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36f08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f090: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36f090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36f094: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36F094u;
    SET_GPR_U32(ctx, 31, 0x36F09Cu);
    ctx->pc = 0x36F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F094u;
    // 0x36f098: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36F094u, 0x36F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F09Cu;
label_36f09c:
    // 0x36f09c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x36f09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x36f0a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x36F0A0u;
    {
        const bool branch_taken_0x36f0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F0A0u;
        // 0x36f0a4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f0a0) {
            ctx->pc = 0x36F078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36f078;
        }
    }
    ctx->pc = 0x36F0A8u;
    // 0x36f0a8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x36f0a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36f0ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36f0acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f0b0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x36f0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36f0b4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x36f0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36f0b8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x36f0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36f0bc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x36f0bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36f0c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x36f0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36f0c4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x36f0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36f0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36F0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F0C8u;
        // 0x36f0cc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F0D0u;
}
