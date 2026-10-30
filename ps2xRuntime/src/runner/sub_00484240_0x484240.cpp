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

// Function: sub_00484240
// Address: 0x484240 - 0x484300
void sub_00484240_0x484240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484240_0x484240");
#endif

    switch (ctx->pc) {
        case 0x484240u: goto label_484240;
        case 0x484244u: goto label_484244;
        case 0x484248u: goto label_484248;
        case 0x48424cu: goto label_48424c;
        case 0x484250u: goto label_484250;
        case 0x484254u: goto label_484254;
        case 0x484258u: goto label_484258;
        case 0x48425cu: goto label_48425c;
        case 0x484260u: goto label_484260;
        case 0x484264u: goto label_484264;
        case 0x484268u: goto label_484268;
        case 0x48426cu: goto label_48426c;
        case 0x484270u: goto label_484270;
        case 0x484274u: goto label_484274;
        case 0x484278u: goto label_484278;
        case 0x48427cu: goto label_48427c;
        case 0x484280u: goto label_484280;
        case 0x484284u: goto label_484284;
        case 0x484288u: goto label_484288;
        case 0x48428cu: goto label_48428c;
        case 0x484290u: goto label_484290;
        case 0x484294u: goto label_484294;
        case 0x484298u: goto label_484298;
        case 0x48429cu: goto label_48429c;
        case 0x4842a0u: goto label_4842a0;
        case 0x4842a4u: goto label_4842a4;
        case 0x4842a8u: goto label_4842a8;
        case 0x4842acu: goto label_4842ac;
        case 0x4842b0u: goto label_4842b0;
        case 0x4842b4u: goto label_4842b4;
        case 0x4842b8u: goto label_4842b8;
        case 0x4842bcu: goto label_4842bc;
        case 0x4842c0u: goto label_4842c0;
        case 0x4842c4u: goto label_4842c4;
        case 0x4842c8u: goto label_4842c8;
        case 0x4842ccu: goto label_4842cc;
        case 0x4842d0u: goto label_4842d0;
        case 0x4842d4u: goto label_4842d4;
        case 0x4842d8u: goto label_4842d8;
        case 0x4842dcu: goto label_4842dc;
        case 0x4842e0u: goto label_4842e0;
        case 0x4842e4u: goto label_4842e4;
        case 0x4842e8u: goto label_4842e8;
        case 0x4842ecu: goto label_4842ec;
        case 0x4842f0u: goto label_4842f0;
        case 0x4842f4u: goto label_4842f4;
        case 0x4842f8u: goto label_4842f8;
        case 0x4842fcu: goto label_4842fc;
        default: break;
    }

    ctx->pc = 0x484240u;

label_484240:
    // 0x484240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x484240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_484244:
    // 0x484244: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x484244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_484248:
    // 0x484248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x484248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48424c:
    // 0x48424c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_484250:
    // 0x484250: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x484250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_484254:
    // 0x484254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x484254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484258:
    // 0x484258: 0xc11ffb4  jal         func_47FED0
label_48425c:
    if (ctx->pc == 0x48425Cu) {
        ctx->pc = 0x48425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484258u;
        // 0x48425c: 0x2484ebc0  addiu       $a0, $a0, -0x1440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484260u;
        goto label_484260;
    }
    ctx->pc = 0x484258u;
    SET_GPR_U32(ctx, 31, 0x484260u);
    ctx->pc = 0x48425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x484258u;
    // 0x48425c: 0x2484ebc0  addiu       $a0, $a0, -0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x484258u, 0x484260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484260u;
label_484260:
    // 0x484260: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x484260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_484264:
    // 0x484264: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_484268:
    if (ctx->pc == 0x484268u) {
        ctx->pc = 0x484268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484264u;
        // 0x484268: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48426Cu;
        goto label_48426c;
    }
    ctx->pc = 0x484264u;
    {
        const bool branch_taken_0x484264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x484264) {
            ctx->pc = 0x484268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x484264u;
            // 0x484268: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x484278u;
            goto label_484278;
        }
    }
    ctx->pc = 0x48426Cu;
label_48426c:
    // 0x48426c: 0xc120f9c  jal         func_483E70
label_484270:
    if (ctx->pc == 0x484270u) {
        ctx->pc = 0x484270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48426Cu;
        // 0x484270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484274u;
        goto label_484274;
    }
    ctx->pc = 0x48426Cu;
    SET_GPR_U32(ctx, 31, 0x484274u);
    ctx->pc = 0x484270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48426Cu;
    // 0x484270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483E70u, 0x48426Cu, 0x484274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484274u;
