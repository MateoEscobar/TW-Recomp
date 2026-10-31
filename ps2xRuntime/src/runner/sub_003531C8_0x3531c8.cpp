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

// Function: sub_003531C8
// Address: 0x3531c8 - 0x353298
void sub_003531C8_0x3531c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003531C8_0x3531c8");
#endif

    switch (ctx->pc) {
        case 0x3531c8u: goto label_3531c8;
        case 0x3531ccu: goto label_3531cc;
        case 0x3531d0u: goto label_3531d0;
        case 0x3531d4u: goto label_3531d4;
        case 0x3531d8u: goto label_3531d8;
        case 0x3531dcu: goto label_3531dc;
        case 0x3531e0u: goto label_3531e0;
        case 0x3531e4u: goto label_3531e4;
        case 0x3531e8u: goto label_3531e8;
        case 0x3531ecu: goto label_3531ec;
        case 0x3531f0u: goto label_3531f0;
        case 0x3531f4u: goto label_3531f4;
        case 0x3531f8u: goto label_3531f8;
        case 0x3531fcu: goto label_3531fc;
        case 0x353200u: goto label_353200;
        case 0x353204u: goto label_353204;
        case 0x353208u: goto label_353208;
        case 0x35320cu: goto label_35320c;
        case 0x353210u: goto label_353210;
        case 0x353214u: goto label_353214;
        case 0x353218u: goto label_353218;
        case 0x35321cu: goto label_35321c;
        case 0x353220u: goto label_353220;
        case 0x353224u: goto label_353224;
        case 0x353228u: goto label_353228;
        case 0x35322cu: goto label_35322c;
        case 0x353230u: goto label_353230;
        case 0x353234u: goto label_353234;
        case 0x353238u: goto label_353238;
        case 0x35323cu: goto label_35323c;
        case 0x353240u: goto label_353240;
        case 0x353244u: goto label_353244;
        case 0x353248u: goto label_353248;
        case 0x35324cu: goto label_35324c;
        case 0x353250u: goto label_353250;
        case 0x353254u: goto label_353254;
        case 0x353258u: goto label_353258;
        case 0x35325cu: goto label_35325c;
        case 0x353260u: goto label_353260;
        case 0x353264u: goto label_353264;
        case 0x353268u: goto label_353268;
        case 0x35326cu: goto label_35326c;
        case 0x353270u: goto label_353270;
        case 0x353274u: goto label_353274;
        case 0x353278u: goto label_353278;
        case 0x35327cu: goto label_35327c;
        case 0x353280u: goto label_353280;
        case 0x353284u: goto label_353284;
        case 0x353288u: goto label_353288;
        case 0x35328cu: goto label_35328c;
        case 0x353290u: goto label_353290;
        case 0x353294u: goto label_353294;
        default: break;
    }

    ctx->pc = 0x3531c8u;

label_3531c8:
    // 0x3531c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3531c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3531cc:
    // 0x3531cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3531ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3531d0:
    // 0x3531d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3531d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3531d4:
    // 0x3531d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3531d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3531d8:
    // 0x3531d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3531d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3531dc:
    // 0x3531dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3531dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_3531e0:
    // 0x3531e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3531e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3531e4:
    // 0x3531e4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3531e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_3531e8:
    // 0x3531e8: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
label_3531ec:
    if (ctx->pc == 0x3531ECu) {
        ctx->pc = 0x3531ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531E8u;
        // 0x3531ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3531F0u;
        goto label_3531f0;
    }
    ctx->pc = 0x3531E8u;
    {
        const bool branch_taken_0x3531e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3531e8) {
            ctx->pc = 0x3531ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3531E8u;
            // 0x3531ec: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353280u;
            goto label_353280;
        }
    }
    ctx->pc = 0x3531F0u;
label_3531f0:
    // 0x3531f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3531f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3531f4:
    // 0x3531f4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3531f8:
    if (ctx->pc == 0x3531F8u) {
        ctx->pc = 0x3531F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531F4u;
        // 0x3531f8: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3531FCu;
        goto label_3531fc;
    }
    ctx->pc = 0x3531F4u;
    {
        const bool branch_taken_0x3531f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3531F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3531F4u;
        // 0x3531f8: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3531f4) {
            ctx->pc = 0x35327Cu;
            goto label_35327c;
        }
    }
    ctx->pc = 0x3531FCu;
label_3531fc:
    // 0x3531fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3531fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353200:
    // 0x353200: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x353200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_353204:
    // 0x353204: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x353204u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_353208:
    // 0x353208: 0xc0e8b20  jal         func_3A2C80
