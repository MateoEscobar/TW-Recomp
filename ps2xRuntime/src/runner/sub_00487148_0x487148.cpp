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

// Function: sub_00487148
// Address: 0x487148 - 0x487210
void sub_00487148_0x487148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487148_0x487148");
#endif

    switch (ctx->pc) {
        case 0x487148u: goto label_487148;
        case 0x48714cu: goto label_48714c;
        case 0x487150u: goto label_487150;
        case 0x487154u: goto label_487154;
        case 0x487158u: goto label_487158;
        case 0x48715cu: goto label_48715c;
        case 0x487160u: goto label_487160;
        case 0x487164u: goto label_487164;
        case 0x487168u: goto label_487168;
        case 0x48716cu: goto label_48716c;
        case 0x487170u: goto label_487170;
        case 0x487174u: goto label_487174;
        case 0x487178u: goto label_487178;
        case 0x48717cu: goto label_48717c;
        case 0x487180u: goto label_487180;
        case 0x487184u: goto label_487184;
        case 0x487188u: goto label_487188;
        case 0x48718cu: goto label_48718c;
        case 0x487190u: goto label_487190;
        case 0x487194u: goto label_487194;
        case 0x487198u: goto label_487198;
        case 0x48719cu: goto label_48719c;
        case 0x4871a0u: goto label_4871a0;
        case 0x4871a4u: goto label_4871a4;
        case 0x4871a8u: goto label_4871a8;
        case 0x4871acu: goto label_4871ac;
        case 0x4871b0u: goto label_4871b0;
        case 0x4871b4u: goto label_4871b4;
        case 0x4871b8u: goto label_4871b8;
        case 0x4871bcu: goto label_4871bc;
        case 0x4871c0u: goto label_4871c0;
        case 0x4871c4u: goto label_4871c4;
        case 0x4871c8u: goto label_4871c8;
        case 0x4871ccu: goto label_4871cc;
        case 0x4871d0u: goto label_4871d0;
        case 0x4871d4u: goto label_4871d4;
        case 0x4871d8u: goto label_4871d8;
        case 0x4871dcu: goto label_4871dc;
        case 0x4871e0u: goto label_4871e0;
        case 0x4871e4u: goto label_4871e4;
        case 0x4871e8u: goto label_4871e8;
        case 0x4871ecu: goto label_4871ec;
        case 0x4871f0u: goto label_4871f0;
        case 0x4871f4u: goto label_4871f4;
        case 0x4871f8u: goto label_4871f8;
        case 0x4871fcu: goto label_4871fc;
        case 0x487200u: goto label_487200;
        case 0x487204u: goto label_487204;
        case 0x487208u: goto label_487208;
        case 0x48720cu: goto label_48720c;
        default: break;
    }

    ctx->pc = 0x487148u;

label_487148:
    // 0x487148: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x487148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_48714c:
    // 0x48714c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x48714cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_487150:
    // 0x487150: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x487150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_487154:
    // 0x487154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x487154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_487158:
    // 0x487158: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x487158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_48715c:
    // 0x48715c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x48715cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_487160:
    // 0x487160: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x487160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_487164:
    // 0x487164: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x487164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_487168:
    // 0x487168: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_48716c:
    if (ctx->pc == 0x48716Cu) {
        ctx->pc = 0x48716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487168u;
        // 0x48716c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487170u;
        goto label_487170;
    }
    ctx->pc = 0x487168u;
    {
        const bool branch_taken_0x487168 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x48716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487168u;
        // 0x48716c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487168) {
            ctx->pc = 0x4871ECu;
            goto label_4871ec;
        }
    }
    ctx->pc = 0x487170u;
label_487170:
    // 0x487170: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x487170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_487174:
    // 0x487174: 0x0  nop
    ctx->pc = 0x487174u;
    // NOP
label_487178:
    // 0x487178: 0x2829825  or          $s3, $s4, $v0
    ctx->pc = 0x487178u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_48717c:
    // 0x48717c: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x48717cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_487180:
    // 0x487180: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_487184:
    if (ctx->pc == 0x487184u) {
        ctx->pc = 0x487184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487180u;
        // 0x487184: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487188u;
        goto label_487188;
    }
    ctx->pc = 0x487180u;
    {
        const bool branch_taken_0x487180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x487184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487180u;
        // 0x487184: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x487180) {
            ctx->pc = 0x487198u;
            goto label_487198;
        }
    }
    ctx->pc = 0x487188u;
label_487188:
    // 0x487188: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x487188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48718c:
    // 0x48718c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x48718cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_487190:
    // 0x487190: 0xc11f4a0  jal         func_47D280
