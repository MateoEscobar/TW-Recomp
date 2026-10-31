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

// Function: sub_00391138
// Address: 0x391138 - 0x391330
void sub_00391138_0x391138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00391138_0x391138");
#endif

    switch (ctx->pc) {
        case 0x391138u: goto label_391138;
        case 0x39113cu: goto label_39113c;
        case 0x391140u: goto label_391140;
        case 0x391144u: goto label_391144;
        case 0x391148u: goto label_391148;
        case 0x39114cu: goto label_39114c;
        case 0x391150u: goto label_391150;
        case 0x391154u: goto label_391154;
        case 0x391158u: goto label_391158;
        case 0x39115cu: goto label_39115c;
        case 0x391160u: goto label_391160;
        case 0x391164u: goto label_391164;
        case 0x391168u: goto label_391168;
        case 0x39116cu: goto label_39116c;
        case 0x391170u: goto label_391170;
        case 0x391174u: goto label_391174;
        case 0x391178u: goto label_391178;
        case 0x39117cu: goto label_39117c;
        case 0x391180u: goto label_391180;
        case 0x391184u: goto label_391184;
        case 0x391188u: goto label_391188;
        case 0x39118cu: goto label_39118c;
        case 0x391190u: goto label_391190;
        case 0x391194u: goto label_391194;
        case 0x391198u: goto label_391198;
        case 0x39119cu: goto label_39119c;
        case 0x3911a0u: goto label_3911a0;
        case 0x3911a4u: goto label_3911a4;
        case 0x3911a8u: goto label_3911a8;
        case 0x3911acu: goto label_3911ac;
        case 0x3911b0u: goto label_3911b0;
        case 0x3911b4u: goto label_3911b4;
        case 0x3911b8u: goto label_3911b8;
        case 0x3911bcu: goto label_3911bc;
        case 0x3911c0u: goto label_3911c0;
        case 0x3911c4u: goto label_3911c4;
        case 0x3911c8u: goto label_3911c8;
        case 0x3911ccu: goto label_3911cc;
        case 0x3911d0u: goto label_3911d0;
        case 0x3911d4u: goto label_3911d4;
        case 0x3911d8u: goto label_3911d8;
        case 0x3911dcu: goto label_3911dc;
        case 0x3911e0u: goto label_3911e0;
        case 0x3911e4u: goto label_3911e4;
        case 0x3911e8u: goto label_3911e8;
        case 0x3911ecu: goto label_3911ec;
        case 0x3911f0u: goto label_3911f0;
        case 0x3911f4u: goto label_3911f4;
        case 0x3911f8u: goto label_3911f8;
        case 0x3911fcu: goto label_3911fc;
        case 0x391200u: goto label_391200;
        case 0x391204u: goto label_391204;
        case 0x391208u: goto label_391208;
        case 0x39120cu: goto label_39120c;
        case 0x391210u: goto label_391210;
        case 0x391214u: goto label_391214;
        case 0x391218u: goto label_391218;
        case 0x39121cu: goto label_39121c;
        case 0x391220u: goto label_391220;
        case 0x391224u: goto label_391224;
        case 0x391228u: goto label_391228;
        case 0x39122cu: goto label_39122c;
        case 0x391230u: goto label_391230;
        case 0x391234u: goto label_391234;
        case 0x391238u: goto label_391238;
        case 0x39123cu: goto label_39123c;
        case 0x391240u: goto label_391240;
        case 0x391244u: goto label_391244;
        case 0x391248u: goto label_391248;
        case 0x39124cu: goto label_39124c;
        case 0x391250u: goto label_391250;
        case 0x391254u: goto label_391254;
        case 0x391258u: goto label_391258;
        case 0x39125cu: goto label_39125c;
        case 0x391260u: goto label_391260;
        case 0x391264u: goto label_391264;
        case 0x391268u: goto label_391268;
        case 0x39126cu: goto label_39126c;
        case 0x391270u: goto label_391270;
        case 0x391274u: goto label_391274;
        case 0x391278u: goto label_391278;
        case 0x39127cu: goto label_39127c;
        case 0x391280u: goto label_391280;
        case 0x391284u: goto label_391284;
        case 0x391288u: goto label_391288;
        case 0x39128cu: goto label_39128c;
        case 0x391290u: goto label_391290;
        case 0x391294u: goto label_391294;
        case 0x391298u: goto label_391298;
        case 0x39129cu: goto label_39129c;
        case 0x3912a0u: goto label_3912a0;
        case 0x3912a4u: goto label_3912a4;
        case 0x3912a8u: goto label_3912a8;
        case 0x3912acu: goto label_3912ac;
        case 0x3912b0u: goto label_3912b0;
        case 0x3912b4u: goto label_3912b4;
        case 0x3912b8u: goto label_3912b8;
        case 0x3912bcu: goto label_3912bc;
        case 0x3912c0u: goto label_3912c0;
        case 0x3912c4u: goto label_3912c4;
        case 0x3912c8u: goto label_3912c8;
        case 0x3912ccu: goto label_3912cc;
        case 0x3912d0u: goto label_3912d0;
        case 0x3912d4u: goto label_3912d4;
        case 0x3912d8u: goto label_3912d8;
        case 0x3912dcu: goto label_3912dc;
        case 0x3912e0u: goto label_3912e0;
        case 0x3912e4u: goto label_3912e4;
        case 0x3912e8u: goto label_3912e8;
        case 0x3912ecu: goto label_3912ec;
        case 0x3912f0u: goto label_3912f0;
        case 0x3912f4u: goto label_3912f4;
        case 0x3912f8u: goto label_3912f8;
        case 0x3912fcu: goto label_3912fc;
        case 0x391300u: goto label_391300;
        case 0x391304u: goto label_391304;
        case 0x391308u: goto label_391308;
        case 0x39130cu: goto label_39130c;
        case 0x391310u: goto label_391310;
        case 0x391314u: goto label_391314;
        case 0x391318u: goto label_391318;
        case 0x39131cu: goto label_39131c;
        case 0x391320u: goto label_391320;
        case 0x391324u: goto label_391324;
        case 0x391328u: goto label_391328;
        case 0x39132cu: goto label_39132c;
        default: break;
    }

    ctx->pc = 0x391138u;