label_35320c:
    if (ctx->pc == 0x35320Cu) {
        ctx->pc = 0x35320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353208u;
        // 0x35320c: 0x8c92082c  lw          $s2, 0x82C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353210u;
        goto label_353210;
    }
    ctx->pc = 0x353208u;
    SET_GPR_U32(ctx, 31, 0x353210u);
    ctx->pc = 0x35320Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353208u;
    // 0x35320c: 0x8c92082c  lw          $s2, 0x82C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x353208u, 0x353210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353210u;
label_353210:
    // 0x353210: 0x8e262b04  lw          $a2, 0x2B04($s1)
    ctx->pc = 0x353210u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_353214:
    // 0x353214: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x353214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_353218:
    // 0x353218: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x353218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_35321c:
    // 0x35321c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x35321cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_353220:
    // 0x353220: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x353220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_353224:
    // 0x353224: 0x40f809  jalr        $v0
label_353228:
    if (ctx->pc == 0x353228u) {
        ctx->pc = 0x353228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353224u;
        // 0x353228: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35322Cu;
        goto label_35322c;
    }
    ctx->pc = 0x353224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35322Cu);
        ctx->pc = 0x353228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353224u;
        // 0x353228: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353224u, 0x35322Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35322Cu;
label_35322c:
    // 0x35322c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_353230:
    if (ctx->pc == 0x353230u) {
        ctx->pc = 0x353230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35322Cu;
        // 0x353230: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353234u;
        goto label_353234;
    }
    ctx->pc = 0x35322Cu;
    {
        const bool branch_taken_0x35322c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35322Cu;
        // 0x353230: 0x8e262b04  lw          $a2, 0x2B04($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35322c) {
            ctx->pc = 0x353270u;
            goto label_353270;
        }
    }
    ctx->pc = 0x353234u;
label_353234:
    // 0x353234: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x353234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_353238:
    // 0x353238: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x353238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_35323c:
    // 0x35323c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x35323cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_353240:
    // 0x353240: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x353240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_353244:
    // 0x353244: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x353244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_353248:
    // 0x353248: 0x40f809  jalr        $v0
label_35324c:
    if (ctx->pc == 0x35324Cu) {
        ctx->pc = 0x35324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353248u;
        // 0x35324c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353250u;
        goto label_353250;
    }
    ctx->pc = 0x353248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x353250u);
        ctx->pc = 0x35324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353248u;
        // 0x35324c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353248u, 0x353250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x353250u;
label_353250:
    // 0x353250: 0x8e272b04  lw          $a3, 0x2B04($s1)
    ctx->pc = 0x353250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11012)));
label_353254:
    // 0x353254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x353254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_353258:
    // 0x353258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x353258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35325c:
    // 0x35325c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x35325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_353260:
    // 0x353260: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x353260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_353264:
    // 0x353264: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x353264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_353268:
    // 0x353268: 0x60f809  jalr        $v1
label_35326c:
    if (ctx->pc == 0x35326Cu) {
        ctx->pc = 0x35326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353268u;
        // 0x35326c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353270u;
        goto label_353270;
    }
    ctx->pc = 0x353268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x353270u);
        ctx->pc = 0x35326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353268u;
        // 0x35326c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353268u, 0x353270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x353270u;
label_353270:
    // 0x353270: 0x8e642c7c  lw          $a0, 0x2C7C($s3)
    ctx->pc = 0x353270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
label_353274:
    // 0x353274: 0xc0e8b20  jal         func_3A2C80
label_353278:
    if (ctx->pc == 0x353278u) {
        ctx->pc = 0x353278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353274u;
        // 0x353278: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35327Cu;
        goto label_35327c;
    }
    ctx->pc = 0x353274u;
    SET_GPR_U32(ctx, 31, 0x35327Cu);
    ctx->pc = 0x353278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353274u;
    // 0x353278: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x353274u, 0x35327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35327Cu;
label_35327c:
    // 0x35327c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35327cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_353280:
    // 0x353280: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x353280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_353284:
    // 0x353284: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x353284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_353288:
    // 0x353288: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x353288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35328c:
    // 0x35328c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35328cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_353290:
    // 0x353290: 0x3e00008  jr          $ra
label_353294:
    if (ctx->pc == 0x353294u) {
        ctx->pc = 0x353294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353290u;
        // 0x353294: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x353298u;
        goto label_fallthrough_0x353290;
    }
    ctx->pc = 0x353290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353290u;
        // 0x353294: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x353290:
    ctx->pc = 0x353298u;
}
