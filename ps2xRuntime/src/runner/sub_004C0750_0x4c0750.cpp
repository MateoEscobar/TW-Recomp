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

// Function: sub_004C0750
// Address: 0x4c0750 - 0x4c0a18
void sub_004C0750_0x4c0750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C0750_0x4c0750");
#endif

    switch (ctx->pc) {
        case 0x4c0750u: goto label_4c0750;
        case 0x4c0754u: goto label_4c0754;
        case 0x4c0758u: goto label_4c0758;
        case 0x4c075cu: goto label_4c075c;
        case 0x4c0760u: goto label_4c0760;
        case 0x4c0764u: goto label_4c0764;
        case 0x4c0768u: goto label_4c0768;
        case 0x4c076cu: goto label_4c076c;
        case 0x4c0770u: goto label_4c0770;
        case 0x4c0774u: goto label_4c0774;
        case 0x4c0778u: goto label_4c0778;
        case 0x4c077cu: goto label_4c077c;
        case 0x4c0780u: goto label_4c0780;
        case 0x4c0784u: goto label_4c0784;
        case 0x4c0788u: goto label_4c0788;
        case 0x4c078cu: goto label_4c078c;
        case 0x4c0790u: goto label_4c0790;
        case 0x4c0794u: goto label_4c0794;
        case 0x4c0798u: goto label_4c0798;
        case 0x4c079cu: goto label_4c079c;
        case 0x4c07a0u: goto label_4c07a0;
        case 0x4c07a4u: goto label_4c07a4;
        case 0x4c07a8u: goto label_4c07a8;
        case 0x4c07acu: goto label_4c07ac;
        case 0x4c07b0u: goto label_4c07b0;
        case 0x4c07b4u: goto label_4c07b4;
        case 0x4c07b8u: goto label_4c07b8;
        case 0x4c07bcu: goto label_4c07bc;
        case 0x4c07c0u: goto label_4c07c0;
        case 0x4c07c4u: goto label_4c07c4;
        case 0x4c07c8u: goto label_4c07c8;
        case 0x4c07ccu: goto label_4c07cc;
        case 0x4c07d0u: goto label_4c07d0;
        case 0x4c07d4u: goto label_4c07d4;
        case 0x4c07d8u: goto label_4c07d8;
        case 0x4c07dcu: goto label_4c07dc;
        case 0x4c07e0u: goto label_4c07e0;
        case 0x4c07e4u: goto label_4c07e4;
        case 0x4c07e8u: goto label_4c07e8;
        case 0x4c07ecu: goto label_4c07ec;
        case 0x4c07f0u: goto label_4c07f0;
        case 0x4c07f4u: goto label_4c07f4;
        case 0x4c07f8u: goto label_4c07f8;
        case 0x4c07fcu: goto label_4c07fc;
        case 0x4c0800u: goto label_4c0800;
        case 0x4c0804u: goto label_4c0804;
        case 0x4c0808u: goto label_4c0808;
        case 0x4c080cu: goto label_4c080c;
        case 0x4c0810u: goto label_4c0810;
        case 0x4c0814u: goto label_4c0814;
        case 0x4c0818u: goto label_4c0818;
        case 0x4c081cu: goto label_4c081c;
        case 0x4c0820u: goto label_4c0820;
        case 0x4c0824u: goto label_4c0824;
        case 0x4c0828u: goto label_4c0828;
        case 0x4c082cu: goto label_4c082c;
        case 0x4c0830u: goto label_4c0830;
        case 0x4c0834u: goto label_4c0834;
        case 0x4c0838u: goto label_4c0838;
        case 0x4c083cu: goto label_4c083c;
        case 0x4c0840u: goto label_4c0840;
        case 0x4c0844u: goto label_4c0844;
        case 0x4c0848u: goto label_4c0848;
        case 0x4c084cu: goto label_4c084c;
        case 0x4c0850u: goto label_4c0850;
        case 0x4c0854u: goto label_4c0854;
        case 0x4c0858u: goto label_4c0858;
        case 0x4c085cu: goto label_4c085c;
        case 0x4c0860u: goto label_4c0860;
        case 0x4c0864u: goto label_4c0864;
        case 0x4c0868u: goto label_4c0868;
        case 0x4c086cu: goto label_4c086c;
        case 0x4c0870u: goto label_4c0870;
        case 0x4c0874u: goto label_4c0874;
        case 0x4c0878u: goto label_4c0878;
        case 0x4c087cu: goto label_4c087c;
        case 0x4c0880u: goto label_4c0880;
        case 0x4c0884u: goto label_4c0884;
        case 0x4c0888u: goto label_4c0888;
        case 0x4c088cu: goto label_4c088c;
        case 0x4c0890u: goto label_4c0890;
        case 0x4c0894u: goto label_4c0894;
        case 0x4c0898u: goto label_4c0898;
        case 0x4c089cu: goto label_4c089c;
        case 0x4c08a0u: goto label_4c08a0;
        case 0x4c08a4u: goto label_4c08a4;
        case 0x4c08a8u: goto label_4c08a8;
        case 0x4c08acu: goto label_4c08ac;
        case 0x4c08b0u: goto label_4c08b0;
        case 0x4c08b4u: goto label_4c08b4;
        case 0x4c08b8u: goto label_4c08b8;
        case 0x4c08bcu: goto label_4c08bc;
        case 0x4c08c0u: goto label_4c08c0;
        case 0x4c08c4u: goto label_4c08c4;
        case 0x4c08c8u: goto label_4c08c8;
        case 0x4c08ccu: goto label_4c08cc;
        case 0x4c08d0u: goto label_4c08d0;
        case 0x4c08d4u: goto label_4c08d4;
        case 0x4c08d8u: goto label_4c08d8;
        case 0x4c08dcu: goto label_4c08dc;
        case 0x4c08e0u: goto label_4c08e0;
        case 0x4c08e4u: goto label_4c08e4;
        case 0x4c08e8u: goto label_4c08e8;
        case 0x4c08ecu: goto label_4c08ec;
        case 0x4c08f0u: goto label_4c08f0;
        case 0x4c08f4u: goto label_4c08f4;
        case 0x4c08f8u: goto label_4c08f8;
        case 0x4c08fcu: goto label_4c08fc;
        case 0x4c0900u: goto label_4c0900;
        case 0x4c0904u: goto label_4c0904;
        case 0x4c0908u: goto label_4c0908;
        case 0x4c090cu: goto label_4c090c;
        case 0x4c0910u: goto label_4c0910;
        case 0x4c0914u: goto label_4c0914;
        case 0x4c0918u: goto label_4c0918;
        case 0x4c091cu: goto label_4c091c;
        case 0x4c0920u: goto label_4c0920;
        case 0x4c0924u: goto label_4c0924;
        case 0x4c0928u: goto label_4c0928;
        case 0x4c092cu: goto label_4c092c;
        case 0x4c0930u: goto label_4c0930;
        case 0x4c0934u: goto label_4c0934;
        case 0x4c0938u: goto label_4c0938;
        case 0x4c093cu: goto label_4c093c;
        case 0x4c0940u: goto label_4c0940;
        case 0x4c0944u: goto label_4c0944;
        case 0x4c0948u: goto label_4c0948;
        case 0x4c094cu: goto label_4c094c;
        case 0x4c0950u: goto label_4c0950;
        case 0x4c0954u: goto label_4c0954;
        case 0x4c0958u: goto label_4c0958;
        case 0x4c095cu: goto label_4c095c;
        case 0x4c0960u: goto label_4c0960;
        case 0x4c0964u: goto label_4c0964;
        case 0x4c0968u: goto label_4c0968;
        case 0x4c096cu: goto label_4c096c;
        case 0x4c0970u: goto label_4c0970;
        case 0x4c0974u: goto label_4c0974;
        case 0x4c0978u: goto label_4c0978;
        case 0x4c097cu: goto label_4c097c;
        case 0x4c0980u: goto label_4c0980;
        case 0x4c0984u: goto label_4c0984;
        case 0x4c0988u: goto label_4c0988;
        case 0x4c098cu: goto label_4c098c;
        case 0x4c0990u: goto label_4c0990;
        case 0x4c0994u: goto label_4c0994;
        case 0x4c0998u: goto label_4c0998;
        case 0x4c099cu: goto label_4c099c;
        case 0x4c09a0u: goto label_4c09a0;
        case 0x4c09a4u: goto label_4c09a4;
        case 0x4c09a8u: goto label_4c09a8;
        case 0x4c09acu: goto label_4c09ac;
        case 0x4c09b0u: goto label_4c09b0;
        case 0x4c09b4u: goto label_4c09b4;
        case 0x4c09b8u: goto label_4c09b8;
        case 0x4c09bcu: goto label_4c09bc;
        case 0x4c09c0u: goto label_4c09c0;
        case 0x4c09c4u: goto label_4c09c4;
        case 0x4c09c8u: goto label_4c09c8;
        case 0x4c09ccu: goto label_4c09cc;
        case 0x4c09d0u: goto label_4c09d0;
        case 0x4c09d4u: goto label_4c09d4;
        case 0x4c09d8u: goto label_4c09d8;
        case 0x4c09dcu: goto label_4c09dc;
        case 0x4c09e0u: goto label_4c09e0;
        case 0x4c09e4u: goto label_4c09e4;
        case 0x4c09e8u: goto label_4c09e8;
        case 0x4c09ecu: goto label_4c09ec;
        case 0x4c09f0u: goto label_4c09f0;
        case 0x4c09f4u: goto label_4c09f4;
        case 0x4c09f8u: goto label_4c09f8;
        case 0x4c09fcu: goto label_4c09fc;
        case 0x4c0a00u: goto label_4c0a00;
        case 0x4c0a04u: goto label_4c0a04;
        case 0x4c0a08u: goto label_4c0a08;
        case 0x4c0a0cu: goto label_4c0a0c;
        case 0x4c0a10u: goto label_4c0a10;
        case 0x4c0a14u: goto label_4c0a14;
        default: break;
    }

    ctx->pc = 0x4c0750u;

