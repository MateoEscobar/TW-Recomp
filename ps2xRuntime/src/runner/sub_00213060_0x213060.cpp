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

// Function: sub_00213060
// Address: 0x213060 - 0x2131f0
void sub_00213060_0x213060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213060_0x213060");
#endif

    switch (ctx->pc) {
        case 0x213060u: goto label_213060;
        case 0x213064u: goto label_213064;
        case 0x213068u: goto label_213068;
        case 0x21306cu: goto label_21306c;
        case 0x213070u: goto label_213070;
        case 0x213074u: goto label_213074;
        case 0x213078u: goto label_213078;
        case 0x21307cu: goto label_21307c;
        case 0x213080u: goto label_213080;
        case 0x213084u: goto label_213084;
        case 0x213088u: goto label_213088;
        case 0x21308cu: goto label_21308c;
        case 0x213090u: goto label_213090;
        case 0x213094u: goto label_213094;
        case 0x213098u: goto label_213098;
        case 0x21309cu: goto label_21309c;
        case 0x2130a0u: goto label_2130a0;
        case 0x2130a4u: goto label_2130a4;
        case 0x2130a8u: goto label_2130a8;
        case 0x2130acu: goto label_2130ac;
        case 0x2130b0u: goto label_2130b0;
        case 0x2130b4u: goto label_2130b4;
        case 0x2130b8u: goto label_2130b8;
        case 0x2130bcu: goto label_2130bc;
        case 0x2130c0u: goto label_2130c0;
        case 0x2130c4u: goto label_2130c4;
        case 0x2130c8u: goto label_2130c8;
        case 0x2130ccu: goto label_2130cc;
        case 0x2130d0u: goto label_2130d0;
        case 0x2130d4u: goto label_2130d4;
        case 0x2130d8u: goto label_2130d8;
        case 0x2130dcu: goto label_2130dc;
        case 0x2130e0u: goto label_2130e0;
        case 0x2130e4u: goto label_2130e4;
        case 0x2130e8u: goto label_2130e8;
        case 0x2130ecu: goto label_2130ec;
        case 0x2130f0u: goto label_2130f0;
        case 0x2130f4u: goto label_2130f4;
        case 0x2130f8u: goto label_2130f8;
        case 0x2130fcu: goto label_2130fc;
        case 0x213100u: goto label_213100;
        case 0x213104u: goto label_213104;
        case 0x213108u: goto label_213108;
        case 0x21310cu: goto label_21310c;
        case 0x213110u: goto label_213110;
        case 0x213114u: goto label_213114;
        case 0x213118u: goto label_213118;
        case 0x21311cu: goto label_21311c;
        case 0x213120u: goto label_213120;
        case 0x213124u: goto label_213124;
        case 0x213128u: goto label_213128;
        case 0x21312cu: goto label_21312c;
        case 0x213130u: goto label_213130;
        case 0x213134u: goto label_213134;
        case 0x213138u: goto label_213138;
        case 0x21313cu: goto label_21313c;
        case 0x213140u: goto label_213140;
        case 0x213144u: goto label_213144;
        case 0x213148u: goto label_213148;
        case 0x21314cu: goto label_21314c;
        case 0x213150u: goto label_213150;
        case 0x213154u: goto label_213154;
        case 0x213158u: goto label_213158;
        case 0x21315cu: goto label_21315c;
        case 0x213160u: goto label_213160;
        case 0x213164u: goto label_213164;
        case 0x213168u: goto label_213168;
        case 0x21316cu: goto label_21316c;
        case 0x213170u: goto label_213170;
        case 0x213174u: goto label_213174;
        case 0x213178u: goto label_213178;
        case 0x21317cu: goto label_21317c;
        case 0x213180u: goto label_213180;
        case 0x213184u: goto label_213184;
        case 0x213188u: goto label_213188;
        case 0x21318cu: goto label_21318c;
        case 0x213190u: goto label_213190;
        case 0x213194u: goto label_213194;
        case 0x213198u: goto label_213198;
        case 0x21319cu: goto label_21319c;
        case 0x2131a0u: goto label_2131a0;
        case 0x2131a4u: goto label_2131a4;
        case 0x2131a8u: goto label_2131a8;
        case 0x2131acu: goto label_2131ac;
        case 0x2131b0u: goto label_2131b0;
        case 0x2131b4u: goto label_2131b4;
        case 0x2131b8u: goto label_2131b8;
        case 0x2131bcu: goto label_2131bc;
        case 0x2131c0u: goto label_2131c0;
        case 0x2131c4u: goto label_2131c4;
        case 0x2131c8u: goto label_2131c8;
        case 0x2131ccu: goto label_2131cc;
        case 0x2131d0u: goto label_2131d0;
        case 0x2131d4u: goto label_2131d4;
        case 0x2131d8u: goto label_2131d8;
        case 0x2131dcu: goto label_2131dc;
        case 0x2131e0u: goto label_2131e0;
        case 0x2131e4u: goto label_2131e4;
        case 0x2131e8u: goto label_2131e8;
        case 0x2131ecu: goto label_2131ec;
        default: break;
    }

    ctx->pc = 0x213060u;

