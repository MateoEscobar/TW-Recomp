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

// Function: sub_003566D8
// Address: 0x3566d8 - 0x356990
void sub_003566D8_0x3566d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003566D8_0x3566d8");
#endif

    switch (ctx->pc) {
        case 0x3566d8u: goto label_3566d8;
        case 0x3566dcu: goto label_3566dc;
        case 0x3566e0u: goto label_3566e0;
        case 0x3566e4u: goto label_3566e4;
        case 0x3566e8u: goto label_3566e8;
        case 0x3566ecu: goto label_3566ec;
        case 0x3566f0u: goto label_3566f0;
        case 0x3566f4u: goto label_3566f4;
        case 0x3566f8u: goto label_3566f8;
        case 0x3566fcu: goto label_3566fc;
        case 0x356700u: goto label_356700;
        case 0x356704u: goto label_356704;
        case 0x356708u: goto label_356708;
        case 0x35670cu: goto label_35670c;
        case 0x356710u: goto label_356710;
        case 0x356714u: goto label_356714;
        case 0x356718u: goto label_356718;
        case 0x35671cu: goto label_35671c;
        case 0x356720u: goto label_356720;
        case 0x356724u: goto label_356724;
        case 0x356728u: goto label_356728;
        case 0x35672cu: goto label_35672c;
        case 0x356730u: goto label_356730;
        case 0x356734u: goto label_356734;
        case 0x356738u: goto label_356738;
        case 0x35673cu: goto label_35673c;
        case 0x356740u: goto label_356740;
        case 0x356744u: goto label_356744;
        case 0x356748u: goto label_356748;
        case 0x35674cu: goto label_35674c;
        case 0x356750u: goto label_356750;
        case 0x356754u: goto label_356754;
        case 0x356758u: goto label_356758;
        case 0x35675cu: goto label_35675c;
        case 0x356760u: goto label_356760;
        case 0x356764u: goto label_356764;
        case 0x356768u: goto label_356768;
        case 0x35676cu: goto label_35676c;
        case 0x356770u: goto label_356770;
        case 0x356774u: goto label_356774;
        case 0x356778u: goto label_356778;
        case 0x35677cu: goto label_35677c;
        case 0x356780u: goto label_356780;
        case 0x356784u: goto label_356784;
        case 0x356788u: goto label_356788;
        case 0x35678cu: goto label_35678c;
        case 0x356790u: goto label_356790;
        case 0x356794u: goto label_356794;
        case 0x356798u: goto label_356798;
        case 0x35679cu: goto label_35679c;
        case 0x3567a0u: goto label_3567a0;
        case 0x3567a4u: goto label_3567a4;
        case 0x3567a8u: goto label_3567a8;
        case 0x3567acu: goto label_3567ac;
        case 0x3567b0u: goto label_3567b0;
        case 0x3567b4u: goto label_3567b4;
        case 0x3567b8u: goto label_3567b8;
        case 0x3567bcu: goto label_3567bc;
        case 0x3567c0u: goto label_3567c0;
        case 0x3567c4u: goto label_3567c4;
        case 0x3567c8u: goto label_3567c8;
        case 0x3567ccu: goto label_3567cc;
        case 0x3567d0u: goto label_3567d0;
        case 0x3567d4u: goto label_3567d4;
        case 0x3567d8u: goto label_3567d8;
        case 0x3567dcu: goto label_3567dc;
        case 0x3567e0u: goto label_3567e0;
        case 0x3567e4u: goto label_3567e4;
        case 0x3567e8u: goto label_3567e8;
        case 0x3567ecu: goto label_3567ec;
        case 0x3567f0u: goto label_3567f0;
        case 0x3567f4u: goto label_3567f4;
        case 0x3567f8u: goto label_3567f8;
        case 0x3567fcu: goto label_3567fc;
        case 0x356800u: goto label_356800;
        case 0x356804u: goto label_356804;
        case 0x356808u: goto label_356808;
        case 0x35680cu: goto label_35680c;
        case 0x356810u: goto label_356810;
        case 0x356814u: goto label_356814;
        case 0x356818u: goto label_356818;
        case 0x35681cu: goto label_35681c;
        case 0x356820u: goto label_356820;
        case 0x356824u: goto label_356824;
        case 0x356828u: goto label_356828;
        case 0x35682cu: goto label_35682c;
        case 0x356830u: goto label_356830;
        case 0x356834u: goto label_356834;
        case 0x356838u: goto label_356838;
        case 0x35683cu: goto label_35683c;
        case 0x356840u: goto label_356840;
        case 0x356844u: goto label_356844;
        case 0x356848u: goto label_356848;
        case 0x35684cu: goto label_35684c;
        case 0x356850u: goto label_356850;
        case 0x356854u: goto label_356854;
        case 0x356858u: goto label_356858;
        case 0x35685cu: goto label_35685c;
        case 0x356860u: goto label_356860;
        case 0x356864u: goto label_356864;
        case 0x356868u: goto label_356868;
        case 0x35686cu: goto label_35686c;
        case 0x356870u: goto label_356870;
        case 0x356874u: goto label_356874;
        case 0x356878u: goto label_356878;
        case 0x35687cu: goto label_35687c;
        case 0x356880u: goto label_356880;
        case 0x356884u: goto label_356884;
        case 0x356888u: goto label_356888;
        case 0x35688cu: goto label_35688c;
        case 0x356890u: goto label_356890;
        case 0x356894u: goto label_356894;
        case 0x356898u: goto label_356898;
        case 0x35689cu: goto label_35689c;
        case 0x3568a0u: goto label_3568a0;
        case 0x3568a4u: goto label_3568a4;
        case 0x3568a8u: goto label_3568a8;
        case 0x3568acu: goto label_3568ac;
        case 0x3568b0u: goto label_3568b0;
        case 0x3568b4u: goto label_3568b4;
        case 0x3568b8u: goto label_3568b8;
        case 0x3568bcu: goto label_3568bc;
        case 0x3568c0u: goto label_3568c0;
        case 0x3568c4u: goto label_3568c4;
        case 0x3568c8u: goto label_3568c8;
        case 0x3568ccu: goto label_3568cc;
        case 0x3568d0u: goto label_3568d0;
        case 0x3568d4u: goto label_3568d4;
        case 0x3568d8u: goto label_3568d8;
        case 0x3568dcu: goto label_3568dc;
        case 0x3568e0u: goto label_3568e0;
        case 0x3568e4u: goto label_3568e4;
        case 0x3568e8u: goto label_3568e8;
        case 0x3568ecu: goto label_3568ec;
        case 0x3568f0u: goto label_3568f0;
        case 0x3568f4u: goto label_3568f4;
        case 0x3568f8u: goto label_3568f8;
        case 0x3568fcu: goto label_3568fc;
        case 0x356900u: goto label_356900;
        case 0x356904u: goto label_356904;
        case 0x356908u: goto label_356908;
        case 0x35690cu: goto label_35690c;
        case 0x356910u: goto label_356910;
        case 0x356914u: goto label_356914;
        case 0x356918u: goto label_356918;
        case 0x35691cu: goto label_35691c;
        case 0x356920u: goto label_356920;
        case 0x356924u: goto label_356924;
        case 0x356928u: goto label_356928;
        case 0x35692cu: goto label_35692c;
        case 0x356930u: goto label_356930;
        case 0x356934u: goto label_356934;
        case 0x356938u: goto label_356938;
        case 0x35693cu: goto label_35693c;
        case 0x356940u: goto label_356940;
        case 0x356944u: goto label_356944;
        case 0x356948u: goto label_356948;
        case 0x35694cu: goto label_35694c;
        case 0x356950u: goto label_356950;
        case 0x356954u: goto label_356954;
        case 0x356958u: goto label_356958;
        case 0x35695cu: goto label_35695c;
        case 0x356960u: goto label_356960;
        case 0x356964u: goto label_356964;
        case 0x356968u: goto label_356968;
        case 0x35696cu: goto label_35696c;
        case 0x356970u: goto label_356970;
        case 0x356974u: goto label_356974;
        case 0x356978u: goto label_356978;
        case 0x35697cu: goto label_35697c;
        case 0x356980u: goto label_356980;
        case 0x356984u: goto label_356984;
        case 0x356988u: goto label_356988;
        case 0x35698cu: goto label_35698c;
        default: break;
    }

    ctx->pc = 0x3566d8u;