label_4c0750:
    // 0x4c0750: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x4c0750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_4c0754:
    // 0x4c0754: 0x8f83883c  lw          $v1, -0x77C4($gp)
    ctx->pc = 0x4c0754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936636)));
label_4c0758:
    // 0x4c0758: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4c0758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4c075c:
    // 0x4c075c: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x4c075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_4c0760:
    // 0x4c0760: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x4c0760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_4c0764:
    // 0x4c0764: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4c0764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4c0768:
    // 0x4c0768: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x4c0768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_4c076c:
    // 0x4c076c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4c076cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4c0770:
    // 0x4c0770: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x4c0770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_4c0774:
    // 0x4c0774: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4c0774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c0778:
    // 0x4c0778: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x4c0778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_4c077c:
    // 0x4c077c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4c077cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4c0780:
    // 0x4c0780: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x4c0780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_4c0784:
    // 0x4c0784: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4c0784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4c0788:
    // 0x4c0788: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x4c0788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_4c078c:
    // 0x4c078c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x4c078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_4c0790:
    // 0x4c0790: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c0790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0794:
    // 0x4c0794: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x4c0794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4c0798:
    // 0x4c0798: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x4c0798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_4c079c:
    // 0x4c079c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x4c079cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4c07a0:
    // 0x4c07a0: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x4c07a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4c07a4:
    // 0x4c07a4: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x4c07a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4c07a8:
    // 0x4c07a8: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x4c07a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4c07ac:
    // 0x4c07ac: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x4c07acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4c07b0:
    // 0x4c07b0: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x4c07b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4c07b4:
    // 0x4c07b4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4c07b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c07b8:
    // 0x4c07b8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4c07b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c07bc:
    // 0x4c07bc: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x4c07bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c07c0:
    // 0x4c07c0: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x4c07c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c07c4:
    // 0x4c07c4: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x4c07c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c07c8:
    // 0x4c07c8: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x4c07c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4c07cc:
    // 0x4c07cc: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4c07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4c07d0:
    // 0x4c07d0: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x4c07d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_4c07d4:
    // 0x4c07d4: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x4c07d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_4c07d8:
    // 0x4c07d8: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x4c07d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_4c07dc:
    // 0x4c07dc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4c07dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c07e0:
    // 0x4c07e0: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x4c07e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c07e4:
    // 0x4c07e4: 0x10800082  beqz        $a0, . + 4 + (0x82 << 2)
