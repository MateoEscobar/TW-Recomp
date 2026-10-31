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

// Function: sub_00191230
// Address: 0x191230 - 0x191530
void sub_00191230_0x191230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191230_0x191230");
#endif

    switch (ctx->pc) {
        case 0x191230u: goto label_191230;
        case 0x191234u: goto label_191234;
        case 0x191238u: goto label_191238;
        case 0x19123cu: goto label_19123c;
        case 0x191240u: goto label_191240;
        case 0x191244u: goto label_191244;
        case 0x191248u: goto label_191248;
        case 0x19124cu: goto label_19124c;
        case 0x191250u: goto label_191250;
        case 0x191254u: goto label_191254;
        case 0x191258u: goto label_191258;
        case 0x19125cu: goto label_19125c;
        case 0x191260u: goto label_191260;
        case 0x191264u: goto label_191264;
        case 0x191268u: goto label_191268;
        case 0x19126cu: goto label_19126c;
        case 0x191270u: goto label_191270;
        case 0x191274u: goto label_191274;
        case 0x191278u: goto label_191278;
        case 0x19127cu: goto label_19127c;
        case 0x191280u: goto label_191280;
        case 0x191284u: goto label_191284;
        case 0x191288u: goto label_191288;
        case 0x19128cu: goto label_19128c;
        case 0x191290u: goto label_191290;
        case 0x191294u: goto label_191294;
        case 0x191298u: goto label_191298;
        case 0x19129cu: goto label_19129c;
        case 0x1912a0u: goto label_1912a0;
        case 0x1912a4u: goto label_1912a4;
        case 0x1912a8u: goto label_1912a8;
        case 0x1912acu: goto label_1912ac;
        case 0x1912b0u: goto label_1912b0;
        case 0x1912b4u: goto label_1912b4;
        case 0x1912b8u: goto label_1912b8;
        case 0x1912bcu: goto label_1912bc;
        case 0x1912c0u: goto label_1912c0;
        case 0x1912c4u: goto label_1912c4;
        case 0x1912c8u: goto label_1912c8;
        case 0x1912ccu: goto label_1912cc;
        case 0x1912d0u: goto label_1912d0;
        case 0x1912d4u: goto label_1912d4;
        case 0x1912d8u: goto label_1912d8;
        case 0x1912dcu: goto label_1912dc;
        case 0x1912e0u: goto label_1912e0;
        case 0x1912e4u: goto label_1912e4;
        case 0x1912e8u: goto label_1912e8;
        case 0x1912ecu: goto label_1912ec;
        case 0x1912f0u: goto label_1912f0;
        case 0x1912f4u: goto label_1912f4;
        case 0x1912f8u: goto label_1912f8;
        case 0x1912fcu: goto label_1912fc;
        case 0x191300u: goto label_191300;
        case 0x191304u: goto label_191304;
        case 0x191308u: goto label_191308;
        case 0x19130cu: goto label_19130c;
        case 0x191310u: goto label_191310;
        case 0x191314u: goto label_191314;
        case 0x191318u: goto label_191318;
        case 0x19131cu: goto label_19131c;
        case 0x191320u: goto label_191320;
        case 0x191324u: goto label_191324;
        case 0x191328u: goto label_191328;
        case 0x19132cu: goto label_19132c;
        case 0x191330u: goto label_191330;
        case 0x191334u: goto label_191334;
        case 0x191338u: goto label_191338;
        case 0x19133cu: goto label_19133c;
        case 0x191340u: goto label_191340;
        case 0x191344u: goto label_191344;
        case 0x191348u: goto label_191348;
        case 0x19134cu: goto label_19134c;
        case 0x191350u: goto label_191350;
        case 0x191354u: goto label_191354;
        case 0x191358u: goto label_191358;
        case 0x19135cu: goto label_19135c;
        case 0x191360u: goto label_191360;
        case 0x191364u: goto label_191364;
        case 0x191368u: goto label_191368;
        case 0x19136cu: goto label_19136c;
        case 0x191370u: goto label_191370;
        case 0x191374u: goto label_191374;
        case 0x191378u: goto label_191378;
        case 0x19137cu: goto label_19137c;
        case 0x191380u: goto label_191380;
        case 0x191384u: goto label_191384;
        case 0x191388u: goto label_191388;
        case 0x19138cu: goto label_19138c;
        case 0x191390u: goto label_191390;
        case 0x191394u: goto label_191394;
        case 0x191398u: goto label_191398;
        case 0x19139cu: goto label_19139c;
        case 0x1913a0u: goto label_1913a0;
        case 0x1913a4u: goto label_1913a4;
        case 0x1913a8u: goto label_1913a8;
        case 0x1913acu: goto label_1913ac;
        case 0x1913b0u: goto label_1913b0;
        case 0x1913b4u: goto label_1913b4;
        case 0x1913b8u: goto label_1913b8;
        case 0x1913bcu: goto label_1913bc;
        case 0x1913c0u: goto label_1913c0;
        case 0x1913c4u: goto label_1913c4;
        case 0x1913c8u: goto label_1913c8;
        case 0x1913ccu: goto label_1913cc;
        case 0x1913d0u: goto label_1913d0;
        case 0x1913d4u: goto label_1913d4;
        case 0x1913d8u: goto label_1913d8;
        case 0x1913dcu: goto label_1913dc;
        case 0x1913e0u: goto label_1913e0;
        case 0x1913e4u: goto label_1913e4;
        case 0x1913e8u: goto label_1913e8;
        case 0x1913ecu: goto label_1913ec;
        case 0x1913f0u: goto label_1913f0;
        case 0x1913f4u: goto label_1913f4;
        case 0x1913f8u: goto label_1913f8;
        case 0x1913fcu: goto label_1913fc;
        case 0x191400u: goto label_191400;
        case 0x191404u: goto label_191404;
        case 0x191408u: goto label_191408;
        case 0x19140cu: goto label_19140c;
        case 0x191410u: goto label_191410;
        case 0x191414u: goto label_191414;
        case 0x191418u: goto label_191418;
        case 0x19141cu: goto label_19141c;
        case 0x191420u: goto label_191420;
        case 0x191424u: goto label_191424;
        case 0x191428u: goto label_191428;
        case 0x19142cu: goto label_19142c;
        case 0x191430u: goto label_191430;
        case 0x191434u: goto label_191434;
        case 0x191438u: goto label_191438;
        case 0x19143cu: goto label_19143c;
        case 0x191440u: goto label_191440;
        case 0x191444u: goto label_191444;
        case 0x191448u: goto label_191448;
        case 0x19144cu: goto label_19144c;
        case 0x191450u: goto label_191450;
        case 0x191454u: goto label_191454;
        case 0x191458u: goto label_191458;
        case 0x19145cu: goto label_19145c;
        case 0x191460u: goto label_191460;
        case 0x191464u: goto label_191464;
        case 0x191468u: goto label_191468;
        case 0x19146cu: goto label_19146c;
        case 0x191470u: goto label_191470;
        case 0x191474u: goto label_191474;
        case 0x191478u: goto label_191478;
        case 0x19147cu: goto label_19147c;
        case 0x191480u: goto label_191480;
        case 0x191484u: goto label_191484;
        case 0x191488u: goto label_191488;
        case 0x19148cu: goto label_19148c;
        case 0x191490u: goto label_191490;
        case 0x191494u: goto label_191494;
        case 0x191498u: goto label_191498;
        case 0x19149cu: goto label_19149c;
        case 0x1914a0u: goto label_1914a0;
        case 0x1914a4u: goto label_1914a4;
        case 0x1914a8u: goto label_1914a8;
        case 0x1914acu: goto label_1914ac;
        case 0x1914b0u: goto label_1914b0;
        case 0x1914b4u: goto label_1914b4;
        case 0x1914b8u: goto label_1914b8;
        case 0x1914bcu: goto label_1914bc;
        case 0x1914c0u: goto label_1914c0;
        case 0x1914c4u: goto label_1914c4;
        case 0x1914c8u: goto label_1914c8;
        case 0x1914ccu: goto label_1914cc;
        case 0x1914d0u: goto label_1914d0;
        case 0x1914d4u: goto label_1914d4;
        case 0x1914d8u: goto label_1914d8;
        case 0x1914dcu: goto label_1914dc;
        case 0x1914e0u: goto label_1914e0;
        case 0x1914e4u: goto label_1914e4;
        case 0x1914e8u: goto label_1914e8;
        case 0x1914ecu: goto label_1914ec;
        case 0x1914f0u: goto label_1914f0;
        case 0x1914f4u: goto label_1914f4;
        case 0x1914f8u: goto label_1914f8;
        case 0x1914fcu: goto label_1914fc;
        case 0x191500u: goto label_191500;
        case 0x191504u: goto label_191504;
        case 0x191508u: goto label_191508;
        case 0x19150cu: goto label_19150c;
        case 0x191510u: goto label_191510;
        case 0x191514u: goto label_191514;
        case 0x191518u: goto label_191518;
        case 0x19151cu: goto label_19151c;
        case 0x191520u: goto label_191520;
        case 0x191524u: goto label_191524;
        case 0x191528u: goto label_191528;
        case 0x19152cu: goto label_19152c;
        default: break;
    }

    ctx->pc = 0x191230u;