label_3566d8:
    // 0x3566d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3566d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3566dc:
    // 0x3566dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3566dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3566e0:
    // 0x3566e0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3566e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3566e4:
    // 0x3566e4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3566e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3566e8:
    // 0x3566e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3566e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3566ec:
    // 0x3566ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3566ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3566f0:
    // 0x3566f0: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x3566f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3566f4:
    // 0x3566f4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3566f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3566f8:
    // 0x3566f8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3566f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_3566fc:
    // 0x3566fc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3566fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_356700:
    // 0x356700: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x356700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_356704:
    // 0x356704: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x356704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_356708:
    // 0x356708: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x356708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_35670c:
    // 0x35670c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x35670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_356710:
    // 0x356710: 0x1082006f  beq         $a0, $v0, . + 4 + (0x6F << 2)
label_356714:
    if (ctx->pc == 0x356714u) {
        ctx->pc = 0x356714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356710u;
        // 0x356714: 0x8c730048  lw          $s3, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356718u;
        goto label_356718;
    }
    ctx->pc = 0x356710u;
    {
        const bool branch_taken_0x356710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x356714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356710u;
        // 0x356714: 0x8c730048  lw          $s3, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356710) {
            ctx->pc = 0x3568D0u;
            goto label_3568d0;
        }
    }
    ctx->pc = 0x356718u;
