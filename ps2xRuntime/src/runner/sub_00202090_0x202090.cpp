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

// Function: sub_00202090
// Address: 0x202090 - 0x202348
void sub_00202090_0x202090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202090_0x202090");
#endif

    switch (ctx->pc) {
        case 0x202208u: goto label_202208;
        case 0x20224cu: goto label_20224c;
        case 0x202260u: goto label_202260;
        case 0x2022dcu: goto label_2022dc;
        case 0x2022fcu: goto label_2022fc;
        case 0x20230cu: goto label_20230c;
        default: break;
    }

    ctx->pc = 0x202090u;

    // 0x202090: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x202090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x202094: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x202094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x202098: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x202098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x20209c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x20209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2020a0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2020a0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020a4: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2020a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2020a8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2020a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2020ac: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x2020acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x2020b0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2020b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2020b4: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2020b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2020b8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2020b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2020bc: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2020bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2020c0: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2020c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2020c4: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2020c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2020c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2020c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2020cc: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x2020ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2020d0: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x2020d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x2020d4: 0xafa7006c  sw          $a3, 0x6C($sp)
    ctx->pc = 0x2020d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 7));
    // 0x2020d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2020d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2020dc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2020dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2020e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2020E0u;
    {
        const bool branch_taken_0x2020e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2020E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020E0u;
        // 0x2020e4: 0x100f02d  daddu       $fp, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020e0) {
            ctx->pc = 0x2020FCu;
            goto label_2020fc;
        }
    }
    ctx->pc = 0x2020E8u;
    // 0x2020e8: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2020e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2020ec: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2020ECu;
    {
        const bool branch_taken_0x2020ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2020F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020ECu;
        // 0x2020f0: 0x24130084  addiu       $s3, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020ec) {
            ctx->pc = 0x20218Cu;
            goto label_20218c;
        }
    }
    ctx->pc = 0x2020F4u;
    // 0x2020f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2020F4u;
    {
        const bool branch_taken_0x2020f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2020f4) {
            ctx->pc = 0x202108u;
            goto label_202108;
        }
    }
    ctx->pc = 0x2020FCu;
label_2020fc:
    // 0x2020fc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2020fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x202100: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x202100u;
    {
        const bool branch_taken_0x202100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202100u;
        // 0x202104: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x202100) {
            ctx->pc = 0x202120u;
            goto label_202120;
        }
    }
    ctx->pc = 0x202108u;
label_202108:
    // 0x202108: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x202108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x20210c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x20210cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x202110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202114: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x202114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x202118: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x202118u;
    {
        const bool branch_taken_0x202118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202118u;
        // 0x20211c: 0xe440f56c  swc1        $f0, -0xA94($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x202118) {
            ctx->pc = 0x202188u;
            goto label_202188;
        }
    }
    ctx->pc = 0x202120u;
label_202120:
    // 0x202120: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x202120u;
    {
        const bool branch_taken_0x202120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202120u;
        // 0x202124: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202120) {
            ctx->pc = 0x202150u;
            goto label_202150;
        }
    }
    ctx->pc = 0x202128u;
    // 0x202128: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x202128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x20212c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x20212cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x202130: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x202130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x202134: 0x3c013bff  lui         $at, 0x3BFF
    ctx->pc = 0x202134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15359 << 16));
    // 0x202138: 0x34219724  ori         $at, $at, 0x9724
    ctx->pc = 0x202138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38692);
    // 0x20213c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20213cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x202140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x202144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202148: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x202148u;
    {
        const bool branch_taken_0x202148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202148u;
        // 0x20214c: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202148) {
            ctx->pc = 0x202178u;
            goto label_202178;
        }
    }
    ctx->pc = 0x202150u;
