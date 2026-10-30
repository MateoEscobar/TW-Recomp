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

// Function: sub_004241D8
// Address: 0x4241d8 - 0x424298
void sub_004241D8_0x4241d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004241D8_0x4241d8");
#endif

    switch (ctx->pc) {
        case 0x424214u: goto label_424214;
        case 0x424220u: goto label_424220;
        case 0x424238u: goto label_424238;
        case 0x424258u: goto label_424258;
        default: break;
    }

    ctx->pc = 0x4241d8u;

    // 0x4241d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4241d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4241dc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x4241dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x4241e0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4241e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x4241e4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x4241e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4241e8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4241e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4241ec: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4241ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x4241f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4241f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x4241f4: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x4241f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x4241f8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4241f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x4241fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4241fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424200: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x424200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x424204: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x424204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424208: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x424208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x42420c: 0xc108f78  jal         func_423DE0
    ctx->pc = 0x42420Cu;
    SET_GPR_U32(ctx, 31, 0x424214u);
    ctx->pc = 0x424210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42420Cu;
    // 0x424210: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423DE0u, 0x42420Cu, 0x424214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424214u;
label_424214:
    // 0x424214: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x424214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424218: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x424218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x42421c: 0x0  nop
    ctx->pc = 0x42421cu;
    // NOP
label_424220:
    // 0x424220: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x424220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x424224: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x424224u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x424228: 0x4a0000d  bltz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x424228u;
    {
        const bool branch_taken_0x424228 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x42422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424228u;
        // 0x42422c: 0x2692e998  addiu       $s2, $s4, -0x1668 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424228) {
            ctx->pc = 0x424260u;
            goto label_424260;
        }
    }
    ctx->pc = 0x424230u;
    // 0x424230: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x424230u;
    SET_GPR_U32(ctx, 31, 0x424238u);
    ctx->pc = 0x424234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424230u;
    // 0x424234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x424230u, 0x424238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424238u;
label_424238:
    // 0x424238: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x424238u;
    {
        const bool branch_taken_0x424238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424238) {
            ctx->pc = 0x42423Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424238u;
            // 0x42423c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424264u;
            goto label_424264;
        }
    }
    ctx->pc = 0x424240u;
    // 0x424240: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x424240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x424244: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x424244u;
    {
        const bool branch_taken_0x424244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424244u;
        // 0x424248: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424244) {
            ctx->pc = 0x424264u;
            goto label_424264;
        }
    }
    ctx->pc = 0x42424Cu;
    // 0x42424c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x42424cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x424250: 0xc109026  jal         func_424098
    ctx->pc = 0x424250u;
    SET_GPR_U32(ctx, 31, 0x424258u);
    ctx->pc = 0x424254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424250u;
    // 0x424254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424098u, 0x424250u, 0x424258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424258u;
label_424258:
    // 0x424258: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x424258u;
    {
        const bool branch_taken_0x424258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424258u;
        // 0x42425c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424258) {
            ctx->pc = 0x424274u;
            goto label_424274;
        }
    }
    ctx->pc = 0x424260u;
label_424260:
    // 0x424260: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x424260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_424264:
    // 0x424264: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x424264u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x424268: 0x2e230020  sltiu       $v1, $s1, 0x20
    ctx->pc = 0x424268u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x42426c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x42426Cu;
    {
        const bool branch_taken_0x42426c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x424270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42426Cu;
        // 0x424270: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42426c) {
            ctx->pc = 0x424220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424220;
        }
    }
    ctx->pc = 0x424274u;
label_424274:
    // 0x424274: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x424274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424278: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x424278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x42427c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x42427cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x424280: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x424280u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x424284: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x424284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x424288: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x424288u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42428c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42428cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x424290: 0x3e00008  jr          $ra
    ctx->pc = 0x424290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424290u;
        // 0x424294: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424298u;
}