label_191230:
    // 0x191230: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x191230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_191234:
    // 0x191234: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x191234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191238:
    // 0x191238: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x191238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_19123c:
    // 0x19123c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x19123cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_191240:
    // 0x191240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x191240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191244:
    // 0x191244: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x191244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_191248:
    // 0x191248: 0x262200f4  addiu       $v0, $s1, 0xF4
    ctx->pc = 0x191248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
label_19124c:
    // 0x19124c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x19124cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_191250:
    // 0x191250: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x191250u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_191254:
    // 0x191254: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x191254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_191258:
    // 0x191258: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x191258u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19125c:
    // 0x19125c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_191260:
    // 0x191260: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x191260u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_191264:
    // 0x191264: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x191264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_191268:
    // 0x191268: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x191268u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_19126c:
    // 0x19126c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x19126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_191270:
    // 0x191270: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x191270u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_191274:
    // 0x191274: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x191274u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_191278:
    // 0x191278: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x191278u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_19127c:
    // 0x19127c: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x19127cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_191280:
    // 0x191280: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x191280u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
label_191284:
    // 0x191284: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x191284u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_191288:
    // 0x191288: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x191288u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_19128c:
    // 0x19128c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x19128cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_191290:
    // 0x191290: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x191290u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_191294:
    // 0x191294: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x191294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_191298:
    // 0x191298: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x191298u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_19129c:
    // 0x19129c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19129cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1912a0:
    // 0x1912a0: 0x8fb200f8  lw          $s2, 0xF8($sp)
    ctx->pc = 0x1912a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_1912a4:
    // 0x1912a4: 0x0  nop
    ctx->pc = 0x1912a4u;
    // NOP