label_202150:
    // 0x202150: 0x3c013d85  lui         $at, 0x3D85
    ctx->pc = 0x202150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15749 << 16));
    // 0x202154: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x202154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x202158: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x202158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20215c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x20215cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x202160: 0x3c013bff  lui         $at, 0x3BFF
    ctx->pc = 0x202160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15359 << 16));
    // 0x202164: 0x34219724  ori         $at, $at, 0x9724
    ctx->pc = 0x202164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38692);
    // 0x202168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x202168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20216c: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x20216cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
    // 0x202170: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x202170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x202174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_202178:
    // 0x202178: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x202178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x20217c: 0xe482f56c  swc1        $f2, -0xA94($a0)
    ctx->pc = 0x20217cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964588), bits); }
    // 0x202180: 0xe461f570  swc1        $f1, -0xA90($v1)
    ctx->pc = 0x202180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964592), bits); }
    // 0x202184: 0xe440f574  swc1        $f0, -0xA8C($v0)
    ctx->pc = 0x202184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F574u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F574u, _value); } while (0); }
label_202188:
    // 0x202188: 0x24130084  addiu       $s3, $zero, 0x84
    ctx->pc = 0x202188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_20218c:
    // 0x20218c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x20218cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x202190: 0xb39818  mult        $s3, $a1, $s3
    ctx->pc = 0x202190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x202194: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x202194u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x202198: 0xaec50060  sw          $a1, 0x60($s6)
    ctx->pc = 0x202198u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 96), GPR_U32(ctx, 5));
    // 0x20219c: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x20219cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2021a0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x2021a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2021a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2021a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2021a8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2021a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2021ac: 0x26d40020  addiu       $s4, $s6, 0x20
    ctx->pc = 0x2021acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x2021b0: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x2021b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x2021b4: 0x3c01460c  lui         $at, 0x460C
    ctx->pc = 0x2021b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17932 << 16));
    // 0x2021b8: 0x3421a399  ori         $at, $at, 0xA399
    ctx->pc = 0x2021b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41881);
    // 0x2021bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2021bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2021c0: 0x8c491554  lw          $t1, 0x1554($v0)
    ctx->pc = 0x2021c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5460)));
    // 0x2021c4: 0x26c40170  addiu       $a0, $s6, 0x170
    ctx->pc = 0x2021c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 368));
    // 0x2021c8: 0xa3b00060  sb          $s0, 0x60($sp)
    ctx->pc = 0x2021c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 16));
    // 0x2021cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2021ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021d0: 0xa0700003  sb          $s0, 0x3($v1)
    ctx->pc = 0x2021d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x2021d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2021d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2021d8: 0xa0700001  sb          $s0, 0x1($v1)
    ctx->pc = 0x2021d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x2021dc: 0x263114d4  addiu       $s1, $s1, 0x14D4
    ctx->pc = 0x2021dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5332));
    // 0x2021e0: 0xa0700002  sb          $s0, 0x2($v1)
    ctx->pc = 0x2021e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x2021e4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2021e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2021e8: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x2021e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x2021ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2021ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2021f0: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x2021f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2021f4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2021f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021f8: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2021f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x2021fc: 0x26d20270  addiu       $s2, $s6, 0x270
    ctx->pc = 0x2021fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 624));
    // 0x202200: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x202200u;
    SET_GPR_U32(ctx, 31, 0x202208u);
    ctx->pc = 0x202204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202200u;
    // 0x202204: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x202200u, 0x202208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202208u;
label_202208:
    // 0x202208: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x202208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x20220c: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x20220cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
    // 0x202210: 0x34210667  ori         $at, $at, 0x667
    ctx->pc = 0x202210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1639);
    // 0x202214: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x202214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x202218: 0x8c46d310  lw          $a2, -0x2CF0($v0)
    ctx->pc = 0x202218u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5FD310u));
    // 0x20221c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20221cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202220: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x202220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x202224: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x202224u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202228: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x202228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x20222c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x20222cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202230: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x202230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x202234: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x202234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202238: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x202238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20223c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20223cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202240: 0x26c40070  addiu       $a0, $s6, 0x70
    ctx->pc = 0x202240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 112));
    // 0x202244: 0xc06876e  jal         func_1A1DB8
    ctx->pc = 0x202244u;
    SET_GPR_U32(ctx, 31, 0x20224Cu);
    ctx->pc = 0x202248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202244u;
    // 0x202248: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x202244u, 0x20224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20224Cu;
