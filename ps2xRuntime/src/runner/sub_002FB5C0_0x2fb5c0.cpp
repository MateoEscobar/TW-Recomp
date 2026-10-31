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

// Function: sub_002FB5C0
// Address: 0x2fb5c0 - 0x2fb650
void sub_002FB5C0_0x2fb5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB5C0_0x2fb5c0");
#endif

    switch (ctx->pc) {
        case 0x2fb5ecu: goto label_2fb5ec;
        case 0x2fb5f8u: goto label_2fb5f8;
        case 0x2fb62cu: goto label_2fb62c;
        default: break;
    }

    ctx->pc = 0x2fb5c0u;

    // 0x2fb5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fb5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fb5c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fb5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fb5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fb5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fb5cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb5d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb5d8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2fb5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2fb5dc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FB5DCu;
    {
        const bool branch_taken_0x2fb5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB5DCu;
        // 0x2fb5e0: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb5dc) {
            ctx->pc = 0x2FB5F8u;
            goto label_2fb5f8;
        }
    }
    ctx->pc = 0x2FB5E4u;
    // 0x2fb5e4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2FB5E4u;
    SET_GPR_U32(ctx, 31, 0x2FB5ECu);
    ctx->pc = 0x2FB5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB5E4u;
    // 0x2fb5e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2FB5E4u, 0x2FB5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5ECu;
label_2fb5ec:
    // 0x2fb5ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fb5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb5f0: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2FB5F0u;
    SET_GPR_U32(ctx, 31, 0x2FB5F8u);
    ctx->pc = 0x2FB5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB5F0u;
    // 0x2fb5f4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2FB5F0u, 0x2FB5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB5F8u;
label_2fb5f8:
    // 0x2fb5f8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2fb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2fb5fc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FB5FCu;
    {
        const bool branch_taken_0x2fb5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb5fc) {
            ctx->pc = 0x2FB600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB5FCu;
            // 0x2fb600: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB614u;
            goto label_2fb614;
        }
    }
    ctx->pc = 0x2FB604u;
    // 0x2fb604: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb60c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2FB60Cu;
    {
        const bool branch_taken_0x2fb60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB60Cu;
        // 0x2fb610: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb60c) {
            ctx->pc = 0x2FB63Cu;
            goto label_2fb63c;
        }
    }
    ctx->pc = 0x2FB614u;
label_2fb614:
    // 0x2fb614: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x2fb614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2fb618: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2fb618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2fb61c: 0x50640007  beql        $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB61Cu;
    {
        const bool branch_taken_0x2fb61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fb61c) {
            ctx->pc = 0x2FB620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB61Cu;
            // 0x2fb620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB63Cu;
            goto label_2fb63c;
        }
    }
    ctx->pc = 0x2FB624u;
    // 0x2fb624: 0xc088e30  jal         func_2238C0
    ctx->pc = 0x2FB624u;
    SET_GPR_U32(ctx, 31, 0x2FB62Cu);
    ctx->pc = 0x2FB628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB624u;
    // 0x2fb628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238C0u, 0x2FB624u, 0x2FB62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB62Cu;
label_2fb62c:
    // 0x2fb62c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2fb62cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb630: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FB630u;
    {
        const bool branch_taken_0x2fb630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB630u;
        // 0x2fb634: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb630) {
            ctx->pc = 0x2FB63Cu;
            goto label_2fb63c;
        }
    }
    ctx->pc = 0x2FB638u;
    // 0x2fb638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fb63c:
    // 0x2fb63c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fb63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fb640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb648: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB648u;
        // 0x2fb64c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB650u;
}