label_391138:
    // 0x391138: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x391138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_39113c:
    // 0x39113c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x39113cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_391140:
    // 0x391140: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x391140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_391144:
    // 0x391144: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x391144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_391148:
    // 0x391148: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x391148u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39114c:
    // 0x39114c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x39114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_391150:
    // 0x391150: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x391150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_391154:
    // 0x391154: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x391154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_391158:
    // 0x391158: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x391158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_39115c:
    // 0x39115c: 0x34634df4  ori         $v1, $v1, 0x4DF4
    ctx->pc = 0x39115cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19956);
label_391160:
    // 0x391160: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x391160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_391164:
    // 0x391164: 0x2c39021  addu        $s2, $s6, $v1
    ctx->pc = 0x391164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_391168:
    // 0x391168: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x391168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_39116c:
    // 0x39116c: 0x26480004  addiu       $t0, $s2, 0x4
    ctx->pc = 0x39116cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_391170:
    // 0x391170: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x391170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_391174:
    // 0x391174: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x391174u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_391178:
    // 0x391178: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x391178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_39117c:
    // 0x39117c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x39117cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_391180:
    // 0x391180: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x391180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_391184:
    // 0x391184: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x391184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_391188:
    // 0x391188: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x391188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39118c:
    // 0x39118c: 0xac404bc0  sw          $zero, 0x4BC0($v0)
    ctx->pc = 0x39118cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 19392), GPR_U32(ctx, 0));
label_391190:
    // 0x391190: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x391190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_391194:
    // 0x391194: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x391194u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_391198:
    // 0x391198: 0x24510cf0  addiu       $s1, $v0, 0xCF0
    ctx->pc = 0x391198u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3312));
label_39119c:
    // 0x39119c: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x39119cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_3911a0:
    // 0x3911a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3911a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3911a4:
    // 0x3911a4: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x3911a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_3911a8:
    // 0x3911a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3911a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3911ac:
    // 0x3911ac: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x3911acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
label_3911b0:
    // 0x3911b0: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x3911b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3911b4:
    // 0x3911b4: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3911b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_3911b8:
    // 0x3911b8: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x3911b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_3911bc:
    // 0x3911bc: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x3911bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_3911c0:
    // 0x3911c0: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x3911c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
label_3911c4:
    // 0x3911c4: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3911c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_3911c8:
    // 0x3911c8: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x3911c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
label_3911cc:
    // 0x3911cc: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x3911ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_3911d0:
    // 0x3911d0: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x3911d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
label_3911d4:
    // 0x3911d4: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x3911d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_3911d8:
    // 0x3911d8: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x3911d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
label_3911dc:
    // 0x3911dc: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3911dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3911e0:
    // 0x3911e0: 0xc136850  jal         func_4DA140
