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

// Function: sub_001C9628
// Address: 0x1c9628 - 0x1c96e0
void sub_001C9628_0x1c9628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9628_0x1c9628");
#endif

    switch (ctx->pc) {
        case 0x1c9664u: goto label_1c9664;
        case 0x1c9674u: goto label_1c9674;
        case 0x1c9698u: goto label_1c9698;
        case 0x1c96c0u: goto label_1c96c0;
        case 0x1c96c8u: goto label_1c96c8;
        default: break;
    }

    ctx->pc = 0x1c9628u;

    // 0x1c9628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c962c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c962cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c9630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9638: 0x8e02057c  lw          $v0, 0x57C($s0)
    ctx->pc = 0x1c9638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1404)));
    // 0x1c963c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C963Cu;
    {
        const bool branch_taken_0x1c963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c963c) {
            ctx->pc = 0x1C9640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C963Cu;
            // 0x1c9640: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C96D0u;
            goto label_1c96d0;
        }
    }
    ctx->pc = 0x1C9644u;
    // 0x1c9644: 0x8e050574  lw          $a1, 0x574($s0)
    ctx->pc = 0x1c9644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x1c9648: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9648u;
    {
        const bool branch_taken_0x1c9648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9648u;
        // 0x1c964c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9648) {
            ctx->pc = 0x1C9668u;
            goto label_1c9668;
        }
    }
    ctx->pc = 0x1C9650u;
    // 0x1c9650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9654: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1c9654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x1c9658: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c965c: 0xc043f36  jal         func_10FCD8
    ctx->pc = 0x1C965Cu;
    SET_GPR_U32(ctx, 31, 0x1C9664u);
    ctx->pc = 0x1C9660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C965Cu;
    // 0x1c9660: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1C965Cu, 0x1C9664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9664u;
label_1c9664:
    // 0x1c9664: 0xae000574  sw          $zero, 0x574($s0)
    ctx->pc = 0x1c9664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 0));
label_1c9668:
    // 0x1c9668: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c9668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c966c: 0xc06c590  jal         func_1B1640
    ctx->pc = 0x1C966Cu;
    SET_GPR_U32(ctx, 31, 0x1C9674u);
    ctx->pc = 0x1C9670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C966Cu;
    // 0x1c9670: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1640u, 0x1C966Cu, 0x1C9674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9674u;
label_1c9674:
    // 0x1c9674: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9674u;
    {
        const bool branch_taken_0x1c9674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9674u;
        // 0x1c9678: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9674) {
            ctx->pc = 0x1C96A0u;
            goto label_1c96a0;
        }
    }
    ctx->pc = 0x1C967Cu;
    // 0x1c967c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9680: 0xc44cea4c  lwc1        $f12, -0x15B4($v0)
    ctx->pc = 0x1c9680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c9684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9688: 0xae0301b8  sw          $v1, 0x1B8($s0)
    ctx->pc = 0x1c9688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 3));
    // 0x1c968c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9690: 0xc06ece4  jal         func_1BB390
    ctx->pc = 0x1C9690u;
    SET_GPR_U32(ctx, 31, 0x1C9698u);
    ctx->pc = 0x1C9694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9690u;
    // 0x1c9694: 0xae030188  sw          $v1, 0x188($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1C9690u, 0x1C9698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9698u;
label_1c9698:
    // 0x1c9698: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9698u;
    {
        const bool branch_taken_0x1c9698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9698) {
            ctx->pc = 0x1C96C0u;
            goto label_1c96c0;
        }
    }
    ctx->pc = 0x1C96A0u;
label_1c96a0:
    // 0x1c96a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c96a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c96a8: 0xc44cea50  lwc1        $f12, -0x15B0($v0)
    ctx->pc = 0x1c96a8u;
    { uint32_t bits = FAST_READ32(0x50EA50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c96ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c96acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96b0: 0xae0301b8  sw          $v1, 0x1B8($s0)
    ctx->pc = 0x1c96b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 3));
    // 0x1c96b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c96b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c96b8: 0xc06ece4  jal         func_1BB390
    ctx->pc = 0x1C96B8u;
    SET_GPR_U32(ctx, 31, 0x1C96C0u);
    ctx->pc = 0x1C96BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C96B8u;
    // 0x1c96bc: 0xae030188  sw          $v1, 0x188($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1C96B8u, 0x1C96C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96C0u;
label_1c96c0:
    // 0x1c96c0: 0xc079dd4  jal         func_1E7750
    ctx->pc = 0x1C96C0u;
    SET_GPR_U32(ctx, 31, 0x1C96C8u);
    ctx->pc = 0x1C96C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C96C0u;
    // 0x1c96c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7750u, 0x1C96C0u, 0x1C96C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C96C8u;
label_1c96c8:
    // 0x1c96c8: 0xae00057c  sw          $zero, 0x57C($s0)
    ctx->pc = 0x1c96c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 0));
    // 0x1c96cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c96ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c96d0:
    // 0x1c96d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c96d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c96d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C96D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C96D4u;
        // 0x1c96d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C96D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C96DCu;
    // 0x1c96dc: 0x0  nop
    ctx->pc = 0x1c96dcu;
    // NOP
    ctx->pc = 0x1c96e0u;
}
