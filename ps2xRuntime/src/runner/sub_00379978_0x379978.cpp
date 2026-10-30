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

// Function: sub_00379978
// Address: 0x379978 - 0x379a50
void sub_00379978_0x379978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379978_0x379978");
#endif

    switch (ctx->pc) {
        case 0x3799a8u: goto label_3799a8;
        case 0x3799b0u: goto label_3799b0;
        case 0x3799c8u: goto label_3799c8;
        case 0x3799d0u: goto label_3799d0;
        case 0x3799e8u: goto label_3799e8;
        case 0x3799f0u: goto label_3799f0;
        case 0x379a08u: goto label_379a08;
        case 0x379a10u: goto label_379a10;
        case 0x379a28u: goto label_379a28;
        default: break;
    }

    ctx->pc = 0x379978u;

    // 0x379978: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x379978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37997c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37997cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379980: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x379980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x379984: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x379984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x379988: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x379988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37998c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37998cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379990: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x379990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x379994: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x379994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x379998: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x379998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x37999c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3799a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3799A0u;
    SET_GPR_U32(ctx, 31, 0x3799A8u);
    ctx->pc = 0x3799A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3799A0u;
    // 0x3799a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3799A0u, 0x3799A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3799A8u;
label_3799a8:
    // 0x3799a8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3799A8u;
    SET_GPR_U32(ctx, 31, 0x3799B0u);
    ctx->pc = 0x3799ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3799A8u;
    // 0x3799ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3799A8u, 0x3799B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3799B0u;
label_3799b0:
    // 0x3799b0: 0x2a600  sll         $s4, $v0, 24
    ctx->pc = 0x3799b0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3799b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3799b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3799b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3799b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3799bc: 0x14a603  sra         $s4, $s4, 24
    ctx->pc = 0x3799bcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 24));
    // 0x3799c0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3799C0u;
    SET_GPR_U32(ctx, 31, 0x3799C8u);
    ctx->pc = 0x3799C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3799C0u;
    // 0x3799c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3799C0u, 0x3799C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3799C8u;
label_3799c8:
    // 0x3799c8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3799C8u;
    SET_GPR_U32(ctx, 31, 0x3799D0u);
    ctx->pc = 0x3799CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3799C8u;
    // 0x3799cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3799C8u, 0x3799D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3799D0u;
label_3799d0:
    // 0x3799d0: 0x28e00  sll         $s1, $v0, 24
    ctx->pc = 0x3799d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3799d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3799d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3799d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3799d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3799dc: 0x118e03  sra         $s1, $s1, 24
    ctx->pc = 0x3799dcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    // 0x3799e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3799E0u;
    SET_GPR_U32(ctx, 31, 0x3799E8u);
    ctx->pc = 0x3799E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3799E0u;
    // 0x3799e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3799E0u, 0x3799E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3799E8u;
label_3799e8:
    // 0x3799e8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3799E8u;
    SET_GPR_U32(ctx, 31, 0x3799F0u);
    ctx->pc = 0x3799ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3799E8u;
    // 0x3799ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3799E8u, 0x3799F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3799F0u;
label_3799f0:
    // 0x3799f0: 0x28600  sll         $s0, $v0, 24
    ctx->pc = 0x3799f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3799f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3799f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3799f8: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x3799f8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x3799fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3799fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a00: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379A00u;
    SET_GPR_U32(ctx, 31, 0x379A08u);
    ctx->pc = 0x379A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A00u;
    // 0x379a04: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379A00u, 0x379A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A08u;
label_379a08:
    // 0x379a08: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x379A08u;
    SET_GPR_U32(ctx, 31, 0x379A10u);
    ctx->pc = 0x379A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A08u;
    // 0x379a0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x379A08u, 0x379A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A10u;
label_379a10:
    // 0x379a10: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x379a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x379a14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x379a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x379a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x379a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a20: 0xc0e5ccc  jal         func_397330
    ctx->pc = 0x379A20u;
    SET_GPR_U32(ctx, 31, 0x379A28u);
    ctx->pc = 0x379A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379A20u;
    // 0x379a24: 0x23e03  sra         $a3, $v0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397330u, 0x379A20u, 0x379A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379A28u;
label_379a28:
    // 0x379a28: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x379a28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x379a2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x379a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379a30: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x379a30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x379a34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x379a34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x379a38: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x379a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379a3c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x379a3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379a44: 0x3e00008  jr          $ra
    ctx->pc = 0x379A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379A44u;
        // 0x379a48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379A4Cu;
    // 0x379a4c: 0x0  nop
    ctx->pc = 0x379a4cu;
    // NOP
    ctx->pc = 0x379a50u;
}