label_484274:
    // 0x484274: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x484274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_484278:
    // 0x484278: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x484278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_48427c:
    // 0x48427c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_484280:
    if (ctx->pc == 0x484280u) {
        ctx->pc = 0x484280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48427Cu;
        // 0x484280: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484284u;
        goto label_484284;
    }
    ctx->pc = 0x48427Cu;
    {
        const bool branch_taken_0x48427c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48427c) {
            ctx->pc = 0x484280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48427Cu;
            // 0x484280: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4842A0u;
            goto label_4842a0;
        }
    }
    ctx->pc = 0x484284u;
label_484284:
    // 0x484284: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x484284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_484288:
    // 0x484288: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x484288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48428c:
    // 0x48428c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x48428cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_484290:
    // 0x484290: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x484290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_484294:
    // 0x484294: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x484294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_484298:
    // 0x484298: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x484298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_48429c:
    // 0x48429c: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x48429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_4842a0:
    // 0x4842a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_4842a4:
    if (ctx->pc == 0x4842A4u) {
        ctx->pc = 0x4842A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4842A0u;
        // 0x4842a4: 0x8f838960  lw          $v1, -0x76A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4842A8u;
        goto label_4842a8;
    }
    ctx->pc = 0x4842A0u;
    {
        const bool branch_taken_0x4842a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4842A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4842A0u;
        // 0x4842a4: 0x8f838960  lw          $v1, -0x76A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4842a0) {
            ctx->pc = 0x4842D0u;
            goto label_4842d0;
        }
    }
    ctx->pc = 0x4842A8u;
label_4842a8:
    // 0x4842a8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4842a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_4842ac:
    // 0x4842ac: 0x0  nop
    ctx->pc = 0x4842acu;
    // NOP
label_4842b0:
    // 0x4842b0: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x4842b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_4842b4:
    // 0x4842b4: 0x0  nop
    ctx->pc = 0x4842b4u;
    // NOP
label_4842b8:
    // 0x4842b8: 0x0  nop
    ctx->pc = 0x4842b8u;
    // NOP
label_4842bc:
    // 0x4842bc: 0x0  nop
    ctx->pc = 0x4842bcu;
    // NOP
label_4842c0:
    // 0x4842c0: 0x0  nop
    ctx->pc = 0x4842c0u;
    // NOP
label_4842c4:
    // 0x4842c4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_4842c8:
    if (ctx->pc == 0x4842C8u) {
        ctx->pc = 0x4842C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4842C4u;
        // 0x4842c8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4842CCu;
        goto label_4842cc;
    }
    ctx->pc = 0x4842C4u;
    {
        const bool branch_taken_0x4842c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4842c4) {
            ctx->pc = 0x4842C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4842C4u;
            // 0x4842c8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4842B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4842b0;
        }
    }
    ctx->pc = 0x4842CCu;
label_4842cc:
    // 0x4842cc: 0x8f838960  lw          $v1, -0x76A0($gp)
    ctx->pc = 0x4842ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
label_4842d0:
    // 0x4842d0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4842d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_4842d4:
    // 0x4842d4: 0x2484ad18  addiu       $a0, $a0, -0x52E8
    ctx->pc = 0x4842d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946072));
label_4842d8:
    // 0x4842d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4842d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4842dc:
    // 0x4842dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4842dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4842e0:
    // 0x4842e0: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x4842e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
label_4842e4:
    // 0x4842e4: 0x40f809  jalr        $v0
label_4842e8:
    if (ctx->pc == 0x4842E8u) {
        ctx->pc = 0x4842E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4842E4u;
        // 0x4842e8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4842ECu;
        goto label_4842ec;
    }
    ctx->pc = 0x4842E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4842ECu);
        ctx->pc = 0x4842E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4842E4u;
        // 0x4842e8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4842E4u, 0x4842ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4842ECu;
label_4842ec:
    // 0x4842ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4842ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4842f0:
    // 0x4842f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4842f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4842f4:
    // 0x4842f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4842f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4842f8:
    // 0x4842f8: 0x3e00008  jr          $ra
label_4842fc:
    if (ctx->pc == 0x4842FCu) {
        ctx->pc = 0x4842FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4842F8u;
        // 0x4842fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x484300u;
        goto label_fallthrough_0x4842f8;
    }
    ctx->pc = 0x4842F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4842FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4842F8u;
        // 0x4842fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4842F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4842f8:
    ctx->pc = 0x484300u;
}