label_4c07e8:
    if (ctx->pc == 0x4C07E8u) {
        ctx->pc = 0x4C07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C07E4u;
        // 0x4c07e8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C07ECu;
        goto label_4c07ec;
    }
    ctx->pc = 0x4C07E4u;
    {
        const bool branch_taken_0x4c07e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C07E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C07E4u;
        // 0x4c07e8: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c07e4) {
            ctx->pc = 0x4C09F0u;
            goto label_4c09f0;
        }
    }
    ctx->pc = 0x4C07ECu;
label_4c07ec:
    // 0x4c07ec: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x4c07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_4c07f0:
    // 0x4c07f0: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x4c07f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_4c07f4:
    // 0x4c07f4: 0x8c63fffc  lw          $v1, -0x4($v1)
    ctx->pc = 0x4c07f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4c07f8:
    // 0x4c07f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c07fc:
    // 0x4c07fc: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
label_4c0800:
    if (ctx->pc == 0x4C0800u) {
        ctx->pc = 0x4C0800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C07FCu;
        // 0x4c0800: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0804u;
        goto label_4c0804;
    }
    ctx->pc = 0x4C07FCu;
    {
        const bool branch_taken_0x4c07fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4C0800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C07FCu;
        // 0x4c0800: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c07fc) {
            ctx->pc = 0x4C0884u;
            goto label_4c0884;
        }
    }
    ctx->pc = 0x4C0804u;
