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

// Function: sub_0015E5E8
// Address: 0x15e5e8 - 0x15e650
void sub_0015E5E8_0x15e5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E5E8_0x15e5e8");
#endif

    switch (ctx->pc) {
        case 0x15e610u: goto label_15e610;
        case 0x15e618u: goto label_15e618;
        default: break;
    }

    ctx->pc = 0x15e5e8u;

    // 0x15e5e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15e5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15e5ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x15e5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x15e5f0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15e5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x15e5f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e5f8: 0x8e02c784  lw          $v0, -0x387C($s0)
    ctx->pc = 0x15e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C784u));
    // 0x15e5fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15e5fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e600: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E600u;
    {
        const bool branch_taken_0x15e600 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x15E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E600u;
        // 0x15e604: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e600) {
            ctx->pc = 0x15E618u;
            goto label_15e618;
        }
    }
    ctx->pc = 0x15E608u;
    // 0x15e608: 0xc0579c6  jal         func_15E718
    ctx->pc = 0x15E608u;
    SET_GPR_U32(ctx, 31, 0x15E610u);
    ctx->pc = 0x15E718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E718u, 0x15E608u, 0x15E610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E610u;
label_15e610:
    // 0x15e610: 0xc055830  jal         func_1560C0
    ctx->pc = 0x15E610u;
    SET_GPR_U32(ctx, 31, 0x15E618u);
    ctx->pc = 0x15E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E610u;
    // 0x15e614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1560C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1560C0u, 0x15E610u, 0x15E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E618u;
label_15e618:
    // 0x15e618: 0x8e02c784  lw          $v0, -0x387C($s0)
    ctx->pc = 0x15e618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952836)));
    // 0x15e61c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15e61cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15e620: 0x248466a0  addiu       $a0, $a0, 0x66A0
    ctx->pc = 0x15e620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26272));
    // 0x15e624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e628: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15e628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15e62c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15e630: 0xae02c784  sw          $v0, -0x387C($s0)
    ctx->pc = 0x15e630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952836), GPR_U32(ctx, 2));
    // 0x15e634: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15e634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15e638: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15e638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e63c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x15e63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x15e640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e644: 0x3e00008  jr          $ra
    ctx->pc = 0x15E644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E644u;
        // 0x15e648: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E64Cu;
    // 0x15e64c: 0x0  nop
    ctx->pc = 0x15e64cu;
    // NOP
    ctx->pc = 0x15e650u;
}