label_1912a8:
    // 0x1912a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1912a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1912ac:
    // 0x1912ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1912acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1912b0:
    // 0x1912b0: 0x0  nop
    ctx->pc = 0x1912b0u;
    // NOP
label_1912b4:
    // 0x1912b4: 0x0  nop
    ctx->pc = 0x1912b4u;
    // NOP
label_1912b8:
    // 0x1912b8: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_1912bc:
    if (ctx->pc == 0x1912BCu) {
        ctx->pc = 0x1912BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912B8u;
        // 0x1912bc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912C0u;
        goto label_1912c0;
    }
    ctx->pc = 0x1912B8u;
    {
        const bool branch_taken_0x1912b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912B8u;
        // 0x1912bc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912b8) {
            ctx->pc = 0x1912A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1912a8;
        }
    }
    ctx->pc = 0x1912C0u;
label_1912c0:
    // 0x1912c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1912c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1912c4:
    // 0x1912c4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1912c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1912c8:
    // 0x1912c8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1912c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_1912cc:
    // 0x1912cc: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1912ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
label_1912d0:
    // 0x1912d0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x1912d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_1912d4:
    // 0x1912d4: 0x261091e0  addiu       $s0, $s0, -0x6E20
    ctx->pc = 0x1912d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939104));
label_1912d8:
    // 0x1912d8: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x1912d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
