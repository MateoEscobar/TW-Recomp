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

// Function: sub_00151990
// Address: 0x151990 - 0x151a98
void sub_00151990_0x151990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151990_0x151990");
#endif

    switch (ctx->pc) {
        case 0x1519c4u: goto label_1519c4;
        case 0x1519d4u: goto label_1519d4;
        case 0x1519f4u: goto label_1519f4;
        case 0x151a14u: goto label_151a14;
        case 0x151a20u: goto label_151a20;
        case 0x151a2cu: goto label_151a2c;
        case 0x151a34u: goto label_151a34;
        case 0x151a3cu: goto label_151a3c;
        case 0x151a4cu: goto label_151a4c;
        case 0x151a5cu: goto label_151a5c;
        case 0x151a6cu: goto label_151a6c;
        default: break;
    }

    ctx->pc = 0x151990u;

    // 0x151990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x151994: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x151994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x151998: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x151998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15199c: 0x8c62c20c  lw          $v0, -0x3DF4($v1)
    ctx->pc = 0x15199cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x1519a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1519a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1519a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1519a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1519a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1519ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1519acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1519b0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1519B0u;
    {
        const bool branch_taken_0x1519b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1519B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519B0u;
        // 0x1519b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519b0) {
            ctx->pc = 0x1519E0u;
            goto label_1519e0;
        }
    }
    ctx->pc = 0x1519B8u;
    // 0x1519b8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1519b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1519bc: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1519BCu;
    SET_GPR_U32(ctx, 31, 0x1519C4u);
    ctx->pc = 0x1519C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519BCu;
    // 0x1519c0: 0x2484ce08  addiu       $a0, $a0, -0x31F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1519BCu, 0x1519C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519C4u;
label_1519c4:
    // 0x1519c4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1519c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1519c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1519c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1519cc: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x1519CCu;
    SET_GPR_U32(ctx, 31, 0x1519D4u);
    ctx->pc = 0x1519D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1519CCu;
    // 0x1519d0: 0x2484bf48  addiu       $a0, $a0, -0x40B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x1519CCu, 0x1519D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519D4u;
label_1519d4:
    // 0x1519d4: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1519d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x1519d8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1519D8u;
    {
        const bool branch_taken_0x1519d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1519DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519D8u;
        // 0x1519dc: 0x2484ba58  addiu       $a0, $a0, -0x45A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519d8) {
            ctx->pc = 0x151A64u;
            goto label_151a64;
        }
    }
    ctx->pc = 0x1519E0u;
label_1519e0:
    // 0x1519e0: 0x2e220101  sltiu       $v0, $s1, 0x101
    ctx->pc = 0x1519e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x1519e4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1519E4u;
    {
        const bool branch_taken_0x1519e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1519E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1519E4u;
        // 0x1519e8: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1519e4) {
            ctx->pc = 0x151A44u;
            goto label_151a44;
        }
    }
    ctx->pc = 0x1519ECu;
    // 0x1519ec: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x1519ECu;
    SET_GPR_U32(ctx, 31, 0x1519F4u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x1519ECu, 0x1519F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519F4u;
label_1519f4:
    // 0x1519f4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1519f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1519f8: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1519f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1519fc: 0x2442be08  addiu       $v0, $v0, -0x41F8
    ctx->pc = 0x1519fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950408));
    // 0x151a00: 0x36258000  ori         $a1, $s1, 0x8000
    ctx->pc = 0x151a00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32768);
    // 0x151a04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151a08: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x151a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x151a0c: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x151A0Cu;
    SET_GPR_U32(ctx, 31, 0x151A14u);
    ctx->pc = 0x151A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A0Cu;
    // 0x151a10: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x151A0Cu, 0x151A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A14u;
label_151a14:
    // 0x151a14: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x151a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x151a18: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151A18u;
    SET_GPR_U32(ctx, 31, 0x151A20u);
    ctx->pc = 0x151A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A18u;
    // 0x151a1c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151A18u, 0x151A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A20u;
label_151a20:
    // 0x151a20: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x151a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x151a24: 0xc053722  jal         func_14DC88
    ctx->pc = 0x151A24u;
    SET_GPR_U32(ctx, 31, 0x151A2Cu);
    ctx->pc = 0x151A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A24u;
    // 0x151a28: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x151A24u, 0x151A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A2Cu;
label_151a2c:
    // 0x151a2c: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x151A2Cu;
    SET_GPR_U32(ctx, 31, 0x151A34u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x151A2Cu, 0x151A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A34u;
label_151a34:
    // 0x151a34: 0xc05471c  jal         func_151C70
    ctx->pc = 0x151A34u;
    SET_GPR_U32(ctx, 31, 0x151A3Cu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x151A34u, 0x151A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A3Cu;
label_151a3c:
    // 0x151a3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x151A3Cu;
    {
        const bool branch_taken_0x151a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A3Cu;
        // 0x151a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151a3c) {
            ctx->pc = 0x151A70u;
            goto label_151a70;
        }
    }
    ctx->pc = 0x151A44u;
label_151a44:
    // 0x151a44: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151A44u;
    SET_GPR_U32(ctx, 31, 0x151A4Cu);
    ctx->pc = 0x151A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A44u;
    // 0x151a48: 0x2484ce08  addiu       $a0, $a0, -0x31F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151A44u, 0x151A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A4Cu;
label_151a4c:
    // 0x151a4c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151a50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x151a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151a54: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151A54u;
    SET_GPR_U32(ctx, 31, 0x151A5Cu);
    ctx->pc = 0x151A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151A54u;
    // 0x151a58: 0x2484ce30  addiu       $a0, $a0, -0x31D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151A54u, 0x151A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A5Cu;
label_151a5c:
    // 0x151a5c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x151a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x151a60: 0x2484ce60  addiu       $a0, $a0, -0x31A0
    ctx->pc = 0x151a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954592));
label_151a64:
    // 0x151a64: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x151A64u;
    SET_GPR_U32(ctx, 31, 0x151A6Cu);
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x151A64u, 0x151A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A6Cu;
label_151a6c:
    // 0x151a6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x151a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_151a70:
    // 0x151a70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x151a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151a74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x151A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151A7Cu;
        // 0x151a80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151A84u;
    // 0x151a84: 0x0  nop
    ctx->pc = 0x151a84u;
    // NOP
    // 0x151a88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x151a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151a8c: 0x0  nop
    ctx->pc = 0x151a8cu;
    // NOP
    // 0x151a90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x151a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151a94: 0x0  nop
    ctx->pc = 0x151a94u;
    // NOP
    ctx->pc = 0x151a98u;
}