label_356718:
    // 0x356718: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x356718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35671c:
    // 0x35671c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x35671cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_356720:
    // 0x356720: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x356720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_356724:
    // 0x356724: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x356724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_356728:
    // 0x356728: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_35672c:
    if (ctx->pc == 0x35672Cu) {
        ctx->pc = 0x35672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356728u;
        // 0x35672c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356730u;
        goto label_356730;
    }
    ctx->pc = 0x356728u;
    {
        const bool branch_taken_0x356728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356728u;
        // 0x35672c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356728) {
            ctx->pc = 0x3568D0u;
            goto label_3568d0;
        }
    }
    ctx->pc = 0x356730u;
label_356730:
    // 0x356730: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x356730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_356734:
    // 0x356734: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x356734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_356738:
    // 0x356738: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x356738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_35673c:
    // 0x35673c: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x35673cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_356740:
    // 0x356740: 0x68650017  ldl         $a1, 0x17($v1)
    ctx->pc = 0x356740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_356744:
    // 0x356744: 0x6c650010  ldr         $a1, 0x10($v1)
    ctx->pc = 0x356744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_356748:
    // 0x356748: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x356748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_35674c:
    // 0x35674c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x35674cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_356750:
    // 0x356750: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x356750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_356754:
    // 0x356754: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x356754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_356758:
    // 0x356758: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x356758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_35675c:
    // 0x35675c: 0x3c09aaaa  lui         $t1, 0xAAAA
    ctx->pc = 0x35675cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)43690 << 16));
label_356760:
    // 0x356760: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x356760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_356764:
    // 0x356764: 0x3529aaab  ori         $t1, $t1, 0xAAAB
    ctx->pc = 0x356764u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)43691);
label_356768:
    // 0x356768: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x356768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_35676c:
    // 0x35676c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35676cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356770:
    // 0x356770: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x356770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_356774:
    // 0x356774: 0x2466ffe8  addiu       $a2, $v1, -0x18
    ctx->pc = 0x356774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