label_1912dc:
    // 0x1912dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1912dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1912e0:
    // 0x1912e0: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x1912e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_1912e4:
    // 0x1912e4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x1912e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1912e8:
    // 0x1912e8: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x1912e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_1912ec:
    // 0x1912ec: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x1912ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_1912f0:
    // 0x1912f0: 0xc050fda  jal         func_143F68
label_1912f4:
    if (ctx->pc == 0x1912F4u) {
        ctx->pc = 0x1912F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1912F0u;
        // 0x1912f4: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1912F8u;
        goto label_1912f8;
    }
    ctx->pc = 0x1912F0u;
    SET_GPR_U32(ctx, 31, 0x1912F8u);
    ctx->pc = 0x1912F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1912F0u;
    // 0x1912f4: 0x7e230020  sq          $v1, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1912F0u, 0x1912F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912F8u;
label_1912f8:
    // 0x1912f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1912f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1912fc:
    // 0x1912fc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1912fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_191300:
    // 0x191300: 0xc050fda  jal         func_143F68
label_191304:
    if (ctx->pc == 0x191304u) {
        ctx->pc = 0x191304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191300u;
        // 0x191304: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191308u;
        goto label_191308;
    }
    ctx->pc = 0x191300u;
    SET_GPR_U32(ctx, 31, 0x191308u);
    ctx->pc = 0x191304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191300u;
    // 0x191304: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x191300u, 0x191308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191308u;
label_191308:
    // 0x191308: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x191308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_19130c:
    // 0x19130c: 0x26a40001  addiu       $a0, $s5, 0x1
    ctx->pc = 0x19130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_191310:
    // 0x191310: 0xe6340040  swc1        $f20, 0x40($s1)
    ctx->pc = 0x191310u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_191314:
    // 0x191314: 0x123c02  srl         $a3, $s2, 16
    ctx->pc = 0x191314u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
label_191318:
    // 0x191318: 0xe6350044  swc1        $f21, 0x44($s1)
    ctx->pc = 0x191318u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
label_19131c:
    // 0x19131c: 0x122e02  srl         $a1, $s2, 24
    ctx->pc = 0x19131cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 24));
label_191320:
    // 0x191320: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x191320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_191324:
    // 0x191324: 0x123202  srl         $a2, $s2, 8
    ctx->pc = 0x191324u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
label_191328:
    // 0x191328: 0xae24004c  sw          $a0, 0x4C($s1)
    ctx->pc = 0x191328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 4));
label_19132c:
    // 0x19132c: 0x26330038  addiu       $s3, $s1, 0x38
    ctx->pc = 0x19132cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_191330:
    // 0x191330: 0xae360050  sw          $s6, 0x50($s1)
    ctx->pc = 0x191330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 22));
label_191334:
    // 0x191334: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x191334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_191338:
    // 0x191338: 0xae370054  sw          $s7, 0x54($s1)
    ctx->pc = 0x191338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 23));
label_19133c:
    // 0x19133c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19133cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191340:
    // 0x191340: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x191340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_191344:
    // 0x191344: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x191344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_191348:
    // 0x191348: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x191348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19134c:
    // 0x19134c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19134cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_191350:
    // 0x191350: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x191350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_191354:
    // 0x191354: 0xa2250067  sb          $a1, 0x67($s1)
    ctx->pc = 0x191354u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 5));
label_191358:
    // 0x191358: 0xa2260065  sb          $a2, 0x65($s1)
    ctx->pc = 0x191358u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 6));
label_19135c:
    // 0x19135c: 0xa2270066  sb          $a3, 0x66($s1)
    ctx->pc = 0x19135cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 7));
label_191360:
    // 0x191360: 0xe6360068  swc1        $f22, 0x68($s1)
    ctx->pc = 0x191360u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_191364:
    // 0x191364: 0xe637006c  swc1        $f23, 0x6C($s1)
    ctx->pc = 0x191364u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_191368:
    // 0x191368: 0xa2320064  sb          $s2, 0x64($s1)
    ctx->pc = 0x191368u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 18));
label_19136c:
    // 0x19136c: 0xb1042  srl         $v0, $t3, 1
    ctx->pc = 0x19136cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
