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

// Function: sub_00472100
// Address: 0x472100 - 0x472310
void sub_00472100_0x472100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472100_0x472100");
#endif

    switch (ctx->pc) {
        case 0x472100u: goto label_472100;
        case 0x472104u: goto label_472104;
        case 0x472108u: goto label_472108;
        case 0x47210cu: goto label_47210c;
        case 0x472110u: goto label_472110;
        case 0x472114u: goto label_472114;
        case 0x472118u: goto label_472118;
        case 0x47211cu: goto label_47211c;
        case 0x472120u: goto label_472120;
        case 0x472124u: goto label_472124;
        case 0x472128u: goto label_472128;
        case 0x47212cu: goto label_47212c;
        case 0x472130u: goto label_472130;
        case 0x472134u: goto label_472134;
        case 0x472138u: goto label_472138;
        case 0x47213cu: goto label_47213c;
        case 0x472140u: goto label_472140;
        case 0x472144u: goto label_472144;
        case 0x472148u: goto label_472148;
        case 0x47214cu: goto label_47214c;
        case 0x472150u: goto label_472150;
        case 0x472154u: goto label_472154;
        case 0x472158u: goto label_472158;
        case 0x47215cu: goto label_47215c;
        case 0x472160u: goto label_472160;
        case 0x472164u: goto label_472164;
        case 0x472168u: goto label_472168;
        case 0x47216cu: goto label_47216c;
        case 0x472170u: goto label_472170;
        case 0x472174u: goto label_472174;
        case 0x472178u: goto label_472178;
        case 0x47217cu: goto label_47217c;
        case 0x472180u: goto label_472180;
        case 0x472184u: goto label_472184;
        case 0x472188u: goto label_472188;
        case 0x47218cu: goto label_47218c;
        case 0x472190u: goto label_472190;
        case 0x472194u: goto label_472194;
        case 0x472198u: goto label_472198;
        case 0x47219cu: goto label_47219c;
        case 0x4721a0u: goto label_4721a0;
        case 0x4721a4u: goto label_4721a4;
        case 0x4721a8u: goto label_4721a8;
        case 0x4721acu: goto label_4721ac;
        case 0x4721b0u: goto label_4721b0;
        case 0x4721b4u: goto label_4721b4;
        case 0x4721b8u: goto label_4721b8;
        case 0x4721bcu: goto label_4721bc;
        case 0x4721c0u: goto label_4721c0;
        case 0x4721c4u: goto label_4721c4;
        case 0x4721c8u: goto label_4721c8;
        case 0x4721ccu: goto label_4721cc;
        case 0x4721d0u: goto label_4721d0;
        case 0x4721d4u: goto label_4721d4;
        case 0x4721d8u: goto label_4721d8;
        case 0x4721dcu: goto label_4721dc;
        case 0x4721e0u: goto label_4721e0;
        case 0x4721e4u: goto label_4721e4;
        case 0x4721e8u: goto label_4721e8;
        case 0x4721ecu: goto label_4721ec;
        case 0x4721f0u: goto label_4721f0;
        case 0x4721f4u: goto label_4721f4;
        case 0x4721f8u: goto label_4721f8;
        case 0x4721fcu: goto label_4721fc;
        case 0x472200u: goto label_472200;
        case 0x472204u: goto label_472204;
        case 0x472208u: goto label_472208;
        case 0x47220cu: goto label_47220c;
        case 0x472210u: goto label_472210;
        case 0x472214u: goto label_472214;
        case 0x472218u: goto label_472218;
        case 0x47221cu: goto label_47221c;
        case 0x472220u: goto label_472220;
        case 0x472224u: goto label_472224;
        case 0x472228u: goto label_472228;
        case 0x47222cu: goto label_47222c;
        case 0x472230u: goto label_472230;
        case 0x472234u: goto label_472234;
        case 0x472238u: goto label_472238;
        case 0x47223cu: goto label_47223c;
        case 0x472240u: goto label_472240;
        case 0x472244u: goto label_472244;
        case 0x472248u: goto label_472248;
        case 0x47224cu: goto label_47224c;
        case 0x472250u: goto label_472250;
        case 0x472254u: goto label_472254;
        case 0x472258u: goto label_472258;
        case 0x47225cu: goto label_47225c;
        case 0x472260u: goto label_472260;
        case 0x472264u: goto label_472264;
        case 0x472268u: goto label_472268;
        case 0x47226cu: goto label_47226c;
        case 0x472270u: goto label_472270;
        case 0x472274u: goto label_472274;
        case 0x472278u: goto label_472278;
        case 0x47227cu: goto label_47227c;
        case 0x472280u: goto label_472280;
        case 0x472284u: goto label_472284;
        case 0x472288u: goto label_472288;
        case 0x47228cu: goto label_47228c;
        case 0x472290u: goto label_472290;
        case 0x472294u: goto label_472294;
        case 0x472298u: goto label_472298;
        case 0x47229cu: goto label_47229c;
        case 0x4722a0u: goto label_4722a0;
        case 0x4722a4u: goto label_4722a4;
        case 0x4722a8u: goto label_4722a8;
        case 0x4722acu: goto label_4722ac;
        case 0x4722b0u: goto label_4722b0;
        case 0x4722b4u: goto label_4722b4;
        case 0x4722b8u: goto label_4722b8;
        case 0x4722bcu: goto label_4722bc;
        case 0x4722c0u: goto label_4722c0;
        case 0x4722c4u: goto label_4722c4;
        case 0x4722c8u: goto label_4722c8;
        case 0x4722ccu: goto label_4722cc;
        case 0x4722d0u: goto label_4722d0;
        case 0x4722d4u: goto label_4722d4;
        case 0x4722d8u: goto label_4722d8;
        case 0x4722dcu: goto label_4722dc;
        case 0x4722e0u: goto label_4722e0;
        case 0x4722e4u: goto label_4722e4;
        case 0x4722e8u: goto label_4722e8;
        case 0x4722ecu: goto label_4722ec;
        case 0x4722f0u: goto label_4722f0;
        case 0x4722f4u: goto label_4722f4;
        case 0x4722f8u: goto label_4722f8;
        case 0x4722fcu: goto label_4722fc;
        case 0x472300u: goto label_472300;
        case 0x472304u: goto label_472304;
        case 0x472308u: goto label_472308;
        case 0x47230cu: goto label_47230c;
        default: break;
    }

    ctx->pc = 0x472100u;