label_213060:
    // 0x213060: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x213060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_213064:
    // 0x213064: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x213064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_213068:
    // 0x213068: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x213068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_21306c:
    // 0x21306c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21306cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_213070:
    // 0x213070: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x213070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_213074:
    // 0x213074: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x213074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_213078:
    // 0x213078: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x213078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_21307c:
    // 0x21307c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x21307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_213080:
    // 0x213080: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x213080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_213084:
    // 0x213084: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x213084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_213088:
    // 0x213088: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x213088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_21308c:
    // 0x21308c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x21308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_213090:
    // 0x213090: 0x8e224134  lw          $v0, 0x4134($s1)
    ctx->pc = 0x213090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16692)));
label_213094:
    // 0x213094: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
label_213098:
    if (ctx->pc == 0x213098u) {
        ctx->pc = 0x213098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213094u;
        // 0x213098: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21309Cu;
        goto label_21309c;
    }
    ctx->pc = 0x213094u;
    {
        const bool branch_taken_0x213094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213094u;
        // 0x213098: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213094) {
            ctx->pc = 0x2131C0u;
            goto label_2131c0;
        }
    }
    ctx->pc = 0x21309Cu;
label_21309c:
    // 0x21309c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21309cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2130a0:
    // 0x2130a0: 0x26304150  addiu       $s0, $s1, 0x4150
    ctx->pc = 0x2130a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16720));
label_2130a4:
    // 0x2130a4: 0x245efc30  addiu       $fp, $v0, -0x3D0
    ctx->pc = 0x2130a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966320));
label_2130a8:
    // 0x2130a8: 0xae2540f4  sw          $a1, 0x40F4($s1)
    ctx->pc = 0x2130a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16628), GPR_U32(ctx, 5));
label_2130ac:
    // 0x2130ac: 0x27d7fe10  addiu       $s7, $fp, -0x1F0
    ctx->pc = 0x2130acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966800));
label_2130b0:
    // 0x2130b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2130b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2130b4:
    // 0x2130b4: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x2130b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2130b8:
    // 0x2130b8: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x2130b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2130bc:
    // 0x2130bc: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2130bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2130c0:
    // 0x2130c0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2130c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2130c4:
    // 0x2130c4: 0x0  nop
    ctx->pc = 0x2130c4u;
    // NOP
label_2130c8:
    // 0x2130c8: 0x255001b  divu        $zero, $s2, $s5
    ctx->pc = 0x2130c8u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 18) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,18); } }
label_2130cc:
    // 0x2130cc: 0x8e2240f4  lw          $v0, 0x40F4($s1)
    ctx->pc = 0x2130ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16628)));