label_191370:
    // 0x191370: 0x316c0001  andi        $t4, $t3, 0x1
    ctx->pc = 0x191370u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_191374:
    // 0x191374: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x191374u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_191378:
    // 0x191378: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x191378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19137c:
    // 0x19137c: 0x256f0001  addiu       $t7, $t3, 0x1
    ctx->pc = 0x19137cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_191380:
    // 0x191380: 0xb7080  sll         $t6, $t3, 2
    ctx->pc = 0x191380u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_191384:
    // 0x191384: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x191384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_191388:
    // 0x191388: 0x92042  srl         $a0, $t1, 1
    ctx->pc = 0x191388u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_19138c:
    // 0x19138c: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x19138cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_191390:
    // 0x191390: 0x312a0001  andi        $t2, $t1, 0x1
    ctx->pc = 0x191390u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_191394:
    // 0x191394: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x191394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_191398:
    // 0x191398: 0x2623007c  addiu       $v1, $s1, 0x7C
    ctx->pc = 0x191398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_19139c:
    // 0x19139c: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x19139cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1913a0:
    // 0x1913a0: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x1913a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
label_1913a4:
    // 0x1913a4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1913a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1913a8:
    // 0x1913a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1913a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1913ac:
    // 0x1913ac: 0x252d0001  addiu       $t5, $t1, 0x1
    ctx->pc = 0x1913acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1913b0:
    // 0x1913b0: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1913b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1913b4:
    // 0x1913b4: 0x0  nop
    ctx->pc = 0x1913b4u;
    // NOP
label_1913b8:
    // 0x1913b8: 0x5600006  bltz        $t3, . + 4 + (0x6 << 2)
label_1913bc:
    if (ctx->pc == 0x1913BCu) {
        ctx->pc = 0x1913C0u;
        goto label_1913c0;
    }
    ctx->pc = 0x1913B8u;
    {
        const bool branch_taken_0x1913b8 = (GPR_S32(ctx, 11) < 0);
        if (branch_taken_0x1913b8) {
            ctx->pc = 0x1913D4u;
            goto label_1913d4;
        }
    }
    ctx->pc = 0x1913C0u;
label_1913c0:
    // 0x1913c0: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x1913c0u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1913c4:
    // 0x1913c4: 0x0  nop
    ctx->pc = 0x1913c4u;
    // NOP
label_1913c8:
    // 0x1913c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1913c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1913cc:
    // 0x1913cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1913d0:
    if (ctx->pc == 0x1913D0u) {
        ctx->pc = 0x1913D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913CCu;
        // 0x1913d0: 0xe4a0fff4  swc1        $f0, -0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913D4u;
        goto label_1913d4;
    }
    ctx->pc = 0x1913CCu;
    {
        const bool branch_taken_0x1913cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913CCu;
        // 0x1913d0: 0xe4a0fff4  swc1        $f0, -0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913cc) {
            ctx->pc = 0x1913E8u;
            goto label_1913e8;
        }
    }
    ctx->pc = 0x1913D4u;
label_1913d4:
    // 0x1913d4: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x1913d4u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1913d8:
    // 0x1913d8: 0x0  nop
    ctx->pc = 0x1913d8u;
    // NOP
label_1913dc:
    // 0x1913dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1913dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1913e0:
    // 0x1913e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1913e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1913e4:
    // 0x1913e4: 0xe4a0fff4  swc1        $f0, -0xC($a1)
    ctx->pc = 0x1913e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
label_1913e8:
    // 0x1913e8: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
label_1913ec:
    if (ctx->pc == 0x1913ECu) {
        ctx->pc = 0x1913ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913E8u;
        // 0x1913ec: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1913F0u;
        goto label_1913f0;
    }
    ctx->pc = 0x1913E8u;
    {
        const bool branch_taken_0x1913e8 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1913ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913E8u;
        // 0x1913ec: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913e8) {
            ctx->pc = 0x191404u;
            goto label_191404;
        }
    }
    ctx->pc = 0x1913F0u;
label_1913f0:
    // 0x1913f0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1913f0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1913f4:
    // 0x1913f4: 0x0  nop
    ctx->pc = 0x1913f4u;
    // NOP