label_4c0804:
    // 0x4c0804: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x4c0804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4c0808:
    // 0x4c0808: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4c0808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c080c:
    // 0x4c080c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c080cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0810:
    // 0x4c0810: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x4c0810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_4c0814:
    // 0x4c0814: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x4c0814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0818:
    // 0x4c0818: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4c0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c081c:
    // 0x4c081c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4c081cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0820:
    // 0x4c0820: 0x0  nop
    ctx->pc = 0x4c0820u;
    // NOP
label_4c0824:
    // 0x4c0824: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_4c0828:
    if (ctx->pc == 0x4C0828u) {
        ctx->pc = 0x4C0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0824u;
        // 0x4c0828: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C082Cu;
        goto label_4c082c;
    }
    ctx->pc = 0x4C0824u;
    {
        const bool branch_taken_0x4c0824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0824) {
            ctx->pc = 0x4C0828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0824u;
            // 0x4c0828: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0838u;
            goto label_4c0838;
        }
    }
    ctx->pc = 0x4C082Cu;
label_4c082c:
    // 0x4c082c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4c082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4c0830:
    // 0x4c0830: 0x1000000e  b           . + 4 + (0xE << 2)
label_4c0834:
    if (ctx->pc == 0x4C0834u) {
        ctx->pc = 0x4C0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0830u;
        // 0x4c0834: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0838u;
        goto label_4c0838;
    }
    ctx->pc = 0x4C0830u;
    {
        const bool branch_taken_0x4c0830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0830u;
        // 0x4c0834: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0830) {
            ctx->pc = 0x4C086Cu;
            goto label_4c086c;
        }
    }
    ctx->pc = 0x4C0838u;
label_4c0838:
    // 0x4c0838: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c0838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4c083c:
    // 0x4c083c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c0840:
    // 0x4c0840: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x4c0840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0844:
    // 0x4c0844: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x4c0844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_4c0848:
    // 0x4c0848: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x4c0848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c084c:
    // 0x4c084c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4c084cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0850:
    // 0x4c0850: 0x0  nop
    ctx->pc = 0x4c0850u;
    // NOP
label_4c0854:
    // 0x4c0854: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4c0858:
    if (ctx->pc == 0x4C0858u) {
        ctx->pc = 0x4C0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0854u;
        // 0x4c0858: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C085Cu;
        goto label_4c085c;
    }
    ctx->pc = 0x4C0854u;
    {
        const bool branch_taken_0x4c0854 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0854u;
        // 0x4c0858: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0854) {
            ctx->pc = 0x4C086Cu;
            goto label_4c086c;
        }
    }
    ctx->pc = 0x4C085Cu;
label_4c085c:
    // 0x4c085c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4c085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4c0860:
    // 0x4c0860: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x4c0860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_4c0864:
    // 0x4c0864: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4c0864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4c0868:
    // 0x4c0868: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4c0868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4c086c:
    // 0x4c086c: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x4c086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4c0870:
    // 0x4c0870: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4c0870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c0874:
    // 0x4c0874: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4c0874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c0878:
    // 0x4c0878: 0x481ffe3  bgez        $a0, . + 4 + (-0x1D << 2)
