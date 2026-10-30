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

// Function: sub_004A51F0
// Address: 0x4a51f0 - 0x4a52a8
void sub_004A51F0_0x4a51f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A51F0_0x4a51f0");
#endif

    switch (ctx->pc) {
        case 0x4a520cu: goto label_4a520c;
        case 0x4a5238u: goto label_4a5238;
        case 0x4a5258u: goto label_4a5258;
        case 0x4a5274u: goto label_4a5274;
        default: break;
    }

    ctx->pc = 0x4a51f0u;

    // 0x4a51f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a51f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a51f4: 0x8f8287cc  lw          $v0, -0x7834($gp)
    ctx->pc = 0x4a51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936524)));
    // 0x4a51f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a51f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4a51fc: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x4A51FCu;
    {
        const bool branch_taken_0x4a51fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A51FCu;
        // 0x4a5200: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a51fc) {
            ctx->pc = 0x4A5290u;
            goto label_4a5290;
        }
    }
    ctx->pc = 0x4A5204u;
    // 0x4a5204: 0xc12a33c  jal         func_4A8CF0
    ctx->pc = 0x4A5204u;
    SET_GPR_U32(ctx, 31, 0x4A520Cu);
    ctx->pc = 0x4A5208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5204u;
    // 0x4a5208: 0x8f8487c4  lw          $a0, -0x783C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936516)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8CF0u, 0x4A5204u, 0x4A520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A520Cu;
label_4a520c:
    // 0x4a520c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x4A520Cu;
    {
        const bool branch_taken_0x4a520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A520Cu;
        // 0x4a5210: 0xaf8287d0  sw          $v0, -0x7830($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a520c) {
            ctx->pc = 0x4A5290u;
            goto label_4a5290;
        }
    }
    ctx->pc = 0x4A5214u;
    // 0x4a5214: 0x8f8587d4  lw          $a1, -0x782C($gp)
    ctx->pc = 0x4a5214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936532)));
    // 0x4a5218: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x4a5218u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x4a521c: 0x8f8787d8  lw          $a3, -0x7828($gp)
    ctx->pc = 0x4a521cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
    // 0x4a5220: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4a5220u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4a5224: 0x25080540  addiu       $t0, $t0, 0x540
    ctx->pc = 0x4a5224u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1344));
    // 0x4a5228: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x4a5228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x4a522c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4a522cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a5230: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x4A5230u;
    SET_GPR_U32(ctx, 31, 0x4A5238u);
    ctx->pc = 0x4A5234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5230u;
    // 0x4a5234: 0x35290409  ori         $t1, $t1, 0x409 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1033);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x4A5230u, 0x4A5238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5238u;
label_4a5238:
    // 0x4a5238: 0x8f858a88  lw          $a1, -0x7578($gp)
    ctx->pc = 0x4a5238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x4a523c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4a523cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4a5240: 0x2470ad18  addiu       $s0, $v1, -0x52E8
    ctx->pc = 0x4a5240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4a5244: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x4a5244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4a5248: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A5248u;
    {
        const bool branch_taken_0x4a5248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5248u;
        // 0x4a524c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5248) {
            ctx->pc = 0x4A5260u;
            goto label_4a5260;
        }
    }
    ctx->pc = 0x4A5250u;
    // 0x4a5250: 0xc12a3a2  jal         func_4A8E88
    ctx->pc = 0x4A5250u;
    SET_GPR_U32(ctx, 31, 0x4A5258u);
    ctx->pc = 0x4A5254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5250u;
    // 0x4a5254: 0x8f8487d0  lw          $a0, -0x7830($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8E88u, 0x4A5250u, 0x4A5258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5258u;
label_4a5258:
    // 0x4a5258: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4A5258u;
    {
        const bool branch_taken_0x4a5258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5258u;
        // 0x4a525c: 0xaf8087d0  sw          $zero, -0x7830($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5258) {
            ctx->pc = 0x4A5290u;
            goto label_4a5290;
        }
    }
    ctx->pc = 0x4A5260u;
label_4a5260:
    // 0x4a5260: 0x8f8287c8  lw          $v0, -0x7838($gp)
    ctx->pc = 0x4a5260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936520)));
    // 0x4a5264: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4a5264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4a5268: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4a5268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4a526c: 0xc12a3f8  jal         func_4A8FE0
    ctx->pc = 0x4A526Cu;
    SET_GPR_U32(ctx, 31, 0x4A5274u);
    ctx->pc = 0x4A5270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A526Cu;
    // 0x4a5270: 0xac620038  sw          $v0, 0x38($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FE0u, 0x4A526Cu, 0x4A5274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5274u;
label_4a5274:
    // 0x4a5274: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a5274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x4a5278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a5278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a527c: 0xaf8287cc  sw          $v0, -0x7834($gp)
    ctx->pc = 0x4a527cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936524), GPR_U32(ctx, 2));
    // 0x4a5280: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4a5280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4a5284: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x4a5284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x4a5288: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A5288u;
    {
        const bool branch_taken_0x4a5288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5288u;
        // 0x4a528c: 0xac600034  sw          $zero, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5288) {
            ctx->pc = 0x4A5294u;
            goto label_4a5294;
        }
    }
    ctx->pc = 0x4A5290u;
label_4a5290:
    // 0x4a5290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a5290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5294:
    // 0x4a5294: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a5294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a5298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a5298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a529c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A529Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A52A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A529Cu;
        // 0x4a52a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A529Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A52A4u;
    // 0x4a52a4: 0x0  nop
    ctx->pc = 0x4a52a4u;
    // NOP
    ctx->pc = 0x4a52a8u;
}