label_356778:
    // 0x356778: 0x686affef  ldl         $t2, -0x11($v1)
    ctx->pc = 0x356778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_35677c:
    // 0x35677c: 0x6c6affe8  ldr         $t2, -0x18($v1)
    ctx->pc = 0x35677cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_356780:
    // 0x356780: 0x686bfff7  ldl         $t3, -0x9($v1)
    ctx->pc = 0x356780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_356784:
    // 0x356784: 0x6c6bfff0  ldr         $t3, -0x10($v1)
    ctx->pc = 0x356784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_356788:
    // 0x356788: 0x686cffff  ldl         $t4, -0x1($v1)
    ctx->pc = 0x356788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_35678c:
    // 0x35678c: 0x6c6cfff8  ldr         $t4, -0x8($v1)
    ctx->pc = 0x35678cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_356790:
    // 0x356790: 0xb3aa0027  sdl         $t2, 0x27($sp)
    ctx->pc = 0x356790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_356794:
    // 0x356794: 0xb7aa0020  sdr         $t2, 0x20($sp)
    ctx->pc = 0x356794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_356798:
    // 0x356798: 0xb3ab002f  sdl         $t3, 0x2F($sp)
    ctx->pc = 0x356798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_35679c:
    // 0x35679c: 0xb7ab0028  sdr         $t3, 0x28($sp)
    ctx->pc = 0x35679cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3567a0:
    // 0x3567a0: 0xb3ac0037  sdl         $t4, 0x37($sp)
    ctx->pc = 0x3567a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3567a4:
    // 0x3567a4: 0xb7ac0030  sdr         $t4, 0x30($sp)
    ctx->pc = 0x3567a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3567a8:
    // 0x3567a8: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x3567a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3567ac:
    // 0x3567ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3567acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3567b0:
    // 0x3567b0: 0xc93018  mult        $a2, $a2, $t1
    ctx->pc = 0x3567b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3567b4:
    // 0x3567b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3567b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3567b8:
    // 0x3567b8: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x3567b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_3567bc:
    // 0x3567bc: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x3567bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3567c0:
    // 0x3567c0: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x3567c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3567c4:
    // 0x3567c4: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x3567c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3567c8:
    // 0x3567c8: 0x684b0017  ldl         $t3, 0x17($v0)
    ctx->pc = 0x3567c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_3567cc:
    // 0x3567cc: 0x6c4b0010  ldr         $t3, 0x10($v0)
    ctx->pc = 0x3567ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_3567d0:
    // 0x3567d0: 0xb069ffef  sdl         $t1, -0x11($v1)
    ctx->pc = 0x3567d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3567d4:
    // 0x3567d4: 0xb469ffe8  sdr         $t1, -0x18($v1)
    ctx->pc = 0x3567d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3567d8:
    // 0x3567d8: 0xb06afff7  sdl         $t2, -0x9($v1)
    ctx->pc = 0x3567d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3567dc:
    // 0x3567dc: 0xb46afff0  sdr         $t2, -0x10($v1)
    ctx->pc = 0x3567dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3567e0:
    // 0x3567e0: 0xb06bffff  sdl         $t3, -0x1($v1)
    ctx->pc = 0x3567e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3567e4:
    // 0x3567e4: 0xb46bfff8  sdr         $t3, -0x8($v1)
    ctx->pc = 0x3567e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3567e8:
    // 0x3567e8: 0xc13c584  jal         func_4F1610
label_3567ec:
    if (ctx->pc == 0x3567ECu) {
        ctx->pc = 0x3567ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3567E8u;
        // 0x3567ec: 0x630c3  sra         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3567F0u;
        goto label_3567f0;
    }
    ctx->pc = 0x3567E8u;
    SET_GPR_U32(ctx, 31, 0x3567F0u);
    ctx->pc = 0x3567ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3567E8u;
    // 0x3567ec: 0x630c3  sra         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1610u, 0x3567E8u, 0x3567F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3567F0u;
label_3567f0:
    // 0x3567f0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3567f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3567f4:
    // 0x3567f4: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x3567f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_3567f8:
    // 0x3567f8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3567f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3567fc:
    // 0x3567fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3567fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356800:
    // 0x356800: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x356800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_356804:
    // 0x356804: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x356804u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_356808:
    // 0x356808: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x356808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_35680c:
    // 0x35680c: 0x40f809  jalr        $v0
label_356810:
    if (ctx->pc == 0x356810u) {
        ctx->pc = 0x356810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35680Cu;
        // 0x356810: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356814u;
        goto label_356814;
    }
    ctx->pc = 0x35680Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356814u);
        ctx->pc = 0x356810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35680Cu;
        // 0x356810: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35680Cu, 0x356814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356814u;
label_356814:
    // 0x356814: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x356814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_356818:
    // 0x356818: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35681c:
    // 0x35681c: 0x54620029  bnel        $v1, $v0, . + 4 + (0x29 << 2)