label_4c087c:
    if (ctx->pc == 0x4C087Cu) {
        ctx->pc = 0x4C087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0878u;
        // 0x4c087c: 0x8fa5011c  lw          $a1, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0880u;
        goto label_4c0880;
    }
    ctx->pc = 0x4C0878u;
    {
        const bool branch_taken_0x4c0878 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4C087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0878u;
        // 0x4c087c: 0x8fa5011c  lw          $a1, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0878) {
            ctx->pc = 0x4C0808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c0808;
        }
    }
    ctx->pc = 0x4C0880u;
label_4c0880:
    // 0x4c0880: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x4c0880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4c0884:
    // 0x4c0884: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x4c0884u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c0888:
    // 0x4c0888: 0x26430038  addiu       $v1, $s2, 0x38
    ctx->pc = 0x4c0888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
label_4c088c:
    // 0x4c088c: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x4c088cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
label_4c0890:
    // 0x4c0890: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x4c0890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_4c0894:
    // 0x4c0894: 0x10430052  beq         $v0, $v1, . + 4 + (0x52 << 2)
label_4c0898:
    if (ctx->pc == 0x4C0898u) {
        ctx->pc = 0x4C0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0894u;
        // 0x4c0898: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C089Cu;
        goto label_4c089c;
    }
    ctx->pc = 0x4C0894u;
    {
        const bool branch_taken_0x4c0894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0894u;
        // 0x4c0898: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0894) {
            ctx->pc = 0x4C09E0u;
            goto label_4c09e0;
        }
    }
    ctx->pc = 0x4C089Cu;
label_4c089c:
    // 0x4c089c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x4c089cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4c08a0:
    // 0x4c08a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4c08a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c08a4:
    // 0x4c08a4: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x4c08a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4c08a8:
    // 0x4c08a8: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
label_4c08ac:
    if (ctx->pc == 0x4C08ACu) {
        ctx->pc = 0x4C08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C08A8u;
        // 0x4c08ac: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C08B0u;
        goto label_4c08b0;
    }
    ctx->pc = 0x4C08A8u;
    {
        const bool branch_taken_0x4c08a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C08ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C08A8u;
        // 0x4c08ac: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c08a8) {
            ctx->pc = 0x4C09D0u;
            goto label_4c09d0;
        }
    }
    ctx->pc = 0x4C08B0u;
label_4c08b0:
    // 0x4c08b0: 0x8f828840  lw          $v0, -0x77C0($gp)
    ctx->pc = 0x4c08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936640)));
label_4c08b4:
    // 0x4c08b4: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x4c08b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_4c08b8:
    // 0x4c08b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c08b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c08bc:
    // 0x4c08bc: 0x10730045  beq         $v1, $s3, . + 4 + (0x45 << 2)
label_4c08c0:
    if (ctx->pc == 0x4C08C0u) {
        ctx->pc = 0x4C08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C08BCu;
        // 0x4c08c0: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C08C4u;
        goto label_4c08c4;
    }
    ctx->pc = 0x4C08BCu;
    {
        const bool branch_taken_0x4c08bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x4C08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C08BCu;
        // 0x4c08c0: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c08bc) {
            ctx->pc = 0x4C09D4u;
            goto label_4c09d4;
        }
    }
    ctx->pc = 0x4C08C4u;
label_4c08c4:
    // 0x4c08c4: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x4c08c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_4c08c8:
    // 0x4c08c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4c08c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4c08cc:
    // 0x4c08cc: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_4c08d0:
    if (ctx->pc == 0x4C08D0u) {
        ctx->pc = 0x4C08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C08CCu;
        // 0x4c08d0: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C08D4u;
        goto label_4c08d4;
    }
    ctx->pc = 0x4C08CCu;
    {
        const bool branch_taken_0x4c08cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C08CCu;
        // 0x4c08d0: 0x8fa20124  lw          $v0, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c08cc) {
            ctx->pc = 0x4C09D8u;
            goto label_4c09d8;
        }
    }
    ctx->pc = 0x4C08D4u;