label_20224c:
    // 0x20224c: 0x3c013f6b  lui         $at, 0x3F6B
    ctx->pc = 0x20224cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16235 << 16));
    // 0x202250: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x202250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x202254: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x202254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x202258: 0xc05e602  jal         func_179808
    ctx->pc = 0x202258u;
    SET_GPR_U32(ctx, 31, 0x202260u);
    ctx->pc = 0x20225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202258u;
    // 0x20225c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x202258u, 0x202260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202260u;
label_202260:
    // 0x202260: 0x7ac30020  lq          $v1, 0x20($s6)
    ctx->pc = 0x202260u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x202264: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x202264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x202268: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x202268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
    // 0x20226c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x20226cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x202270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202274: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x202274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x202278: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x202278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
    // 0x20227c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x20227cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x202280: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x202280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x202284: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x202284u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x202288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20228c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20228cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x202290: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x202290u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202294: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x202294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x202298: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x202298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20229c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x20229cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2022a0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2022a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2022a4: 0x8fa90068  lw          $t1, 0x68($sp)
    ctx->pc = 0x2022a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2022a8: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x2022a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2022ac: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2022acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2022b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2022b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022b4: 0x8faa006c  lw          $t2, 0x6C($sp)
    ctx->pc = 0x2022b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x2022b8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2022b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2022bc: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x2022bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x2022c0: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2022c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x2022c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2022c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2022c8: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2022c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2022cc: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2022ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2022d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2022d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2022d4: 0xc074346  jal         func_1D0D18
    ctx->pc = 0x2022D4u;
    SET_GPR_U32(ctx, 31, 0x2022DCu);
    ctx->pc = 0x2022D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022D4u;
    // 0x2022d8: 0xafb70000  sw          $s7, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D18u, 0x2022D4u, 0x2022DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022DCu;
label_2022dc:
    // 0x2022dc: 0x27a20064  addiu       $v0, $sp, 0x64
    ctx->pc = 0x2022dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x2022e0: 0xa3a00064  sb          $zero, 0x64($sp)
    ctx->pc = 0x2022e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 100), (uint8_t)GPR_U32(ctx, 0));
    // 0x2022e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2022e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022e8: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x2022e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x2022ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2022ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022f0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2022f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2022f4: 0xc07445e  jal         func_1D1178
    ctx->pc = 0x2022F4u;
    SET_GPR_U32(ctx, 31, 0x2022FCu);
    ctx->pc = 0x2022F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022F4u;
    // 0x2022f8: 0xa0400002  sb          $zero, 0x2($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1178u, 0x2022F4u, 0x2022FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022FCu;
label_2022fc:
    // 0x2022fc: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x2022fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x202300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202304: 0xc0743fa  jal         func_1D0FE8
    ctx->pc = 0x202304u;
    SET_GPR_U32(ctx, 31, 0x20230Cu);
    ctx->pc = 0x202308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202304u;
    // 0x202308: 0x26250049  addiu       $a1, $s1, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0FE8u, 0x202304u, 0x20230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20230Cu;
label_20230c:
    // 0x20230c: 0xaed5000c  sw          $s5, 0xC($s6)
    ctx->pc = 0x20230cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 21));
    // 0x202310: 0xaec00010  sw          $zero, 0x10($s6)
    ctx->pc = 0x202310u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 0));
    // 0x202314: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x202314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202318: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x202318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x20231c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x20231cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x202320: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x202320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x202324: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x202324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x202328: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x202328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x20232c: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x20232cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x202330: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x202330u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x202334: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x202334u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x202338: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x202338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20233c: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x20233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202340: 0x3e00008  jr          $ra
    ctx->pc = 0x202340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202340u;
        // 0x202344: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202348u;
}