label_472100:
    // 0x472100: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x472100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_472104:
    // 0x472104: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x472104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_472108:
    // 0x472108: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x472108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_47210c:
    // 0x47210c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47210cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_472110:
    // 0x472110: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x472110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_472114:
    // 0x472114: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x472114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_472118:
    // 0x472118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x472118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47211c:
    // 0x47211c: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x47211cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_472120:
    // 0x472120: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x472120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_472124:
    // 0x472124: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x472124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_472128:
    // 0x472128: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x472128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_47212c:
    // 0x47212c: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x47212cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_472130:
    // 0x472130: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x472130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_472134:
    // 0x472134: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x472134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_472138:
    // 0x472138: 0xc11a45e  jal         func_469178
label_47213c:
    if (ctx->pc == 0x47213Cu) {
        ctx->pc = 0x47213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472138u;
        // 0x47213c: 0x26570064  addiu       $s7, $s2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472140u;
        goto label_472140;
    }
    ctx->pc = 0x472138u;
    SET_GPR_U32(ctx, 31, 0x472140u);
    ctx->pc = 0x47213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472138u;
    // 0x47213c: 0x26570064  addiu       $s7, $s2, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x472138u, 0x472140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472140u;
label_472140:
    // 0x472140: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x472140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_472144:
    // 0x472144: 0x27b40110  addiu       $s4, $sp, 0x110
    ctx->pc = 0x472144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_472148:
    // 0x472148: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x472148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_47214c:
    // 0x47214c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x47214cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_472150:
    // 0x472150: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x472150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_472154:
    // 0x472154: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x472154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_472158:
    // 0x472158: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x472158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_47215c:
    // 0x47215c: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x47215cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_472160:
    // 0x472160: 0x27b60100  addiu       $s6, $sp, 0x100
    ctx->pc = 0x472160u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_472164:
    // 0x472164: 0x6ba70107  ldl         $a3, 0x107($sp)
    ctx->pc = 0x472164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_472168:
    // 0x472168: 0x6fa70100  ldr         $a3, 0x100($sp)
    ctx->pc = 0x472168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_47216c:
    // 0x47216c: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x47216cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_472170:
    // 0x472170: 0xb3a70117  sdl         $a3, 0x117($sp)
    ctx->pc = 0x472170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_472174:
    // 0x472174: 0xb7a70110  sdr         $a3, 0x110($sp)
    ctx->pc = 0x472174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_472178:
    // 0x472178: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x472178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