label_4c08d4:
    // 0x4c08d4: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x4c08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_4c08d8:
    // 0x4c08d8: 0xc11a45e  jal         func_469178
label_4c08dc:
    if (ctx->pc == 0x4C08DCu) {
        ctx->pc = 0x4C08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C08D8u;
        // 0x4c08dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C08E0u;
        goto label_4c08e0;
    }
    ctx->pc = 0x4C08D8u;
    SET_GPR_U32(ctx, 31, 0x4C08E0u);
    ctx->pc = 0x4C08DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C08D8u;
    // 0x4c08dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x4C08D8u, 0x4C08E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C08E0u;
label_4c08e0:
    // 0x4c08e0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4c08e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c08e4:
    // 0x4c08e4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x4c08e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c08e8:
    // 0x4c08e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4c08e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c08ec:
    // 0x4c08ec: 0x0  nop
    ctx->pc = 0x4c08ecu;
    // NOP
label_4c08f0:
    // 0x4c08f0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4c08f4:
    if (ctx->pc == 0x4C08F4u) {
        ctx->pc = 0x4C08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C08F0u;
        // 0x4c08f4: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C08F8u;
        goto label_4c08f8;
    }
    ctx->pc = 0x4C08F0u;
    {
        const bool branch_taken_0x4c08f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c08f0) {
            ctx->pc = 0x4C08F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C08F0u;
            // 0x4c08f4: 0xc6220000  lwc1        $f2, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0900u;
            goto label_4c0900;
        }
    }
    ctx->pc = 0x4C08F8u;
label_4c08f8:
    // 0x4c08f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c08fc:
    if (ctx->pc == 0x4C08FCu) {
        ctx->pc = 0x4C08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C08F8u;
        // 0x4c08fc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0900u;
        goto label_4c0900;
    }
    ctx->pc = 0x4C08F8u;
    {
        const bool branch_taken_0x4c08f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C08F8u;
        // 0x4c08fc: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c08f8) {
            ctx->pc = 0x4C0914u;
            goto label_4c0914;
        }
    }
    ctx->pc = 0x4C0900u;
label_4c0900:
    // 0x4c0900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0904:
    // 0x4c0904: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x4c0904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0908:
    // 0x4c0908: 0x0  nop
    ctx->pc = 0x4c0908u;
    // NOP
label_4c090c:
    // 0x4c090c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4c0910:
    if (ctx->pc == 0x4C0910u) {
        ctx->pc = 0x4C0910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C090Cu;
        // 0x4c0910: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0914u;
        goto label_4c0914;
    }
    ctx->pc = 0x4C090Cu;
    {
        const bool branch_taken_0x4c090c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c090c) {
            ctx->pc = 0x4C0910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C090Cu;
            // 0x4c0910: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0914u;
            goto label_4c0914;
        }
    }
    ctx->pc = 0x4C0914u;
label_4c0914:
    // 0x4c0914: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x4c0914u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c0918:
    // 0x4c0918: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x4c0918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c091c:
    // 0x4c091c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4c091cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0920:
    // 0x4c0920: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x4c0920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0924:
    // 0x4c0924: 0x0  nop
    ctx->pc = 0x4c0924u;
    // NOP
label_4c0928:
    // 0x4c0928: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4c092c:
    if (ctx->pc == 0x4C092Cu) {
        ctx->pc = 0x4C092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0928u;
        // 0x4c092c: 0xc6230004  lwc1        $f3, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0930u;
        goto label_4c0930;
    }
    ctx->pc = 0x4C0928u;
    {
        const bool branch_taken_0x4c0928 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0928) {
            ctx->pc = 0x4C092Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0928u;
            // 0x4c092c: 0xc6230004  lwc1        $f3, 0x4($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0938u;
            goto label_4c0938;
        }
    }
    ctx->pc = 0x4C0930u;
label_4c0930:
    // 0x4c0930: 0x10000006  b           . + 4 + (0x6 << 2)
label_4c0934:
    if (ctx->pc == 0x4C0934u) {
        ctx->pc = 0x4C0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0930u;
        // 0x4c0934: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0938u;
        goto label_4c0938;
    }
    ctx->pc = 0x4C0930u;
    {
        const bool branch_taken_0x4c0930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0930u;
        // 0x4c0934: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0930) {
            ctx->pc = 0x4C094Cu;
            goto label_4c094c;
        }
    }
    ctx->pc = 0x4C0938u;
