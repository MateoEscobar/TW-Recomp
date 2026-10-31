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

// Function: sub_0035FD90
// Address: 0x35fd90 - 0x35feb8
void sub_0035FD90_0x35fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FD90_0x35fd90");
#endif

    switch (ctx->pc) {
        case 0x35fdc4u: goto label_35fdc4;
        case 0x35fdccu: goto label_35fdcc;
        case 0x35fde0u: goto label_35fde0;
        case 0x35fde8u: goto label_35fde8;
        case 0x35fdfcu: goto label_35fdfc;
        case 0x35fe04u: goto label_35fe04;
        case 0x35fe10u: goto label_35fe10;
        case 0x35fe28u: goto label_35fe28;
        case 0x35fe30u: goto label_35fe30;
        case 0x35fe54u: goto label_35fe54;
        case 0x35fe60u: goto label_35fe60;
        case 0x35fe70u: goto label_35fe70;
        case 0x35fe84u: goto label_35fe84;
        default: break;
    }

    ctx->pc = 0x35fd90u;

    // 0x35fd90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35fd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35fd94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35fd94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fd98: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x35fd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x35fd9c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x35fd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x35fda0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35fda0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fda4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35fda4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fda8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x35fda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x35fdac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35fdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x35fdb0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x35fdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x35fdb4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x35fdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x35fdb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35fdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35fdbc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FDBCu;
    SET_GPR_U32(ctx, 31, 0x35FDC4u);
    ctx->pc = 0x35FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDBCu;
    // 0x35fdc0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FDBCu, 0x35FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FDC4u;
label_35fdc4:
    // 0x35fdc4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FDC4u;
    SET_GPR_U32(ctx, 31, 0x35FDCCu);
    ctx->pc = 0x35FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDC4u;
    // 0x35fdc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FDC4u, 0x35FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FDCCu;
label_35fdcc:
    // 0x35fdcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35fdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fdd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35fdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35fdd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35fdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fdd8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FDD8u;
    SET_GPR_U32(ctx, 31, 0x35FDE0u);
    ctx->pc = 0x35FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDD8u;
    // 0x35fddc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FDD8u, 0x35FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FDE0u;
label_35fde0:
    // 0x35fde0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35FDE0u;
    SET_GPR_U32(ctx, 31, 0x35FDE8u);
    ctx->pc = 0x35FDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDE0u;
    // 0x35fde4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35FDE0u, 0x35FDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FDE8u;
label_35fde8:
    // 0x35fde8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35fde8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fdec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35fdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fdf0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35fdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35fdf4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FDF4u;
    SET_GPR_U32(ctx, 31, 0x35FDFCu);
    ctx->pc = 0x35FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDF4u;
    // 0x35fdf8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FDF4u, 0x35FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FDFCu;
label_35fdfc:
    // 0x35fdfc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35FDFCu;
    SET_GPR_U32(ctx, 31, 0x35FE04u);
    ctx->pc = 0x35FE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FDFCu;
    // 0x35fe00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35FDFCu, 0x35FE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE04u;
label_35fe04:
    // 0x35fe04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35fe04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35fe08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe0c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x35fe0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35fe10:
    // 0x35fe10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35fe10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35fe14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35fe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35fe18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35fe1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35fe1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe20: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x35FE20u;
    SET_GPR_U32(ctx, 31, 0x35FE28u);
    ctx->pc = 0x35FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE20u;
    // 0x35fe24: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x35FE20u, 0x35FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE28u;
label_35fe28:
    // 0x35fe28: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35FE28u;
    SET_GPR_U32(ctx, 31, 0x35FE30u);
    ctx->pc = 0x35FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE28u;
    // 0x35fe2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35FE28u, 0x35FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE30u;
label_35fe30:
    // 0x35fe30: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x35fe30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x35fe34: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x35fe34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x35fe38: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35FE38u;
    {
        const bool branch_taken_0x35fe38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE38u;
        // 0x35fe3c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fe38) {
            ctx->pc = 0x35FE10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fe10;
        }
    }
    ctx->pc = 0x35FE40u;
    // 0x35fe40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x35fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35fe44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe48: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x35fe48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe4c: 0xc0a4ac4  jal         func_292B10
    ctx->pc = 0x35FE4Cu;
    SET_GPR_U32(ctx, 31, 0x35FE54u);
    ctx->pc = 0x35FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE4Cu;
    // 0x35fe50: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292B10u, 0x35FE4Cu, 0x35FE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE54u;
label_35fe54:
    // 0x35fe54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35fe54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe58: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x35fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35fe5c: 0x0  nop
    ctx->pc = 0x35fe5cu;
    // NOP
label_35fe60:
    // 0x35fe60: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x35fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x35fe64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35fe64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35fe68: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x35FE68u;
    SET_GPR_U32(ctx, 31, 0x35FE70u);
    ctx->pc = 0x35FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE68u;
    // 0x35fe6c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x35FE68u, 0x35FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE70u;
label_35fe70:
    // 0x35fe70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35fe70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35fe74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe78: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35fe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35fe7c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x35FE7Cu;
    SET_GPR_U32(ctx, 31, 0x35FE84u);
    ctx->pc = 0x35FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FE7Cu;
    // 0x35fe80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x35FE7Cu, 0x35FE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FE84u;
label_35fe84:
    // 0x35fe84: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x35fe84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x35fe88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x35FE88u;
    {
        const bool branch_taken_0x35fe88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35FE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FE88u;
        // 0x35fe8c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35fe88) {
            ctx->pc = 0x35FE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35fe60;
        }
    }
    ctx->pc = 0x35FE90u;
    // 0x35fe90: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x35fe90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35fe94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fe94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fe98: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x35fe98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35fe9c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x35fe9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35fea0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35fea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35fea4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x35fea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35fea8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x35fea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35feac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35feacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35feb0: 0x3e00008  jr          $ra
    ctx->pc = 0x35FEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FEB0u;
        // 0x35feb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FEB8u;
}