label_47217c:
    // 0x47217c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x47217cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_472180:
    // 0x472180: 0x2475ad18  addiu       $s5, $v1, -0x52E8
    ctx->pc = 0x472180u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_472184:
    // 0x472184: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x472184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_472188:
    // 0x472188: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x472188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_47218c:
    // 0x47218c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x47218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472190:
    // 0x472190: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x472190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_472194:
    // 0x472194: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x472194u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_472198:
    // 0x472198: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x472198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_47219c:
    // 0x47219c: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x47219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4721a0:
    // 0x4721a0: 0xc7a40114  lwc1        $f4, 0x114($sp)
    ctx->pc = 0x4721a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4721a4:
    // 0x4721a4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x4721a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_4721a8:
    // 0x4721a8: 0xc7a50118  lwc1        $f5, 0x118($sp)
    ctx->pc = 0x4721a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4721ac:
    // 0x4721ac: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4721acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4721b0:
    // 0x4721b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4721b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4721b4:
    // 0x4721b4: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x4721b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_4721b8:
    // 0x4721b8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4721b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4721bc:
    // 0x4721bc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4721bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4721c0:
    // 0x4721c0: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x4721c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_4721c4:
    // 0x4721c4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4721c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4721c8:
    // 0x4721c8: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x4721c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_4721cc:
    // 0x4721cc: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x4721ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4721d0:
    // 0x4721d0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4721d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4721d4:
    // 0x4721d4: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4721d4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_4721d8:
    // 0x4721d8: 0xe7a40114  swc1        $f4, 0x114($sp)
    ctx->pc = 0x4721d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4721dc:
    // 0x4721dc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x4721dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4721e0:
    // 0x4721e0: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x4721e0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_4721e4:
    // 0x4721e4: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x4721e4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4721e8:
    // 0x4721e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4721e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4721ec:
    // 0x4721ec: 0x0  nop
    ctx->pc = 0x4721ecu;
    // NOP
label_4721f0:
    // 0x4721f0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4721f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4721f4:
    // 0x4721f4: 0x34a50507  ori         $a1, $a1, 0x507
    ctx->pc = 0x4721f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1287);
label_4721f8:
    // 0x4721f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4721f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4721fc:
    // 0x4721fc: 0x4410019  bgez        $v0, . + 4 + (0x19 << 2)
label_472200:
    if (ctx->pc == 0x472200u) {
        ctx->pc = 0x472200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4721FCu;
        // 0x472200: 0x2c21821  addu        $v1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472204u;
        goto label_472204;
    }
    ctx->pc = 0x4721FCu;
    {
        const bool branch_taken_0x4721fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x472200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4721FCu;
        // 0x472200: 0x2c21821  addu        $v1, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4721fc) {
            ctx->pc = 0x472264u;
            goto label_472264;
        }
    }
    ctx->pc = 0x472204u;
