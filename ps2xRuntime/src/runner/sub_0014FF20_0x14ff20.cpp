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

// Function: sub_0014FF20
// Address: 0x14ff20 - 0x14ff98
void sub_0014FF20_0x14ff20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FF20_0x14ff20");
#endif

    switch (ctx->pc) {
        case 0x14ff44u: goto label_14ff44;
        case 0x14ff4cu: goto label_14ff4c;
        case 0x14ff58u: goto label_14ff58;
        case 0x14ff64u: goto label_14ff64;
        case 0x14ff70u: goto label_14ff70;
        case 0x14ff78u: goto label_14ff78;
        case 0x14ff80u: goto label_14ff80;
        default: break;
    }

    ctx->pc = 0x14ff20u;

    // 0x14ff20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ff20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ff24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14ff24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14ff28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14ff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14ff2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14ff2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14ff30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14ff34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ff34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ff3c: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14FF3Cu;
    SET_GPR_U32(ctx, 31, 0x14FF44u);
    ctx->pc = 0x14FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF3Cu;
    // 0x14ff40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14FF3Cu, 0x14FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF44u;
label_14ff44:
    // 0x14ff44: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14FF44u;
    SET_GPR_U32(ctx, 31, 0x14FF4Cu);
    ctx->pc = 0x14FF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF44u;
    // 0x14ff48: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14FF44u, 0x14FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF4Cu;
label_14ff4c:
    // 0x14ff4c: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x14ff4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x14ff50: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FF50u;
    SET_GPR_U32(ctx, 31, 0x14FF58u);
    ctx->pc = 0x14FF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF50u;
    // 0x14ff54: 0x112403  sra         $a0, $s1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FF50u, 0x14FF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF58u;
label_14ff58:
    // 0x14ff58: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x14ff58u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14ff5c: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FF5Cu;
    SET_GPR_U32(ctx, 31, 0x14FF64u);
    ctx->pc = 0x14FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF5Cu;
    // 0x14ff60: 0x102403  sra         $a0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FF5Cu, 0x14FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF64u;
label_14ff64:
    // 0x14ff64: 0x129400  sll         $s2, $s2, 16
    ctx->pc = 0x14ff64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x14ff68: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14FF68u;
    SET_GPR_U32(ctx, 31, 0x14FF70u);
    ctx->pc = 0x14FF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF68u;
    // 0x14ff6c: 0x122403  sra         $a0, $s2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14FF68u, 0x14FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF70u;
label_14ff70:
    // 0x14ff70: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14FF70u;
    SET_GPR_U32(ctx, 31, 0x14FF78u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14FF70u, 0x14FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF78u;
label_14ff78:
    // 0x14ff78: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14FF78u;
    SET_GPR_U32(ctx, 31, 0x14FF80u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14FF78u, 0x14FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF80u;
label_14ff80:
    // 0x14ff80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14ff80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ff84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ff84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ff88: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14ff88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ff8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ff8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ff90: 0x3e00008  jr          $ra
    ctx->pc = 0x14FF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF90u;
        // 0x14ff94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FF98u;
}