label_3911e4:
    if (ctx->pc == 0x3911E4u) {
        ctx->pc = 0x3911E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911E0u;
        // 0x3911e4: 0xffa90030  sd          $t1, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3911E8u;
        goto label_3911e8;
    }
    ctx->pc = 0x3911E0u;
    SET_GPR_U32(ctx, 31, 0x3911E8u);
    ctx->pc = 0x3911E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3911E0u;
    // 0x3911e4: 0xffa90030  sd          $t1, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DA140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DA140u, 0x3911E0u, 0x3911E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3911E8u;
label_3911e8:
    // 0x3911e8: 0x54500002  bnel        $v0, $s0, . + 4 + (0x2 << 2)
label_3911ec:
    if (ctx->pc == 0x3911ECu) {
        ctx->pc = 0x3911ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3911E8u;
        // 0x3911ec: 0xdc420000  ld          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3911F0u;
        goto label_3911f0;
    }
    ctx->pc = 0x3911E8u;
    {
        const bool branch_taken_0x3911e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3911e8) {
            ctx->pc = 0x3911ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3911E8u;
            // 0x3911ec: 0xdc420000  ld          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3911F4u;
            goto label_3911f4;
        }
    }
    ctx->pc = 0x3911F0u;
label_3911f0:
    // 0x3911f0: 0xde2200d8  ld          $v0, 0xD8($s1)
    ctx->pc = 0x3911f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 216)));
label_3911f4:
    // 0x3911f4: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x3911f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3911f8:
    // 0x3911f8: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x3911f8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
label_3911fc:
    // 0x3911fc: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x3911fcu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_391200:
    // 0x391200: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x391200u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_391204:
    // 0x391204: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x391204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_391208:
    // 0x391208: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x391208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_39120c:
    // 0x39120c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x39120cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_391210:
    // 0x391210: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x391210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_391214:
    // 0x391214: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_391218:
    if (ctx->pc == 0x391218u) {
        ctx->pc = 0x391218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391214u;
        // 0x391218: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39121Cu;
        goto label_39121c;
    }
    ctx->pc = 0x391214u;
    {
        const bool branch_taken_0x391214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391214u;
        // 0x391218: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391214) {
            ctx->pc = 0x3912CCu;
            goto label_3912cc;
        }
    }
    ctx->pc = 0x39121Cu;
label_39121c:
    // 0x39121c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_391220:
    // 0x391220: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x391220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_391224:
    // 0x391224: 0x8c47b9c0  lw          $a3, -0x4640($v0)
    ctx->pc = 0x391224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_391228:
    // 0x391228: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x391228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_39122c:
    // 0x39122c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x39122cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_391230:
    // 0x391230: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x391230u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_391234:
    // 0x391234: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x391234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_391238:
    // 0x391238: 0x245e0cb0  addiu       $fp, $v0, 0xCB0
    ctx->pc = 0x391238u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
label_39123c:
    // 0x39123c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x39123cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_391240:
    // 0x391240: 0x14b880  sll         $s7, $s4, 2
    ctx->pc = 0x391240u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_391244:
    // 0x391244: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x391244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_391248:
    // 0x391248: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x391248u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_39124c:
    // 0x39124c: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x39124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_391250:
    // 0x391250: 0x3a880  sll         $s5, $v1, 2
    ctx->pc = 0x391250u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_391254:
    // 0x391254: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x391254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_391258:
    // 0x391258: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x391258u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39125c:
    // 0x39125c: 0x254a0ce0  addiu       $t2, $t2, 0xCE0
    ctx->pc = 0x39125cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3296));
label_391260:
    // 0x391260: 0x24a50cd8  addiu       $a1, $a1, 0xCD8
    ctx->pc = 0x391260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3288));
label_391264:
    // 0x391264: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x391264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_391268:
    // 0x391268: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x391268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_39126c:
    // 0x39126c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x39126cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_391270:
    // 0x391270: 0x40f809  jalr        $v0
label_391274:
    if (ctx->pc == 0x391274u) {
        ctx->pc = 0x391274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391270u;
        // 0x391274: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391278u;
        goto label_391278;
    }
    ctx->pc = 0x391270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x391278u);
        ctx->pc = 0x391274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391270u;
        // 0x391274: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391270u, 0x391278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x391278u;
label_391278:
    // 0x391278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x391278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39127c:
    // 0x39127c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39127cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_391280:
    // 0x391280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x391280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_391284:
    // 0x391284: 0xc10c1bb  jal         func_4306EC