label_472204:
    // 0x472204: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x472204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_472208:
    // 0x472208: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x472208u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_47220c:
    // 0x47220c: 0x8ea20118  lw          $v0, 0x118($s5)
    ctx->pc = 0x47220cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 280)));
label_472210:
    // 0x472210: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x472210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_472214:
    // 0x472214: 0x40f809  jalr        $v0
label_472218:
    if (ctx->pc == 0x472218u) {
        ctx->pc = 0x472218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472214u;
        // 0x472218: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47221Cu;
        goto label_47221c;
    }
    ctx->pc = 0x472214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47221Cu);
        ctx->pc = 0x472218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472214u;
        // 0x472218: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472214u, 0x47221Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47221Cu;
label_47221c:
    // 0x47221c: 0xac500014  sw          $s0, 0x14($v0)
    ctx->pc = 0x47221cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 16));
label_472220:
    // 0x472220: 0x26030038  addiu       $v1, $s0, 0x38
    ctx->pc = 0x472220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_472224:
    // 0x472224: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x472224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
label_472228:
    // 0x472228: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x472228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_47222c:
    // 0x47222c: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x47222cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_472230:
    // 0x472230: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x472230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_472234:
    // 0x472234: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x472234u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_472238:
    // 0x472238: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x472238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_47223c:
    // 0x47223c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x47223cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_472240:
    // 0x472240: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x472240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_472244:
    // 0x472244: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x472244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_472248:
    // 0x472248: 0xac570010  sw          $s7, 0x10($v0)
    ctx->pc = 0x472248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 23));
label_47224c:
    // 0x47224c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x47224cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_472250:
    // 0x472250: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x472250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_472254:
    // 0x472254: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x472254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_472258:
    // 0x472258: 0xae450064  sw          $a1, 0x64($s2)
    ctx->pc = 0x472258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 5));
label_47225c:
    // 0x47225c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_472260:
    if (ctx->pc == 0x472260u) {
        ctx->pc = 0x472260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47225Cu;
        // 0x472260: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472264u;
        goto label_472264;
    }
    ctx->pc = 0x47225Cu;
    {
        const bool branch_taken_0x47225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47225Cu;
        // 0x472260: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47225c) {
            ctx->pc = 0x4722D4u;
            goto label_4722d4;
        }
    }
    ctx->pc = 0x472264u;
label_472264:
    // 0x472264: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x472264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_472268:
    // 0x472268: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x472268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47226c:
    // 0x47226c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x47226cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_472270:
    // 0x472270: 0x0  nop
    ctx->pc = 0x472270u;
    // NOP
label_472274:
    // 0x472274: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_472278:
    if (ctx->pc == 0x472278u) {
        ctx->pc = 0x472278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472274u;
        // 0x472278: 0x2821021  addu        $v0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47227Cu;
        goto label_47227c;
    }
    ctx->pc = 0x472274u;
    {
        const bool branch_taken_0x472274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x472278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472274u;
        // 0x472278: 0x2821021  addu        $v0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472274) {
            ctx->pc = 0x4722B0u;
            goto label_4722b0;
        }
    }
    ctx->pc = 0x47227Cu;
label_47227c:
    // 0x47227c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x47227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_472280:
    // 0x472280: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x472280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_472284:
    // 0x472284: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x472284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_472288:
    // 0x472288: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x472288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47228c:
    // 0x47228c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x47228cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_472290:
    // 0x472290: 0x0  nop
    ctx->pc = 0x472290u;
    // NOP
label_472294:
    // 0x472294: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_472298:
    if (ctx->pc == 0x472298u) {
        ctx->pc = 0x472298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472294u;
        // 0x472298: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47229Cu;
        goto label_47229c;
    }
    ctx->pc = 0x472294u;
    {
        const bool branch_taken_0x472294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x472298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472294u;
        // 0x472298: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472294) {
            ctx->pc = 0x4722D8u;
            goto label_4722d8;
        }
    }
    ctx->pc = 0x47229Cu;