label_356820:
    if (ctx->pc == 0x356820u) {
        ctx->pc = 0x356820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35681Cu;
        // 0x356820: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356824u;
        goto label_356824;
    }
    ctx->pc = 0x35681Cu;
    {
        const bool branch_taken_0x35681c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x35681c) {
            ctx->pc = 0x356820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35681Cu;
            // 0x356820: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3568C4u;
            goto label_3568c4;
        }
    }
    ctx->pc = 0x356824u;
label_356824:
    // 0x356824: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x356824u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_356828:
    // 0x356828: 0x1623001f  bne         $s1, $v1, . + 4 + (0x1F << 2)
label_35682c:
    if (ctx->pc == 0x35682Cu) {
        ctx->pc = 0x35682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356828u;
        // 0x35682c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356830u;
        goto label_356830;
    }
    ctx->pc = 0x356828u;
    {
        const bool branch_taken_0x356828 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x35682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356828u;
        // 0x35682c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356828) {
            ctx->pc = 0x3568A8u;
            goto label_3568a8;
        }
    }
    ctx->pc = 0x356830u;
label_356830:
    // 0x356830: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x356830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_356834:
    // 0x356834: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x356834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_356838:
    // 0x356838: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x356838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_35683c:
    // 0x35683c: 0x60f809  jalr        $v1
label_356840:
    if (ctx->pc == 0x356840u) {
        ctx->pc = 0x356840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35683Cu;
        // 0x356840: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356844u;
        goto label_356844;
    }
    ctx->pc = 0x35683Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x356844u);
        ctx->pc = 0x356840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35683Cu;
        // 0x356840: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35683Cu, 0x356844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356844u;
label_356844:
    // 0x356844: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x356844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_356848:
    // 0x356848: 0x1451000f  bne         $v0, $s1, . + 4 + (0xF << 2)
label_35684c:
    if (ctx->pc == 0x35684Cu) {
        ctx->pc = 0x35684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356848u;
        // 0x35684c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356850u;
        goto label_356850;
    }
    ctx->pc = 0x356848u;
    {
        const bool branch_taken_0x356848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x35684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356848u;
        // 0x35684c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356848) {
            ctx->pc = 0x356888u;
            goto label_356888;
        }
    }
    ctx->pc = 0x356850u;
label_356850:
    // 0x356850: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x356850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_356854:
    // 0x356854: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x356854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_356858:
    // 0x356858: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x356858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_35685c:
    // 0x35685c: 0x60f809  jalr        $v1
label_356860:
    if (ctx->pc == 0x356860u) {
        ctx->pc = 0x356860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35685Cu;
        // 0x356860: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356864u;
        goto label_356864;
    }
    ctx->pc = 0x35685Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x356864u);
        ctx->pc = 0x356860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35685Cu;
        // 0x356860: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35685Cu, 0x356864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356864u;
label_356864:
    // 0x356864: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x356864u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356868:
    // 0x356868: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x356868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35686c:
    // 0x35686c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35686cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356870:
    // 0x356870: 0x84e40088  lh          $a0, 0x88($a3)
    ctx->pc = 0x356870u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
label_356874:
    // 0x356874: 0x8ce2008c  lw          $v0, 0x8C($a3)
    ctx->pc = 0x356874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
label_356878:
    // 0x356878: 0x40f809  jalr        $v0
label_35687c:
    if (ctx->pc == 0x35687Cu) {
        ctx->pc = 0x35687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356878u;
        // 0x35687c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356880u;
        goto label_356880;
    }
    ctx->pc = 0x356878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356880u);
        ctx->pc = 0x35687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356878u;
        // 0x35687c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356878u, 0x356880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356880u;
label_356880:
    // 0x356880: 0x10000010  b           . + 4 + (0x10 << 2)
label_356884:
    if (ctx->pc == 0x356884u) {
        ctx->pc = 0x356884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356880u;
        // 0x356884: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356888u;
        goto label_356888;
    }
    ctx->pc = 0x356880u;
    {
        const bool branch_taken_0x356880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356880u;
        // 0x356884: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356880) {
            ctx->pc = 0x3568C4u;
            goto label_3568c4;
        }
    }
    ctx->pc = 0x356888u;