label_391288:
    if (ctx->pc == 0x391288u) {
        ctx->pc = 0x391288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391284u;
        // 0x391288: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39128Cu;
        goto label_39128c;
    }
    ctx->pc = 0x391284u;
    SET_GPR_U32(ctx, 31, 0x39128Cu);
    ctx->pc = 0x391288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x391284u;
    // 0x391288: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x391284u, 0x39128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39128Cu;
label_39128c:
    // 0x39128c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x39128cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_391290:
    // 0x391290: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_391294:
    if (ctx->pc == 0x391294u) {
        ctx->pc = 0x391294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391290u;
        // 0x391294: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x391298u;
        goto label_391298;
    }
    ctx->pc = 0x391290u;
    {
        const bool branch_taken_0x391290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x391294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391290u;
        // 0x391294: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391290) {
            ctx->pc = 0x3912B8u;
            goto label_3912b8;
        }
    }
    ctx->pc = 0x391298u;
label_391298:
    // 0x391298: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x391298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_39129c:
    // 0x39129c: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x39129cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_3912a0:
    // 0x3912a0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x3912a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_3912a4:
    // 0x3912a4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3912a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3912a8:
    // 0x3912a8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x3912a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_3912ac:
    // 0x3912ac: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x3912acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3912b0:
    // 0x3912b0: 0x60f809  jalr        $v1
label_3912b4:
    if (ctx->pc == 0x3912B4u) {
        ctx->pc = 0x3912B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912B0u;
        // 0x3912b4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3912B8u;
        goto label_3912b8;
    }
    ctx->pc = 0x3912B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3912B8u);
        ctx->pc = 0x3912B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912B0u;
        // 0x3912b4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3912B0u, 0x3912B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3912B8u;
label_3912b8:
    // 0x3912b8: 0x2171821  addu        $v1, $s0, $s7
    ctx->pc = 0x3912b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_3912bc:
    // 0x3912bc: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x3912bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_3912c0:
    // 0x3912c0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3912c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_3912c4:
    // 0x3912c4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x3912c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_3912c8:
    // 0x3912c8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3912c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_3912cc:
    // 0x3912cc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x3912ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3912d0:
    // 0x3912d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3912d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3912d4:
    // 0x3912d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3912d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3912d8:
    // 0x3912d8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3912d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3912dc:
    // 0x3912dc: 0xc13ccc6  jal         func_4F3318
label_3912e0:
    if (ctx->pc == 0x3912E0u) {
        ctx->pc = 0x3912E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912DCu;
        // 0x3912e0: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3912E4u;
        goto label_3912e4;
    }
    ctx->pc = 0x3912DCu;
    SET_GPR_U32(ctx, 31, 0x3912E4u);
    ctx->pc = 0x3912E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3912DCu;
    // 0x3912e0: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F3318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F3318u, 0x3912DCu, 0x3912E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3912E4u;
label_3912e4:
    // 0x3912e4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3912e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3912e8:
    // 0x3912e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3912e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3912ec:
    // 0x3912ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3912ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3912f0:
    // 0x3912f0: 0xc10c1fa  jal         func_4307E8
label_3912f4:
    if (ctx->pc == 0x3912F4u) {
        ctx->pc = 0x3912F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3912F0u;
        // 0x3912f4: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3912F8u;
        goto label_3912f8;
    }
    ctx->pc = 0x3912F0u;
    SET_GPR_U32(ctx, 31, 0x3912F8u);
    ctx->pc = 0x3912F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3912F0u;
    // 0x3912f4: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x3912F0u, 0x3912F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3912F8u;
label_3912f8:
    // 0x3912f8: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3912f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3912fc:
    // 0x3912fc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3912fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_391300:
    // 0x391300: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x391300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_391304:
    // 0x391304: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x391304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_391308:
    // 0x391308: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x391308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_39130c:
    // 0x39130c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x39130cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_391310:
    // 0x391310: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x391310u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_391314:
    // 0x391314: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x391314u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_391318:
    // 0x391318: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x391318u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39131c:
    // 0x39131c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x39131cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_391320:
    // 0x391320: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x391320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_391324:
    // 0x391324: 0x3e00008  jr          $ra
label_391328:
    if (ctx->pc == 0x391328u) {
        ctx->pc = 0x391328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391324u;
        // 0x391328: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39132Cu;
        goto label_39132c;
    }
    ctx->pc = 0x391324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391324u;
        // 0x391328: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39132Cu;
label_39132c:
    // 0x39132c: 0x0  nop
    ctx->pc = 0x39132cu;
    // NOP
    ctx->pc = 0x391330u;
}
