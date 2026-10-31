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

// Function: sub_0037CF78
// Address: 0x37cf78 - 0x37d050
void sub_0037CF78_0x37cf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CF78_0x37cf78");
#endif

    switch (ctx->pc) {
        case 0x37cfa0u: goto label_37cfa0;
        case 0x37cfa8u: goto label_37cfa8;
        case 0x37cfb8u: goto label_37cfb8;
        case 0x37cfd0u: goto label_37cfd0;
        case 0x37cfd8u: goto label_37cfd8;
        case 0x37cff4u: goto label_37cff4;
        case 0x37d000u: goto label_37d000;
        case 0x37d010u: goto label_37d010;
        case 0x37d024u: goto label_37d024;
        default: break;
    }

    ctx->pc = 0x37cf78u;

    // 0x37cf78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x37cf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x37cf7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cf80: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x37cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x37cf84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37cf84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf88: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x37cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x37cf8c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x37cf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x37cf90: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x37cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x37cf94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37cf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37cf98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CF98u;
    SET_GPR_U32(ctx, 31, 0x37CFA0u);
    ctx->pc = 0x37CF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF98u;
    // 0x37cf9c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CF98u, 0x37CFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CFA0u;
label_37cfa0:
    // 0x37cfa0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CFA0u;
    SET_GPR_U32(ctx, 31, 0x37CFA8u);
    ctx->pc = 0x37CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CFA0u;
    // 0x37cfa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CFA0u, 0x37CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CFA8u;
label_37cfa8:
    // 0x37cfa8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x37cfa8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37cfac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37cfacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cfb0: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37cfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cfb4: 0x0  nop
    ctx->pc = 0x37cfb4u;
    // NOP
label_37cfb8:
    // 0x37cfb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37cfb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37cfbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cfc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37cfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cfc4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37cfc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cfc8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37CFC8u;
    SET_GPR_U32(ctx, 31, 0x37CFD0u);
    ctx->pc = 0x37CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CFC8u;
    // 0x37cfcc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37CFC8u, 0x37CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CFD0u;
label_37cfd0:
    // 0x37cfd0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37CFD0u;
    SET_GPR_U32(ctx, 31, 0x37CFD8u);
    ctx->pc = 0x37CFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CFD0u;
    // 0x37cfd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37CFD0u, 0x37CFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CFD8u;
label_37cfd8:
    // 0x37cfd8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x37cfd8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37cfdc: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x37cfdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x37cfe0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37CFE0u;
    {
        const bool branch_taken_0x37cfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFE0u;
        // 0x37cfe4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cfe0) {
            ctx->pc = 0x37CFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37cfb8;
        }
    }
    ctx->pc = 0x37CFE8u;
    // 0x37cfe8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37cfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cfec: 0xc108dea  jal         func_4237A8
    ctx->pc = 0x37CFECu;
    SET_GPR_U32(ctx, 31, 0x37CFF4u);
    ctx->pc = 0x37CFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CFECu;
    // 0x37cff0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4237A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4237A8u, 0x37CFECu, 0x37CFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CFF4u;
label_37cff4:
    // 0x37cff4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37cff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cff8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x37cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x37cffc: 0x0  nop
    ctx->pc = 0x37cffcu;
    // NOP
label_37d000:
    // 0x37d000: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37d004: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37d004u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37d008: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37D008u;
    SET_GPR_U32(ctx, 31, 0x37D010u);
    ctx->pc = 0x37D00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D008u;
    // 0x37d00c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37D008u, 0x37D010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D010u;
label_37d010:
    // 0x37d010: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37d010u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37d014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d018: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37d018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37d01c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37D01Cu;
    SET_GPR_U32(ctx, 31, 0x37D024u);
    ctx->pc = 0x37D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D01Cu;
    // 0x37d020: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37D01Cu, 0x37D024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D024u;
label_37d024:
    // 0x37d024: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x37d024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x37d028: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37D028u;
    {
        const bool branch_taken_0x37d028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D028u;
        // 0x37d02c: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d028) {
            ctx->pc = 0x37D000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d000;
        }
    }
    ctx->pc = 0x37D030u;
    // 0x37d030: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x37d030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37d034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37d034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d038: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x37d038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37d03c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x37d03cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37d040: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x37d040u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37d044: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37d044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37d048: 0x3e00008  jr          $ra
    ctx->pc = 0x37D048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D048u;
        // 0x37d04c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D050u;
}
