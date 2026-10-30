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

// Function: sub_00386168
// Address: 0x386168 - 0x386298
void sub_00386168_0x386168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386168_0x386168");
#endif

    switch (ctx->pc) {
        case 0x386168u: goto label_386168;
        case 0x38616cu: goto label_38616c;
        case 0x386170u: goto label_386170;
        case 0x386174u: goto label_386174;
        case 0x386178u: goto label_386178;
        case 0x38617cu: goto label_38617c;
        case 0x386180u: goto label_386180;
        case 0x386184u: goto label_386184;
        case 0x386188u: goto label_386188;
        case 0x38618cu: goto label_38618c;
        case 0x386190u: goto label_386190;
        case 0x386194u: goto label_386194;
        case 0x386198u: goto label_386198;
        case 0x38619cu: goto label_38619c;
        case 0x3861a0u: goto label_3861a0;
        case 0x3861a4u: goto label_3861a4;
        case 0x3861a8u: goto label_3861a8;
        case 0x3861acu: goto label_3861ac;
        case 0x3861b0u: goto label_3861b0;
        case 0x3861b4u: goto label_3861b4;
        case 0x3861b8u: goto label_3861b8;
        case 0x3861bcu: goto label_3861bc;
        case 0x3861c0u: goto label_3861c0;
        case 0x3861c4u: goto label_3861c4;
        case 0x3861c8u: goto label_3861c8;
        case 0x3861ccu: goto label_3861cc;
        case 0x3861d0u: goto label_3861d0;
        case 0x3861d4u: goto label_3861d4;
        case 0x3861d8u: goto label_3861d8;
        case 0x3861dcu: goto label_3861dc;
        case 0x3861e0u: goto label_3861e0;
        case 0x3861e4u: goto label_3861e4;
        case 0x3861e8u: goto label_3861e8;
        case 0x3861ecu: goto label_3861ec;
        case 0x3861f0u: goto label_3861f0;
        case 0x3861f4u: goto label_3861f4;
        case 0x3861f8u: goto label_3861f8;
        case 0x3861fcu: goto label_3861fc;
        case 0x386200u: goto label_386200;
        case 0x386204u: goto label_386204;
        case 0x386208u: goto label_386208;
        case 0x38620cu: goto label_38620c;
        case 0x386210u: goto label_386210;
        case 0x386214u: goto label_386214;
        case 0x386218u: goto label_386218;
        case 0x38621cu: goto label_38621c;
        case 0x386220u: goto label_386220;
        case 0x386224u: goto label_386224;
        case 0x386228u: goto label_386228;
        case 0x38622cu: goto label_38622c;
        case 0x386230u: goto label_386230;
        case 0x386234u: goto label_386234;
        case 0x386238u: goto label_386238;
        case 0x38623cu: goto label_38623c;
        case 0x386240u: goto label_386240;
        case 0x386244u: goto label_386244;
        case 0x386248u: goto label_386248;
        case 0x38624cu: goto label_38624c;
        case 0x386250u: goto label_386250;
        case 0x386254u: goto label_386254;
        case 0x386258u: goto label_386258;
        case 0x38625cu: goto label_38625c;
        case 0x386260u: goto label_386260;
        case 0x386264u: goto label_386264;
        case 0x386268u: goto label_386268;
        case 0x38626cu: goto label_38626c;
        case 0x386270u: goto label_386270;
        case 0x386274u: goto label_386274;
        case 0x386278u: goto label_386278;
        case 0x38627cu: goto label_38627c;
        case 0x386280u: goto label_386280;
        case 0x386284u: goto label_386284;
        case 0x386288u: goto label_386288;
        case 0x38628cu: goto label_38628c;
        case 0x386290u: goto label_386290;
        case 0x386294u: goto label_386294;
        default: break;
    }

    ctx->pc = 0x386168u;

label_386168:
    // 0x386168: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x386168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_38616c:
    // 0x38616c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x38616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_386170:
    // 0x386170: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x386170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_386174:
    // 0x386174: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x386174u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_386178:
    // 0x386178: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x386178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_38617c:
    // 0x38617c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x38617cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_386180:
    // 0x386180: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x386180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_386184:
    // 0x386184: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x386184u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_386188:
    // 0x386188: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x386188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_38618c:
    // 0x38618c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x38618cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_386190:
    // 0x386190: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x386190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_386194:
    // 0x386194: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x386194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_386198:
    // 0x386198: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x386198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38619c:
    // 0x38619c: 0xc0e4060  jal         func_390180
label_3861a0:
    if (ctx->pc == 0x3861A0u) {
        ctx->pc = 0x3861A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38619Cu;
        // 0x3861a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3861A4u;
        goto label_3861a4;
    }
    ctx->pc = 0x38619Cu;
    SET_GPR_U32(ctx, 31, 0x3861A4u);
    ctx->pc = 0x3861A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38619Cu;
    // 0x3861a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x38619Cu, 0x3861A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3861A4u;