label_356888:
    // 0x356888: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x356888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35688c:
    // 0x35688c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35688cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356890:
    // 0x356890: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x356890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_356894:
    // 0x356894: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x356894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_356898:
    // 0x356898: 0x60f809  jalr        $v1
label_35689c:
    if (ctx->pc == 0x35689Cu) {
        ctx->pc = 0x35689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356898u;
        // 0x35689c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3568A0u;
        goto label_3568a0;
    }
    ctx->pc = 0x356898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3568A0u);
        ctx->pc = 0x35689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356898u;
        // 0x35689c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356898u, 0x3568A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3568A0u;
label_3568a0:
    // 0x3568a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3568a4:
    if (ctx->pc == 0x3568A4u) {
        ctx->pc = 0x3568A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568A0u;
        // 0x3568a4: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3568A8u;
        goto label_3568a8;
    }
    ctx->pc = 0x3568A0u;
    {
        const bool branch_taken_0x3568a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3568A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568A0u;
        // 0x3568a4: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3568a0) {
            ctx->pc = 0x3568C4u;
            goto label_3568c4;
        }
    }
    ctx->pc = 0x3568A8u;
label_3568a8:
    // 0x3568a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3568a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3568ac:
    // 0x3568ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3568acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3568b0:
    // 0x3568b0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x3568b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_3568b4:
    // 0x3568b4: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3568b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3568b8:
    // 0x3568b8: 0x60f809  jalr        $v1
label_3568bc:
    if (ctx->pc == 0x3568BCu) {
        ctx->pc = 0x3568BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568B8u;
        // 0x3568bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3568C0u;
        goto label_3568c0;
    }
    ctx->pc = 0x3568B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3568C0u);
        ctx->pc = 0x3568BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568B8u;
        // 0x3568bc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3568B8u, 0x3568C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3568C0u;
label_3568c0:
    // 0x3568c0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3568c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3568c4:
    // 0x3568c4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3568c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3568c8:
    // 0x3568c8: 0x5462ff95  bnel        $v1, $v0, . + 4 + (-0x6B << 2)
label_3568cc:
    if (ctx->pc == 0x3568CCu) {
        ctx->pc = 0x3568CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568C8u;
        // 0x3568cc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3568D0u;
        goto label_3568d0;
    }
    ctx->pc = 0x3568C8u;
    {
        const bool branch_taken_0x3568c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3568c8) {
            ctx->pc = 0x3568CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3568C8u;
            // 0x3568cc: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356720;
        }
    }
    ctx->pc = 0x3568D0u;
label_3568d0:
    // 0x3568d0: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x3568d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3568d4:
    // 0x3568d4: 0x5220001d  beql        $s1, $zero, . + 4 + (0x1D << 2)
label_3568d8:
    if (ctx->pc == 0x3568D8u) {
        ctx->pc = 0x3568D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568D4u;
        // 0x3568d8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3568DCu;
        goto label_3568dc;
    }
    ctx->pc = 0x3568D4u;
    {
        const bool branch_taken_0x3568d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3568d4) {
            ctx->pc = 0x3568D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3568D4u;
            // 0x3568d8: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35694Cu;
            goto label_35694c;
        }
    }
    ctx->pc = 0x3568DCu;
label_3568dc:
    // 0x3568dc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x3568dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_3568e0:
    // 0x3568e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3568e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3568e4:
    // 0x3568e4: 0xc10b1c6  jal         func_42C718
label_3568e8:
    if (ctx->pc == 0x3568E8u) {
        ctx->pc = 0x3568E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3568E4u;
        // 0x3568e8: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3568ECu;
        goto label_3568ec;
    }
    ctx->pc = 0x3568E4u;
    SET_GPR_U32(ctx, 31, 0x3568ECu);
    ctx->pc = 0x3568E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3568E4u;
    // 0x3568e8: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x3568E4u, 0x3568ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3568ECu;
label_3568ec:
    // 0x3568ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3568ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3568f0:
    // 0x3568f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3568f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3568f4:
    // 0x3568f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3568f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3568f8:
    // 0x3568f8: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3568f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3568fc:
    // 0x3568fc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3568fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_356900:
    // 0x356900: 0x40f809  jalr        $v0