label_2130d0:
    // 0x2130d0: 0x24030240  addiu       $v1, $zero, 0x240
    ctx->pc = 0x2130d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_2130d4:
    // 0x2130d4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2130d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2130d8:
    // 0x2130d8: 0x2010  mfhi        $a0
    ctx->pc = 0x2130d8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2130dc:
    // 0x2130dc: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x2130dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2130e0:
    // 0x2130e0: 0xbe1821  addu        $v1, $a1, $fp
    ctx->pc = 0x2130e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_2130e4:
    // 0x2130e4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2130e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2130e8:
    // 0x2130e8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2130e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_2130ec:
    // 0x2130ec: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
label_2130f0:
    if (ctx->pc == 0x2130F0u) {
        ctx->pc = 0x2130F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130ECu;
        // 0x2130f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2130F4u;
        goto label_2130f4;
    }
    ctx->pc = 0x2130ECu;
    {
        const bool branch_taken_0x2130ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2130ec) {
            ctx->pc = 0x2130F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2130ECu;
            // 0x2130f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2130F4u;
            goto label_2130f4;
        }
    }
    ctx->pc = 0x2130F4u;
label_2130f4:
    // 0x2130f4: 0x14880016  bne         $a0, $t0, . + 4 + (0x16 << 2)
label_2130f8:
    if (ctx->pc == 0x2130F8u) {
        ctx->pc = 0x2130F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130F4u;
        // 0x2130f8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2130FCu;
        goto label_2130fc;
    }
    ctx->pc = 0x2130F4u;
    {
        const bool branch_taken_0x2130f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x2130F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130F4u;
        // 0x2130f8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130f4) {
            ctx->pc = 0x213150u;
            goto label_213150;
        }
    }
    ctx->pc = 0x2130FCu;
label_2130fc:
    // 0x2130fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2130fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213100:
    // 0x213100: 0x8e264148  lw          $a2, 0x4148($s1)
    ctx->pc = 0x213100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16712)));
label_213104:
    // 0x213104: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x213104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_213108:
    // 0x213108: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x213108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_21310c:
    // 0x21310c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x21310cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_213110:
    // 0x213110: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x213110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_213114:
    // 0x213114: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x213114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213118:
    // 0x213118: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x213118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_21311c:
    // 0x21311c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x21311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_213120:
    // 0x213120: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x213120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
label_213124:
    // 0x213124: 0x2409016f  addiu       $t1, $zero, 0x16F
    ctx->pc = 0x213124u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
label_213128:
    // 0x213128: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x213128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_21312c:
    // 0x21312c: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x21312cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_213130:
    // 0x213130: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x213130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_213134:
    // 0x213134: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x213134u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_213138:
    // 0x213138: 0xc44c0210  lwc1        $f12, 0x210($v0)
    ctx->pc = 0x213138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_21313c:
    // 0x21313c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x21313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_213140:
    // 0x213140: 0x40f809  jalr        $v0
label_213144:
    if (ctx->pc == 0x213144u) {
        ctx->pc = 0x213144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213140u;
        // 0x213144: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213148u;
        goto label_213148;
    }
    ctx->pc = 0x213140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x213148u);
        ctx->pc = 0x213144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213140u;
        // 0x213144: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213140u, 0x213148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x213148u;
label_213148:
    // 0x213148: 0x10000015  b           . + 4 + (0x15 << 2)
label_21314c:
    if (ctx->pc == 0x21314Cu) {
        ctx->pc = 0x21314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213148u;
        // 0x21314c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213150u;
        goto label_213150;
    }
    ctx->pc = 0x213148u;
    {
        const bool branch_taken_0x213148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213148u;
        // 0x21314c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213148) {
            ctx->pc = 0x2131A0u;
            goto label_2131a0;
        }
    }
    ctx->pc = 0x213150u;