label_487194:
    if (ctx->pc == 0x487194u) {
        ctx->pc = 0x487194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487190u;
        // 0x487194: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x487198u;
        goto label_487198;
    }
    ctx->pc = 0x487190u;
    SET_GPR_U32(ctx, 31, 0x487198u);
    ctx->pc = 0x487194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x487190u;
    // 0x487194: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D280u, 0x487190u, 0x487198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x487198u;
label_487198:
    // 0x487198: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x487198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_48719c:
    // 0x48719c: 0x26320090  addiu       $s2, $s1, 0x90
    ctx->pc = 0x48719cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_4871a0:
    // 0x4871a0: 0x5092000a  beql        $a0, $s2, . + 4 + (0xA << 2)
label_4871a4:
    if (ctx->pc == 0x4871A4u) {
        ctx->pc = 0x4871A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4871A0u;
        // 0x4871a4: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4871A8u;
        goto label_4871a8;
    }
    ctx->pc = 0x4871A0u;
    {
        const bool branch_taken_0x4871a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        if (branch_taken_0x4871a0) {
            ctx->pc = 0x4871A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4871A0u;
            // 0x4871a4: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4871CCu;
            goto label_4871cc;
        }
    }
    ctx->pc = 0x4871A8u;
label_4871a8:
    // 0x4871a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4871a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4871ac:
    // 0x4871ac: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x4871acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_4871b0:
    // 0x4871b0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4871b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4871b4:
    // 0x4871b4: 0x40f809  jalr        $v0
label_4871b8:
    if (ctx->pc == 0x4871B8u) {
        ctx->pc = 0x4871BCu;
        goto label_4871bc;
    }
    ctx->pc = 0x4871B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4871BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4871B4u, 0x4871BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4871BCu;
label_4871bc:
    // 0x4871bc: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4871bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4871c0:
    // 0x4871c0: 0x1612fffb  bne         $s0, $s2, . + 4 + (-0x5 << 2)
label_4871c4:
    if (ctx->pc == 0x4871C4u) {
        ctx->pc = 0x4871C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4871C0u;
        // 0x4871c4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4871C8u;
        goto label_4871c8;
    }
    ctx->pc = 0x4871C0u;
    {
        const bool branch_taken_0x4871c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x4871C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4871C0u;
        // 0x4871c4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4871c0) {
            ctx->pc = 0x4871B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4871b0;
        }
    }
    ctx->pc = 0x4871C8u;
label_4871c8:
    // 0x4871c8: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x4871c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_4871cc:
    // 0x4871cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4871ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4871d0:
    // 0x4871d0: 0x8e240098  lw          $a0, 0x98($s1)
    ctx->pc = 0x4871d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_4871d4:
    // 0x4871d4: 0x304200f3  andi        $v0, $v0, 0xF3
    ctx->pc = 0x4871d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)243);
label_4871d8:
    // 0x4871d8: 0xc121c52  jal         func_487148
label_4871dc:
    if (ctx->pc == 0x4871DCu) {
        ctx->pc = 0x4871DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4871D8u;
        // 0x4871dc: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4871E0u;
        goto label_4871e0;
    }
    ctx->pc = 0x4871D8u;
    SET_GPR_U32(ctx, 31, 0x4871E0u);
    ctx->pc = 0x4871DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4871D8u;
    // 0x4871dc: 0xa2220003  sb          $v0, 0x3($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487148u;
    goto label_487148;
    ctx->pc = 0x4871E0u;
label_4871e0:
    // 0x4871e0: 0x8e31009c  lw          $s1, 0x9C($s1)
    ctx->pc = 0x4871e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4871e4:
    // 0x4871e4: 0x5620ffe4  bnel        $s1, $zero, . + 4 + (-0x1C << 2)
label_4871e8:
    if (ctx->pc == 0x4871E8u) {
        ctx->pc = 0x4871E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4871E4u;
        // 0x4871e8: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4871ECu;
        goto label_4871ec;
    }
    ctx->pc = 0x4871E4u;
    {
        const bool branch_taken_0x4871e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4871e4) {
            ctx->pc = 0x4871E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4871E4u;
            // 0x4871e8: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x487178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_487178;
        }
    }
    ctx->pc = 0x4871ECu;
label_4871ec:
    // 0x4871ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4871ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4871f0:
    // 0x4871f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4871f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4871f4:
    // 0x4871f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4871f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4871f8:
    // 0x4871f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x4871f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4871fc:
    // 0x4871fc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x4871fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_487200:
    // 0x487200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x487200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_487204:
    // 0x487204: 0x3e00008  jr          $ra
label_487208:
    if (ctx->pc == 0x487208u) {
        ctx->pc = 0x487208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487204u;
        // 0x487208: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48720Cu;
        goto label_48720c;
    }
    ctx->pc = 0x487204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487204u;
        // 0x487208: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48720Cu;
label_48720c:
    // 0x48720c: 0x0  nop
    ctx->pc = 0x48720cu;
    // NOP
    ctx->pc = 0x487210u;
}