label_4c0938:
    // 0x4c0938: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c093c:
    // 0x4c093c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x4c093cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c0940:
    // 0x4c0940: 0x0  nop
    ctx->pc = 0x4c0940u;
    // NOP
label_4c0944:
    // 0x4c0944: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4c0948:
    if (ctx->pc == 0x4C0948u) {
        ctx->pc = 0x4C0948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0944u;
        // 0x4c0948: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C094Cu;
        goto label_4c094c;
    }
    ctx->pc = 0x4C0944u;
    {
        const bool branch_taken_0x4c0944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0944) {
            ctx->pc = 0x4C0948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0944u;
            // 0x4c0948: 0x46031001  sub.s       $f0, $f2, $f3 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C094Cu;
            goto label_4c094c;
        }
    }
    ctx->pc = 0x4C094Cu;
label_4c094c:
    // 0x4c094c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x4c094cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c0950:
    // 0x4c0950: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4c0950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c0954:
    // 0x4c0954: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4c0954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0958:
    // 0x4c0958: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x4c0958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c095c:
    // 0x4c095c: 0x0  nop
    ctx->pc = 0x4c095cu;
    // NOP
label_4c0960:
    // 0x4c0960: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_4c0964:
    if (ctx->pc == 0x4C0964u) {
        ctx->pc = 0x4C0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0960u;
        // 0x4c0964: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0968u;
        goto label_4c0968;
    }
    ctx->pc = 0x4C0960u;
    {
        const bool branch_taken_0x4c0960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0960u;
        // 0x4c0964: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0960) {
            ctx->pc = 0x4C0970u;
            goto label_4c0970;
        }
    }
    ctx->pc = 0x4C0968u;
label_4c0968:
    // 0x4c0968: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c096c:
    if (ctx->pc == 0x4C096Cu) {
        ctx->pc = 0x4C096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0968u;
        // 0x4c096c: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0970u;
        goto label_4c0970;
    }
    ctx->pc = 0x4C0968u;
    {
        const bool branch_taken_0x4c0968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0968u;
        // 0x4c096c: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0968) {
            ctx->pc = 0x4C0988u;
            goto label_4c0988;
        }
    }
    ctx->pc = 0x4C0970u;
label_4c0970:
    // 0x4c0970: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x4c0970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0974:
    // 0x4c0974: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0978:
    // 0x4c0978: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4c0978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c097c:
    // 0x4c097c: 0x0  nop
    ctx->pc = 0x4c097cu;
    // NOP
label_4c0980:
    // 0x4c0980: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4c0984:
    if (ctx->pc == 0x4C0984u) {
        ctx->pc = 0x4C0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0980u;
        // 0x4c0984: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0988u;
        goto label_4c0988;
    }
    ctx->pc = 0x4C0980u;
    {
        const bool branch_taken_0x4c0980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0980) {
            ctx->pc = 0x4C0984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0980u;
            // 0x4c0984: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0988u;
            goto label_4c0988;
        }
    }
    ctx->pc = 0x4C0988u;
label_4c0988:
    // 0x4c0988: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x4c0988u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c098c:
    // 0x4c098c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4c098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0990:
    // 0x4c0990: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4c0990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c0994:
    // 0x4c0994: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x4c0994u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_4c0998:
    // 0x4c0998: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4c0998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c099c:
    // 0x4c099c: 0x0  nop
    ctx->pc = 0x4c099cu;
    // NOP
label_4c09a0:
    // 0x4c09a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4c09a4:
    if (ctx->pc == 0x4C09A4u) {
        ctx->pc = 0x4C09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09A0u;
        // 0x4c09a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C09A8u;
        goto label_4c09a8;
    }
    ctx->pc = 0x4C09A0u;
    {
        const bool branch_taken_0x4c09a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09A0u;
        // 0x4c09a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c09a0) {
            ctx->pc = 0x4C09ACu;
            goto label_4c09ac;
        }
    }
    ctx->pc = 0x4C09A8u;