label_213150:
    // 0x213150: 0xb71021  addu        $v0, $a1, $s7
    ctx->pc = 0x213150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
label_213154:
    // 0x213154: 0x8e264148  lw          $a2, 0x4148($s1)
    ctx->pc = 0x213154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16712)));
label_213158:
    // 0x213158: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x213158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_21315c:
    // 0x21315c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x21315cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_213160:
    // 0x213160: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x213160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_213164:
    // 0x213164: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x213164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_213168:
    // 0x213168: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x213168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21316c:
    // 0x21316c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x21316cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_213170:
    // 0x213170: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x213170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_213174:
    // 0x213174: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x213174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
label_213178:
    // 0x213178: 0x2409016e  addiu       $t1, $zero, 0x16E
    ctx->pc = 0x213178u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
label_21317c:
    // 0x21317c: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x21317cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_213180:
    // 0x213180: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x213180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_213184:
    // 0x213184: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x213184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_213188:
    // 0x213188: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x213188u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21318c:
    // 0x21318c: 0xc44c0210  lwc1        $f12, 0x210($v0)
    ctx->pc = 0x21318cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_213190:
    // 0x213190: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x213190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_213194:
    // 0x213194: 0x40f809  jalr        $v0
label_213198:
    if (ctx->pc == 0x213198u) {
        ctx->pc = 0x213198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213194u;
        // 0x213198: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21319Cu;
        goto label_21319c;
    }
    ctx->pc = 0x213194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21319Cu);
        ctx->pc = 0x213198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213194u;
        // 0x213198: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213194u, 0x21319Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21319Cu;
label_21319c:
    // 0x21319c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21319cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2131a0:
    // 0x2131a0: 0x26940100  addiu       $s4, $s4, 0x100
    ctx->pc = 0x2131a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_2131a4:
    // 0x2131a4: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x2131a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_2131a8:
    // 0x2131a8: 0x2e420009  sltiu       $v0, $s2, 0x9
    ctx->pc = 0x2131a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2131ac:
    // 0x2131ac: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
label_2131b0:
    if (ctx->pc == 0x2131B0u) {
        ctx->pc = 0x2131B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131ACu;
        // 0x2131b0: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2131B4u;
        goto label_2131b4;
    }
    ctx->pc = 0x2131ACu;
    {
        const bool branch_taken_0x2131ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2131B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131ACu;
        // 0x2131b0: 0x26730100  addiu       $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2131ac) {
            ctx->pc = 0x2130C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2130c8;
        }
    }
    ctx->pc = 0x2131B4u;
label_2131b4:
    // 0x2131b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2131b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2131b8:
    // 0x2131b8: 0xae224134  sw          $v0, 0x4134($s1)
    ctx->pc = 0x2131b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16692), GPR_U32(ctx, 2));
label_2131bc:
    // 0x2131bc: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2131bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2131c0:
    // 0x2131c0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2131c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2131c4:
    // 0x2131c4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2131c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2131c8:
    // 0x2131c8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2131c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2131cc:
    // 0x2131cc: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2131ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2131d0:
    // 0x2131d0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2131d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2131d4:
    // 0x2131d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2131d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2131d8:
    // 0x2131d8: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2131d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2131dc:
    // 0x2131dc: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2131dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2131e0:
    // 0x2131e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2131e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2131e4:
    // 0x2131e4: 0x3e00008  jr          $ra
label_2131e8:
    if (ctx->pc == 0x2131E8u) {
        ctx->pc = 0x2131E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131E4u;
        // 0x2131e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2131ECu;
        goto label_2131ec;
    }
    ctx->pc = 0x2131E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2131E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2131E4u;
        // 0x2131e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2131E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2131ECu;
label_2131ec:
    // 0x2131ec: 0x0  nop
    ctx->pc = 0x2131ecu;
    // NOP
    ctx->pc = 0x2131f0u;
}