label_356904:
    if (ctx->pc == 0x356904u) {
        ctx->pc = 0x356904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356900u;
        // 0x356904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356908u;
        goto label_356908;
    }
    ctx->pc = 0x356900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356908u);
        ctx->pc = 0x356904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356900u;
        // 0x356904: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356900u, 0x356908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356908u;
label_356908:
    // 0x356908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x356908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35690c:
    // 0x35690c: 0x5443000f  bnel        $v0, $v1, . + 4 + (0xF << 2)
label_356910:
    if (ctx->pc == 0x356910u) {
        ctx->pc = 0x356910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35690Cu;
        // 0x356910: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356914u;
        goto label_356914;
    }
    ctx->pc = 0x35690Cu;
    {
        const bool branch_taken_0x35690c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35690c) {
            ctx->pc = 0x356910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35690Cu;
            // 0x356910: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35694Cu;
            goto label_35694c;
        }
    }
    ctx->pc = 0x356914u;
label_356914:
    // 0x356914: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x356914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356918:
    // 0x356918: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x356918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_35691c:
    // 0x35691c: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x35691cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_356920:
    // 0x356920: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x356920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_356924:
    // 0x356924: 0x60f809  jalr        $v1
label_356928:
    if (ctx->pc == 0x356928u) {
        ctx->pc = 0x356928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356924u;
        // 0x356928: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35692Cu;
        goto label_35692c;
    }
    ctx->pc = 0x356924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35692Cu);
        ctx->pc = 0x356928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356924u;
        // 0x356928: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356924u, 0x35692Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35692Cu;
label_35692c:
    // 0x35692c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x35692cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_356930:
    // 0x356930: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x356930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356934:
    // 0x356934: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x356934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356938:
    // 0x356938: 0x84e40088  lh          $a0, 0x88($a3)
    ctx->pc = 0x356938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 136)));
label_35693c:
    // 0x35693c: 0x8ce2008c  lw          $v0, 0x8C($a3)
    ctx->pc = 0x35693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 140)));
label_356940:
    // 0x356940: 0x40f809  jalr        $v0
label_356944:
    if (ctx->pc == 0x356944u) {
        ctx->pc = 0x356944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356940u;
        // 0x356944: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356948u;
        goto label_356948;
    }
    ctx->pc = 0x356940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356948u);
        ctx->pc = 0x356944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356940u;
        // 0x356944: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356940u, 0x356948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356948u;
label_356948:
    // 0x356948: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x356948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_35694c:
    // 0x35694c: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x35694cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_356950:
    // 0x356950: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_356954:
    if (ctx->pc == 0x356954u) {
        ctx->pc = 0x356954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356950u;
        // 0x356954: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356958u;
        goto label_356958;
    }
    ctx->pc = 0x356950u;
    {
        const bool branch_taken_0x356950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356950) {
            ctx->pc = 0x356954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356950u;
            // 0x356954: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356970u;
            goto label_356970;
        }
    }
    ctx->pc = 0x356958u;
label_356958:
    // 0x356958: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x356958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35695c:
    // 0x35695c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x35695cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_356960:
    // 0x356960: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x356960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_356964:
    // 0x356964: 0x60f809  jalr        $v1
label_356968:
    if (ctx->pc == 0x356968u) {
        ctx->pc = 0x356968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356964u;
        // 0x356968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35696Cu;
        goto label_35696c;
    }
    ctx->pc = 0x356964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35696Cu);
        ctx->pc = 0x356968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356964u;
        // 0x356968: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356964u, 0x35696Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35696Cu;
label_35696c:
    // 0x35696c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x35696cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_356970:
    // 0x356970: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x356970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_356974:
    // 0x356974: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x356974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_356978:
    // 0x356978: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x356978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_35697c:
    // 0x35697c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35697cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_356980:
    // 0x356980: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x356980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_356984:
    // 0x356984: 0x3e00008  jr          $ra
label_356988:
    if (ctx->pc == 0x356988u) {
        ctx->pc = 0x356988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356984u;
        // 0x356988: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35698Cu;
        goto label_35698c;
    }
    ctx->pc = 0x356984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356984u;
        // 0x356988: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35698Cu;
label_35698c:
    // 0x35698c: 0x0  nop
    ctx->pc = 0x35698cu;
    // NOP
    ctx->pc = 0x356990u;
}