label_1913f8:
    // 0x1913f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1913f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1913fc:
    // 0x1913fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_191400:
    if (ctx->pc == 0x191400u) {
        ctx->pc = 0x191400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913FCu;
        // 0x191400: 0xe4400074  swc1        $f0, 0x74($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191404u;
        goto label_191404;
    }
    ctx->pc = 0x1913FCu;
    {
        const bool branch_taken_0x1913fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913FCu;
        // 0x191400: 0xe4400074  swc1        $f0, 0x74($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913fc) {
            ctx->pc = 0x191418u;
            goto label_191418;
        }
    }
    ctx->pc = 0x191404u;
label_191404:
    // 0x191404: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x191404u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191408:
    // 0x191408: 0x0  nop
    ctx->pc = 0x191408u;
    // NOP
label_19140c:
    // 0x19140c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19140cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_191410:
    // 0x191410: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x191410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_191414:
    // 0x191414: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x191414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_191418:
    // 0x191418: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
label_19141c:
    if (ctx->pc == 0x19141Cu) {
        ctx->pc = 0x19141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191418u;
        // 0x19141c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191420u;
        goto label_191420;
    }
    ctx->pc = 0x191418u;
    {
        const bool branch_taken_0x191418 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x19141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191418u;
        // 0x19141c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191418) {
            ctx->pc = 0x191434u;
            goto label_191434;
        }
    }
    ctx->pc = 0x191420u;
label_191420:
    // 0x191420: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x191420u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191424:
    // 0x191424: 0x0  nop
    ctx->pc = 0x191424u;
    // NOP
label_191428:
    // 0x191428: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19142c:
    // 0x19142c: 0x10000009  b           . + 4 + (0x9 << 2)
label_191430:
    if (ctx->pc == 0x191430u) {
        ctx->pc = 0x191430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19142Cu;
        // 0x191430: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x191434u;
        goto label_191434;
    }
    ctx->pc = 0x19142Cu;
    {
        const bool branch_taken_0x19142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19142Cu;
        // 0x191430: 0xe4800078  swc1        $f0, 0x78($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19142c) {
            ctx->pc = 0x191454u;
            goto label_191454;
        }
    }
    ctx->pc = 0x191434u;
label_191434:
    // 0x191434: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x191434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_191438:
    // 0x191438: 0x71042  srl         $v0, $a3, 1
    ctx->pc = 0x191438u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_19143c:
    // 0x19143c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19143cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_191440:
    // 0x191440: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x191440u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_191444:
    // 0x191444: 0x0  nop
    ctx->pc = 0x191444u;
    // NOP
label_191448:
    // 0x191448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x191448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19144c:
    // 0x19144c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19144cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_191450:
    // 0x191450: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x191450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_191454:
    // 0x191454: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x191454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_191458:
    // 0x191458: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x191458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_19145c:
    // 0x19145c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x19145cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_191460:
    // 0x191460: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x191460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_191464:
    // 0x191464: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x191464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_191468:
    // 0x191468: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
label_19146c:
    if (ctx->pc == 0x19146Cu) {
        ctx->pc = 0x19146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191468u;
        // 0x19146c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191470u;
        goto label_191470;
    }
    ctx->pc = 0x191468u;
    {
        const bool branch_taken_0x191468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191468u;
        // 0x19146c: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191468) {
            ctx->pc = 0x1913B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1913b8;
        }
    }
    ctx->pc = 0x191470u;
label_191470:
    // 0x191470: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x191470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_191474:
    // 0x191474: 0x2d220002  sltiu       $v0, $t1, 0x2
    ctx->pc = 0x191474u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_191478:
    // 0x191478: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_19147c:
    if (ctx->pc == 0x19147Cu) {
        ctx->pc = 0x19147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191478u;
        // 0x19147c: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191480u;
        goto label_191480;
    }
    ctx->pc = 0x191478u;
    {
        const bool branch_taken_0x191478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191478u;
        // 0x19147c: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191478) {
            ctx->pc = 0x191388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191388;
        }
    }
    ctx->pc = 0x191480u;
label_191480:
    // 0x191480: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x191480u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_191484:
    // 0x191484: 0x2d620002  sltiu       $v0, $t3, 0x2
    ctx->pc = 0x191484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_191488:
    // 0x191488: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_19148c:
    if (ctx->pc == 0x19148Cu) {
        ctx->pc = 0x19148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191488u;
        // 0x19148c: 0xb1042  srl         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191490u;
        goto label_191490;
    }
    ctx->pc = 0x191488u;
    {
        const bool branch_taken_0x191488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191488u;
        // 0x19148c: 0xb1042  srl         $v0, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191488) {
            ctx->pc = 0x191370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191370;
        }
    }
    ctx->pc = 0x191490u;