label_47229c:
    // 0x47229c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x47229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4722a0:
    // 0x4722a0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4722a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4722a4:
    // 0x4722a4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4722a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4722a8:
    // 0x4722a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_4722ac:
    if (ctx->pc == 0x4722ACu) {
        ctx->pc = 0x4722ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4722A8u;
        // 0x4722ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4722B0u;
        goto label_4722b0;
    }
    ctx->pc = 0x4722A8u;
    {
        const bool branch_taken_0x4722a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4722ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4722A8u;
        // 0x4722ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4722a8) {
            ctx->pc = 0x4722D8u;
            goto label_4722d8;
        }
    }
    ctx->pc = 0x4722B0u;
label_4722b0:
    // 0x4722b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4722b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4722b4:
    // 0x4722b4: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x4722b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4722b8:
    // 0x4722b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4722b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4722bc:
    // 0x4722bc: 0x0  nop
    ctx->pc = 0x4722bcu;
    // NOP
label_4722c0:
    // 0x4722c0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4722c4:
    if (ctx->pc == 0x4722C4u) {
        ctx->pc = 0x4722C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4722C0u;
        // 0x4722c4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4722C8u;
        goto label_4722c8;
    }
    ctx->pc = 0x4722C0u;
    {
        const bool branch_taken_0x4722c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4722c0) {
            ctx->pc = 0x4722C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4722C0u;
            // 0x4722c4: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4722D0u;
            goto label_4722d0;
        }
    }
    ctx->pc = 0x4722C8u;
label_4722c8:
    // 0x4722c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_4722cc:
    if (ctx->pc == 0x4722CCu) {
        ctx->pc = 0x4722CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4722C8u;
        // 0x4722cc: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4722D0u;
        goto label_4722d0;
    }
    ctx->pc = 0x4722C8u;
    {
        const bool branch_taken_0x4722c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4722CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4722C8u;
        // 0x4722cc: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4722c8) {
            ctx->pc = 0x4722D8u;
            goto label_4722d8;
        }
    }
    ctx->pc = 0x4722D0u;
label_4722d0:
    // 0x4722d0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x4722d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4722d4:
    // 0x4722d4: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x4722d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_4722d8:
    // 0x4722d8: 0x663ffc5  bgezl       $s3, . + 4 + (-0x3B << 2)
label_4722dc:
    if (ctx->pc == 0x4722DCu) {
        ctx->pc = 0x4722DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4722D8u;
        // 0x4722dc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4722E0u;
        goto label_4722e0;
    }
    ctx->pc = 0x4722D8u;
    {
        const bool branch_taken_0x4722d8 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x4722d8) {
            ctx->pc = 0x4722DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4722D8u;
            // 0x4722dc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4721F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4721f0;
        }
    }
    ctx->pc = 0x4722E0u;
label_4722e0:
    // 0x4722e0: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x4722e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_4722e4:
    // 0x4722e4: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x4722e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_4722e8:
    // 0x4722e8: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x4722e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_4722ec:
    // 0x4722ec: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x4722ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4722f0:
    // 0x4722f0: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x4722f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_4722f4:
    // 0x4722f4: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x4722f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_4722f8:
    // 0x4722f8: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x4722f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_4722fc:
    // 0x4722fc: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x4722fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_472300:
    // 0x472300: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x472300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_472304:
    // 0x472304: 0x3e00008  jr          $ra
label_472308:
    if (ctx->pc == 0x472308u) {
        ctx->pc = 0x472308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472304u;
        // 0x472308: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47230Cu;
        goto label_47230c;
    }
    ctx->pc = 0x472304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x472308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472304u;
        // 0x472308: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47230Cu;
label_47230c:
    // 0x47230c: 0x0  nop
    ctx->pc = 0x47230cu;
    // NOP
    ctx->pc = 0x472310u;
}