label_3861a4:
    // 0x3861a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3861a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3861a8:
    // 0x3861a8: 0x52000032  beql        $s0, $zero, . + 4 + (0x32 << 2)
label_3861ac:
    if (ctx->pc == 0x3861ACu) {
        ctx->pc = 0x3861ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861A8u;
        // 0x3861ac: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3861B0u;
        goto label_3861b0;
    }
    ctx->pc = 0x3861A8u;
    {
        const bool branch_taken_0x3861a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3861a8) {
            ctx->pc = 0x3861ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3861A8u;
            // 0x3861ac: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386274u;
            goto label_386274;
        }
    }
    ctx->pc = 0x3861B0u;
label_3861b0:
    // 0x3861b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3861b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3861b4:
    // 0x3861b4: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x3861b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_3861b8:
    // 0x3861b8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x3861b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_3861bc:
    // 0x3861bc: 0x40f809  jalr        $v0
label_3861c0:
    if (ctx->pc == 0x3861C0u) {
        ctx->pc = 0x3861C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861BCu;
        // 0x3861c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3861C4u;
        goto label_3861c4;
    }
    ctx->pc = 0x3861BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3861C4u);
        ctx->pc = 0x3861C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861BCu;
        // 0x3861c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3861BCu, 0x3861C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3861C4u;
label_3861c4:
    // 0x3861c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3861c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3861c8:
    // 0x3861c8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_3861cc:
    if (ctx->pc == 0x3861CCu) {
        ctx->pc = 0x3861D0u;
        goto label_3861d0;
    }
    ctx->pc = 0x3861C8u;
    {
        const bool branch_taken_0x3861c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3861c8) {
            ctx->pc = 0x3861E4u;
            goto label_3861e4;
        }
    }
    ctx->pc = 0x3861D0u;
label_3861d0:
    // 0x3861d0: 0xc0e1232  jal         func_3848C8
label_3861d4:
    if (ctx->pc == 0x3861D4u) {
        ctx->pc = 0x3861D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861D0u;
        // 0x3861d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3861D8u;
        goto label_3861d8;
    }
    ctx->pc = 0x3861D0u;
    SET_GPR_U32(ctx, 31, 0x3861D8u);
    ctx->pc = 0x3861D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3861D0u;
    // 0x3861d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3848C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3848C8u, 0x3861D0u, 0x3861D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3861D8u;
label_3861d8:
    // 0x3861d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3861d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3861dc:
    // 0x3861dc: 0x52200025  beql        $s1, $zero, . + 4 + (0x25 << 2)
label_3861e0:
    if (ctx->pc == 0x3861E0u) {
        ctx->pc = 0x3861E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861DCu;
        // 0x3861e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3861E4u;
        goto label_3861e4;
    }
    ctx->pc = 0x3861DCu;
    {
        const bool branch_taken_0x3861dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3861dc) {
            ctx->pc = 0x3861E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3861DCu;
            // 0x3861e0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386274u;
            goto label_386274;
        }
    }
    ctx->pc = 0x3861E4u;
label_3861e4:
    // 0x3861e4: 0x5680001b  bnel        $s4, $zero, . + 4 + (0x1B << 2)
label_3861e8:
    if (ctx->pc == 0x3861E8u) {
        ctx->pc = 0x3861E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861E4u;
        // 0x3861e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3861ECu;
        goto label_3861ec;
    }
    ctx->pc = 0x3861E4u;
    {
        const bool branch_taken_0x3861e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3861e4) {
            ctx->pc = 0x3861E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3861E4u;
            // 0x3861e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386254u;
            goto label_386254;
        }
    }
    ctx->pc = 0x3861ECu;
label_3861ec:
    // 0x3861ec: 0x52a00014  beql        $s5, $zero, . + 4 + (0x14 << 2)
label_3861f0:
    if (ctx->pc == 0x3861F0u) {
        ctx->pc = 0x3861F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3861ECu;
        // 0x3861f0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3861F4u;
        goto label_3861f4;
    }
    ctx->pc = 0x3861ECu;
    {
        const bool branch_taken_0x3861ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3861ec) {
            ctx->pc = 0x3861F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3861ECu;
            // 0x3861f0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386240u;
            goto label_386240;
        }
    }
    ctx->pc = 0x3861F4u;
label_3861f4:
    // 0x3861f4: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_3861f8:
    if (ctx->pc == 0x3861F8u) {
        ctx->pc = 0x3861FCu;
        goto label_3861fc;
    }
    ctx->pc = 0x3861F4u;
    {
        const bool branch_taken_0x3861f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3861f4) {
            ctx->pc = 0x386208u;
            goto label_386208;
        }
    }
    ctx->pc = 0x3861FCu;