label_191490:
    // 0x191490: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x191490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191494:
    // 0x191494: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x191494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_191498:
    // 0x191498: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x191498u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19149c:
    // 0x19149c: 0x0  nop
    ctx->pc = 0x19149cu;
    // NOP
label_1914a0:
    // 0x1914a0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1914a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1914a4:
    // 0x1914a4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1914a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_1914a8:
    // 0x1914a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1914a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1914ac:
    // 0x1914ac: 0x244632b8  addiu       $a2, $v0, 0x32B8
    ctx->pc = 0x1914acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12984));
label_1914b0:
    // 0x1914b0: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1914b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1914b4:
    // 0x1914b4: 0xc10ca04  jal         func_432810
label_1914b8:
    if (ctx->pc == 0x1914B8u) {
        ctx->pc = 0x1914B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914B4u;
        // 0x1914b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914BCu;
        goto label_1914bc;
    }
    ctx->pc = 0x1914B4u;
    SET_GPR_U32(ctx, 31, 0x1914BCu);
    ctx->pc = 0x1914B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914B4u;
    // 0x1914b8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1914B4u, 0x1914BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1914BCu;
label_1914bc:
    // 0x1914bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1914bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1914c0:
    // 0x1914c0: 0x8fc2b788  lw          $v0, -0x4878($fp)
    ctx->pc = 0x1914c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948744)));
label_1914c4:
    // 0x1914c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1914c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1914c8:
    // 0x1914c8: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x1914c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_1914cc:
    // 0x1914cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1914ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1914d0:
    // 0x1914d0: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_1914d4:
    // 0x1914d4: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x1914d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_1914d8:
    // 0x1914d8: 0x40f809  jalr        $v0
label_1914dc:
    if (ctx->pc == 0x1914DCu) {
        ctx->pc = 0x1914DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914D8u;
        // 0x1914dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914E0u;
        goto label_1914e0;
    }
    ctx->pc = 0x1914D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1914E0u);
        ctx->pc = 0x1914DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914D8u;
        // 0x1914dc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1914D8u, 0x1914E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1914E0u;
label_1914e0:
    // 0x1914e0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1914e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1914e4:
    // 0x1914e4: 0x1260ffee  beqz        $s3, . + 4 + (-0x12 << 2)
label_1914e8:
    if (ctx->pc == 0x1914E8u) {
        ctx->pc = 0x1914E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914E4u;
        // 0x1914e8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914ECu;
        goto label_1914ec;
    }
    ctx->pc = 0x1914E4u;
    {
        const bool branch_taken_0x1914e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1914E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914E4u;
        // 0x1914e8: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914e4) {
            ctx->pc = 0x1914A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1914a0;
        }
    }
    ctx->pc = 0x1914ECu;
label_1914ec:
    // 0x1914ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1914ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1914f0:
    // 0x1914f0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1914f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1914f4:
    // 0x1914f4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1914f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1914f8:
    // 0x1914f8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1914f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1914fc:
    // 0x1914fc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1914fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_191500:
    // 0x191500: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x191500u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_191504:
    // 0x191504: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x191504u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_191508:
    // 0x191508: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x191508u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19150c:
    // 0x19150c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x19150cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_191510:
    // 0x191510: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x191510u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_191514:
    // 0x191514: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x191514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_191518:
    // 0x191518: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x191518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_19151c:
    // 0x19151c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x19151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_191520:
    // 0x191520: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x191520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_191524:
    // 0x191524: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x191524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_191528:
    // 0x191528: 0x3e00008  jr          $ra
label_19152c:
    if (ctx->pc == 0x19152Cu) {
        ctx->pc = 0x19152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191528u;
        // 0x19152c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191530u;
        goto label_fallthrough_0x191528;
    }
    ctx->pc = 0x191528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191528u;
        // 0x19152c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x191528:
    ctx->pc = 0x191530u;
}