label_4c09a8:
    // 0x4c09a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4c09a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c09ac:
    // 0x4c09ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4c09b0:
    if (ctx->pc == 0x4C09B0u) {
        ctx->pc = 0x4C09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09ACu;
        // 0x4c09b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C09B4u;
        goto label_4c09b4;
    }
    ctx->pc = 0x4C09ACu;
    {
        const bool branch_taken_0x4c09ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09ACu;
        // 0x4c09b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c09ac) {
            ctx->pc = 0x4C09D0u;
            goto label_4c09d0;
        }
    }
    ctx->pc = 0x4C09B4u;
label_4c09b4:
    // 0x4c09b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4c09b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4c09b8:
    // 0x4c09b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c09b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c09bc:
    // 0x4c09bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c09bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c09c0:
    // 0x4c09c0: 0x2a0f809  jalr        $s5
label_4c09c4:
    if (ctx->pc == 0x4C09C4u) {
        ctx->pc = 0x4C09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09C0u;
        // 0x4c09c4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C09C8u;
        goto label_4c09c8;
    }
    ctx->pc = 0x4C09C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x4C09C8u);
        ctx->pc = 0x4C09C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09C0u;
        // 0x4c09c4: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C09C0u, 0x4C09C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C09C8u;
label_4c09c8:
    // 0x4c09c8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_4c09cc:
    if (ctx->pc == 0x4C09CCu) {
        ctx->pc = 0x4C09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09C8u;
        // 0x4c09cc: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C09D0u;
        goto label_4c09d0;
    }
    ctx->pc = 0x4C09C8u;
    {
        const bool branch_taken_0x4c09c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c09c8) {
            ctx->pc = 0x4C09CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C09C8u;
            // 0x4c09cc: 0x7bb001a0  lq          $s0, 0x1A0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C09F4u;
            goto label_4c09f4;
        }
    }
    ctx->pc = 0x4C09D0u;
label_4c09d0:
    // 0x4c09d0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x4c09d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4c09d4:
    // 0x4c09d4: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x4c09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_4c09d8:
    // 0x4c09d8: 0x1462ffb1  bne         $v1, $v0, . + 4 + (-0x4F << 2)
label_4c09dc:
    if (ctx->pc == 0x4C09DCu) {
        ctx->pc = 0x4C09DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09D8u;
        // 0x4c09dc: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C09E0u;
        goto label_4c09e0;
    }
    ctx->pc = 0x4C09D8u;
    {
        const bool branch_taken_0x4c09d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4C09DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09D8u;
        // 0x4c09dc: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c09d8) {
            ctx->pc = 0x4C08A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c08a0;
        }
    }
    ctx->pc = 0x4C09E0u;
label_4c09e0:
    // 0x4c09e0: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x4c09e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_4c09e4:
    // 0x4c09e4: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x4c09e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c09e8:
    // 0x4c09e8: 0x1440ff81  bnez        $v0, . + 4 + (-0x7F << 2)
label_4c09ec:
    if (ctx->pc == 0x4C09ECu) {
        ctx->pc = 0x4C09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09E8u;
        // 0x4c09ec: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C09F0u;
        goto label_4c09f0;
    }
    ctx->pc = 0x4C09E8u;
    {
        const bool branch_taken_0x4c09e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C09E8u;
        // 0x4c09ec: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c09e8) {
            ctx->pc = 0x4C07F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4c07f0;
        }
    }
    ctx->pc = 0x4C09F0u;
label_4c09f0:
    // 0x4c09f0: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x4c09f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_4c09f4:
    // 0x4c09f4: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x4c09f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_4c09f8:
    // 0x4c09f8: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x4c09f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_4c09fc:
    // 0x4c09fc: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x4c09fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4c0a00:
    // 0x4c0a00: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x4c0a00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_4c0a04:
    // 0x4c0a04: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x4c0a04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_4c0a08:
    // 0x4c0a08: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x4c0a08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_4c0a0c:
    // 0x4c0a0c: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x4c0a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_4c0a10:
    // 0x4c0a10: 0x3e00008  jr          $ra
label_4c0a14:
    if (ctx->pc == 0x4C0A14u) {
        ctx->pc = 0x4C0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0A10u;
        // 0x4c0a14: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0A18u;
        goto label_fallthrough_0x4c0a10;
    }
    ctx->pc = 0x4C0A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0A10u;
        // 0x4c0a14: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4c0a10:
    ctx->pc = 0x4C0A18u;
}