label_3861fc:
    // 0x3861fc: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3861fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_386200:
    // 0x386200: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_386204:
    if (ctx->pc == 0x386204u) {
        ctx->pc = 0x386204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386200u;
        // 0x386204: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386208u;
        goto label_386208;
    }
    ctx->pc = 0x386200u;
    {
        const bool branch_taken_0x386200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x386200) {
            ctx->pc = 0x386204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386200u;
            // 0x386204: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38621Cu;
            goto label_38621c;
        }
    }
    ctx->pc = 0x386208u;
label_386208:
    // 0x386208: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
label_38620c:
    if (ctx->pc == 0x38620Cu) {
        ctx->pc = 0x38620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386208u;
        // 0x38620c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386210u;
        goto label_386210;
    }
    ctx->pc = 0x386208u;
    {
        const bool branch_taken_0x386208 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x386208) {
            ctx->pc = 0x38620Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386208u;
            // 0x38620c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386240u;
            goto label_386240;
        }
    }
    ctx->pc = 0x386210u;
label_386210:
    // 0x386210: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x386210u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_386214:
    // 0x386214: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_386218:
    if (ctx->pc == 0x386218u) {
        ctx->pc = 0x386218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386214u;
        // 0x386218: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38621Cu;
        goto label_38621c;
    }
    ctx->pc = 0x386214u;
    {
        const bool branch_taken_0x386214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386214u;
        // 0x386218: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386214) {
            ctx->pc = 0x386240u;
            goto label_386240;
        }
    }
    ctx->pc = 0x38621Cu;
label_38621c:
    // 0x38621c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x38621cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_386220:
    // 0x386220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x386220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_386224:
    // 0x386224: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x386224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_386228:
    // 0x386228: 0x84440120  lh          $a0, 0x120($v0)
    ctx->pc = 0x386228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
label_38622c:
    // 0x38622c: 0x8c430124  lw          $v1, 0x124($v0)
    ctx->pc = 0x38622cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
label_386230:
    // 0x386230: 0x60f809  jalr        $v1
label_386234:
    if (ctx->pc == 0x386234u) {
        ctx->pc = 0x386234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386230u;
        // 0x386234: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386238u;
        goto label_386238;
    }
    ctx->pc = 0x386230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386238u);
        ctx->pc = 0x386234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386230u;
        // 0x386234: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386230u, 0x386238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386238u;
label_386238:
    // 0x386238: 0x10000006  b           . + 4 + (0x6 << 2)
label_38623c:
    if (ctx->pc == 0x38623Cu) {
        ctx->pc = 0x38623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386238u;
        // 0x38623c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386240u;
        goto label_386240;
    }
    ctx->pc = 0x386238u;
    {
        const bool branch_taken_0x386238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386238u;
        // 0x38623c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386238) {
            ctx->pc = 0x386254u;
            goto label_386254;
        }
    }
    ctx->pc = 0x386240u;
label_386240:
    // 0x386240: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x386240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_386244:
    // 0x386244: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x386244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_386248:
    // 0x386248: 0x60f809  jalr        $v1
label_38624c:
    if (ctx->pc == 0x38624Cu) {
        ctx->pc = 0x38624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386248u;
        // 0x38624c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386250u;
        goto label_386250;
    }
    ctx->pc = 0x386248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386250u);
        ctx->pc = 0x38624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386248u;
        // 0x38624c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386248u, 0x386250u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386250u;
label_386250:
    // 0x386250: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x386250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_386254:
    // 0x386254: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x386254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_386258:
    // 0x386258: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x386258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_38625c:
    // 0x38625c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x38625cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_386260:
    // 0x386260: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x386260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_386264:
    // 0x386264: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x386264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_386268:
    // 0x386268: 0x60f809  jalr        $v1
label_38626c:
    if (ctx->pc == 0x38626Cu) {
        ctx->pc = 0x38626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386268u;
        // 0x38626c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386270u;
        goto label_386270;
    }
    ctx->pc = 0x386268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386270u);
        ctx->pc = 0x38626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386268u;
        // 0x38626c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386268u, 0x386270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386270u;
label_386270:
    // 0x386270: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x386270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_386274:
    // 0x386274: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x386274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_386278:
    // 0x386278: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x386278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_38627c:
    // 0x38627c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x38627cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_386280:
    // 0x386280: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x386280u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_386284:
    // 0x386284: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x386284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_386288:
    // 0x386288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x386288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38628c:
    // 0x38628c: 0x3e00008  jr          $ra
label_386290:
    if (ctx->pc == 0x386290u) {
        ctx->pc = 0x386290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38628Cu;
        // 0x386290: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386294u;
        goto label_386294;
    }
    ctx->pc = 0x38628Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38628Cu;
        // 0x386290: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38628Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386294u;
label_386294:
    // 0x386294: 0x0  nop
    ctx->pc = 0x386294u;
    // NOP
    ctx->pc = 0x386298u;
}
