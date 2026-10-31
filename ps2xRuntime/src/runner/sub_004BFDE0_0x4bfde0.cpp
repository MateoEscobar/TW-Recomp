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

// Function: sub_004BFDE0
// Address: 0x4bfde0 - 0x4c0098
void sub_004BFDE0_0x4bfde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BFDE0_0x4bfde0");
#endif

    switch (ctx->pc) {
        case 0x4bfde0u: goto label_4bfde0;
        case 0x4bfde4u: goto label_4bfde4;
        case 0x4bfde8u: goto label_4bfde8;
        case 0x4bfdecu: goto label_4bfdec;
        case 0x4bfdf0u: goto label_4bfdf0;
        case 0x4bfdf4u: goto label_4bfdf4;
        case 0x4bfdf8u: goto label_4bfdf8;
        case 0x4bfdfcu: goto label_4bfdfc;
        case 0x4bfe00u: goto label_4bfe00;
        case 0x4bfe04u: goto label_4bfe04;
        case 0x4bfe08u: goto label_4bfe08;
        case 0x4bfe0cu: goto label_4bfe0c;
        case 0x4bfe10u: goto label_4bfe10;
        case 0x4bfe14u: goto label_4bfe14;
        case 0x4bfe18u: goto label_4bfe18;
        case 0x4bfe1cu: goto label_4bfe1c;
        case 0x4bfe20u: goto label_4bfe20;
        case 0x4bfe24u: goto label_4bfe24;
        case 0x4bfe28u: goto label_4bfe28;
        case 0x4bfe2cu: goto label_4bfe2c;
        case 0x4bfe30u: goto label_4bfe30;
        case 0x4bfe34u: goto label_4bfe34;
        case 0x4bfe38u: goto label_4bfe38;
        case 0x4bfe3cu: goto label_4bfe3c;
        case 0x4bfe40u: goto label_4bfe40;
        case 0x4bfe44u: goto label_4bfe44;
        case 0x4bfe48u: goto label_4bfe48;
        case 0x4bfe4cu: goto label_4bfe4c;
        case 0x4bfe50u: goto label_4bfe50;
        case 0x4bfe54u: goto label_4bfe54;
        case 0x4bfe58u: goto label_4bfe58;
        case 0x4bfe5cu: goto label_4bfe5c;
        case 0x4bfe60u: goto label_4bfe60;
        case 0x4bfe64u: goto label_4bfe64;
        case 0x4bfe68u: goto label_4bfe68;
        case 0x4bfe6cu: goto label_4bfe6c;
        case 0x4bfe70u: goto label_4bfe70;
        case 0x4bfe74u: goto label_4bfe74;
        case 0x4bfe78u: goto label_4bfe78;
        case 0x4bfe7cu: goto label_4bfe7c;
        case 0x4bfe80u: goto label_4bfe80;
        case 0x4bfe84u: goto label_4bfe84;
        case 0x4bfe88u: goto label_4bfe88;
        case 0x4bfe8cu: goto label_4bfe8c;
        case 0x4bfe90u: goto label_4bfe90;
        case 0x4bfe94u: goto label_4bfe94;
        case 0x4bfe98u: goto label_4bfe98;
        case 0x4bfe9cu: goto label_4bfe9c;
        case 0x4bfea0u: goto label_4bfea0;
        case 0x4bfea4u: goto label_4bfea4;
        case 0x4bfea8u: goto label_4bfea8;
        case 0x4bfeacu: goto label_4bfeac;
        case 0x4bfeb0u: goto label_4bfeb0;
        case 0x4bfeb4u: goto label_4bfeb4;
        case 0x4bfeb8u: goto label_4bfeb8;
        case 0x4bfebcu: goto label_4bfebc;
        case 0x4bfec0u: goto label_4bfec0;
        case 0x4bfec4u: goto label_4bfec4;
        case 0x4bfec8u: goto label_4bfec8;
        case 0x4bfeccu: goto label_4bfecc;
        case 0x4bfed0u: goto label_4bfed0;
        case 0x4bfed4u: goto label_4bfed4;
        case 0x4bfed8u: goto label_4bfed8;
        case 0x4bfedcu: goto label_4bfedc;
        case 0x4bfee0u: goto label_4bfee0;
        case 0x4bfee4u: goto label_4bfee4;
        case 0x4bfee8u: goto label_4bfee8;
        case 0x4bfeecu: goto label_4bfeec;
        case 0x4bfef0u: goto label_4bfef0;
        case 0x4bfef4u: goto label_4bfef4;
        case 0x4bfef8u: goto label_4bfef8;
        case 0x4bfefcu: goto label_4bfefc;
        case 0x4bff00u: goto label_4bff00;
        case 0x4bff04u: goto label_4bff04;
        case 0x4bff08u: goto label_4bff08;
        case 0x4bff0cu: goto label_4bff0c;
        case 0x4bff10u: goto label_4bff10;
        case 0x4bff14u: goto label_4bff14;
        case 0x4bff18u: goto label_4bff18;
        case 0x4bff1cu: goto label_4bff1c;
        case 0x4bff20u: goto label_4bff20;
        case 0x4bff24u: goto label_4bff24;
        case 0x4bff28u: goto label_4bff28;
        case 0x4bff2cu: goto label_4bff2c;
        case 0x4bff30u: goto label_4bff30;
        case 0x4bff34u: goto label_4bff34;
        case 0x4bff38u: goto label_4bff38;
        case 0x4bff3cu: goto label_4bff3c;
        case 0x4bff40u: goto label_4bff40;
        case 0x4bff44u: goto label_4bff44;
        case 0x4bff48u: goto label_4bff48;
        case 0x4bff4cu: goto label_4bff4c;
        case 0x4bff50u: goto label_4bff50;
        case 0x4bff54u: goto label_4bff54;
        case 0x4bff58u: goto label_4bff58;
        case 0x4bff5cu: goto label_4bff5c;
        case 0x4bff60u: goto label_4bff60;
        case 0x4bff64u: goto label_4bff64;
        case 0x4bff68u: goto label_4bff68;
        case 0x4bff6cu: goto label_4bff6c;
        case 0x4bff70u: goto label_4bff70;
        case 0x4bff74u: goto label_4bff74;
        case 0x4bff78u: goto label_4bff78;
        case 0x4bff7cu: goto label_4bff7c;
        case 0x4bff80u: goto label_4bff80;
        case 0x4bff84u: goto label_4bff84;
        case 0x4bff88u: goto label_4bff88;
        case 0x4bff8cu: goto label_4bff8c;
        case 0x4bff90u: goto label_4bff90;
        case 0x4bff94u: goto label_4bff94;
        case 0x4bff98u: goto label_4bff98;
        case 0x4bff9cu: goto label_4bff9c;
        case 0x4bffa0u: goto label_4bffa0;
        case 0x4bffa4u: goto label_4bffa4;
        case 0x4bffa8u: goto label_4bffa8;
        case 0x4bffacu: goto label_4bffac;
        case 0x4bffb0u: goto label_4bffb0;
        case 0x4bffb4u: goto label_4bffb4;
        case 0x4bffb8u: goto label_4bffb8;
        case 0x4bffbcu: goto label_4bffbc;
        case 0x4bffc0u: goto label_4bffc0;
        case 0x4bffc4u: goto label_4bffc4;
        case 0x4bffc8u: goto label_4bffc8;
        case 0x4bffccu: goto label_4bffcc;
        case 0x4bffd0u: goto label_4bffd0;
        case 0x4bffd4u: goto label_4bffd4;
        case 0x4bffd8u: goto label_4bffd8;
        case 0x4bffdcu: goto label_4bffdc;
        case 0x4bffe0u: goto label_4bffe0;
        case 0x4bffe4u: goto label_4bffe4;
        case 0x4bffe8u: goto label_4bffe8;
        case 0x4bffecu: goto label_4bffec;
        case 0x4bfff0u: goto label_4bfff0;
        case 0x4bfff4u: goto label_4bfff4;
        case 0x4bfff8u: goto label_4bfff8;
        case 0x4bfffcu: goto label_4bfffc;
        case 0x4c0000u: goto label_4c0000;
        case 0x4c0004u: goto label_4c0004;
        case 0x4c0008u: goto label_4c0008;
        case 0x4c000cu: goto label_4c000c;
        case 0x4c0010u: goto label_4c0010;
        case 0x4c0014u: goto label_4c0014;
        case 0x4c0018u: goto label_4c0018;
        case 0x4c001cu: goto label_4c001c;
        case 0x4c0020u: goto label_4c0020;
        case 0x4c0024u: goto label_4c0024;
        case 0x4c0028u: goto label_4c0028;
        case 0x4c002cu: goto label_4c002c;
        case 0x4c0030u: goto label_4c0030;
        case 0x4c0034u: goto label_4c0034;
        case 0x4c0038u: goto label_4c0038;
        case 0x4c003cu: goto label_4c003c;
        case 0x4c0040u: goto label_4c0040;
        case 0x4c0044u: goto label_4c0044;
        case 0x4c0048u: goto label_4c0048;
        case 0x4c004cu: goto label_4c004c;
        case 0x4c0050u: goto label_4c0050;
        case 0x4c0054u: goto label_4c0054;
        case 0x4c0058u: goto label_4c0058;
        case 0x4c005cu: goto label_4c005c;
        case 0x4c0060u: goto label_4c0060;
        case 0x4c0064u: goto label_4c0064;
        case 0x4c0068u: goto label_4c0068;
        case 0x4c006cu: goto label_4c006c;
        case 0x4c0070u: goto label_4c0070;
        case 0x4c0074u: goto label_4c0074;
        case 0x4c0078u: goto label_4c0078;
        case 0x4c007cu: goto label_4c007c;
        case 0x4c0080u: goto label_4c0080;
        case 0x4c0084u: goto label_4c0084;
        case 0x4c0088u: goto label_4c0088;
        case 0x4c008cu: goto label_4c008c;
        case 0x4c0090u: goto label_4c0090;
        case 0x4c0094u: goto label_4c0094;
        default: break;
    }

    ctx->pc = 0x4bfde0u;

label_4bfde0:
    // 0x4bfde0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x4bfde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_4bfde4:
    // 0x4bfde4: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x4bfde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_4bfde8:
    // 0x4bfde8: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x4bfde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_4bfdec:
    // 0x4bfdec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4bfdecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4bfdf0:
    // 0x4bfdf0: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x4bfdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_4bfdf4:
    // 0x4bfdf4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4bfdf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4bfdf8:
    // 0x4bfdf8: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x4bfdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_4bfdfc:
    // 0x4bfdfc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4bfdfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4bfe00:
    // 0x4bfe00: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x4bfe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_4bfe04:
    // 0x4bfe04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4bfe04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4bfe08:
    // 0x4bfe08: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x4bfe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_4bfe0c:
    // 0x4bfe0c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x4bfe0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4bfe10:
    // 0x4bfe10: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x4bfe10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4bfe14:
    // 0x4bfe14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4bfe14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4bfe18:
    // 0x4bfe18: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4bfe18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bfe1c:
    // 0x4bfe1c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4bfe1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bfe20:
    // 0x4bfe20: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4bfe20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_4bfe24:
    // 0x4bfe24: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4bfe24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4bfe28:
    // 0x4bfe28: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4bfe28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4bfe2c:
    // 0x4bfe2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4bfe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4bfe30:
    // 0x4bfe30: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x4bfe30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bfe34:
    // 0x4bfe34: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x4bfe34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bfe38:
    // 0x4bfe38: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4bfe38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_4bfe3c:
    // 0x4bfe3c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x4bfe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bfe40:
    // 0x4bfe40: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x4bfe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4bfe44:
    // 0x4bfe44: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x4bfe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4bfe48:
    // 0x4bfe48: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x4bfe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4bfe4c:
    // 0x4bfe4c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x4bfe4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_4bfe50:
    // 0x4bfe50: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x4bfe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4bfe54:
    // 0x4bfe54: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x4bfe54u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_4bfe58:
    // 0x4bfe58: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x4bfe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bfe5c:
    // 0x4bfe5c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x4bfe5cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_4bfe60:
    // 0x4bfe60: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4bfe60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bfe64:
    // 0x4bfe64: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4bfe64u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_4bfe68:
    // 0x4bfe68: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x4bfe68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_4bfe6c:
    // 0x4bfe6c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x4bfe6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4bfe70:
    // 0x4bfe70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4bfe70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4bfe74:
    // 0x4bfe74: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x4bfe74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_4bfe78:
    // 0x4bfe78: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x4bfe78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_4bfe7c:
    // 0x4bfe7c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x4bfe7cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4bfe80:
    // 0x4bfe80: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x4bfe80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4bfe84:
    // 0x4bfe84: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x4bfe84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4bfe88:
    // 0x4bfe88: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4bfe88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4bfe8c:
    // 0x4bfe8c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4bfe8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4bfe90:
    // 0x4bfe90: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x4bfe90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4bfe94:
    // 0x4bfe94: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x4bfe94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4bfe98:
    // 0x4bfe98: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x4bfe98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4bfe9c:
    // 0x4bfe9c: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x4bfe9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4bfea0:
    // 0x4bfea0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x4bfea0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bfea4:
    // 0x4bfea4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x4bfea4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bfea8:
    // 0x4bfea8: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x4bfea8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bfeac:
    // 0x4bfeac: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x4bfeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bfeb0:
    // 0x4bfeb0: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x4bfeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bfeb4:
    // 0x4bfeb4: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x4bfeb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4bfeb8:
    // 0x4bfeb8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x4bfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4bfebc:
    // 0x4bfebc: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x4bfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_4bfec0:
    // 0x4bfec0: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x4bfec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_4bfec4:
    // 0x4bfec4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x4bfec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_4bfec8:
    // 0x4bfec8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4bfec8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4bfecc:
    // 0x4bfecc: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x4bfeccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4bfed0:
    // 0x4bfed0: 0x10800068  beqz        $a0, . + 4 + (0x68 << 2)
label_4bfed4:
    if (ctx->pc == 0x4BFED4u) {
        ctx->pc = 0x4BFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFED0u;
        // 0x4bfed4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFED8u;
        goto label_4bfed8;
    }
    ctx->pc = 0x4BFED0u;
    {
        const bool branch_taken_0x4bfed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFED0u;
        // 0x4bfed4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfed0) {
            ctx->pc = 0x4C0074u;
            goto label_4c0074;
        }
    }
    ctx->pc = 0x4BFED8u;
label_4bfed8:
    // 0x4bfed8: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x4bfed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_4bfedc:
    // 0x4bfedc: 0x0  nop
    ctx->pc = 0x4bfedcu;
    // NOP
label_4bfee0:
    // 0x4bfee0: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x4bfee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_4bfee4:
    // 0x4bfee4: 0x8c63fffc  lw          $v1, -0x4($v1)
    ctx->pc = 0x4bfee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4bfee8:
    // 0x4bfee8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4bfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bfeec:
    // 0x4bfeec: 0x4400022  bltz        $v0, . + 4 + (0x22 << 2)
label_4bfef0:
    if (ctx->pc == 0x4BFEF0u) {
        ctx->pc = 0x4BFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFEECu;
        // 0x4bfef0: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFEF4u;
        goto label_4bfef4;
    }
    ctx->pc = 0x4BFEECu;
    {
        const bool branch_taken_0x4bfeec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4BFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFEECu;
        // 0x4bfef0: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bfeec) {
            ctx->pc = 0x4BFF78u;
            goto label_4bff78;
        }
    }
    ctx->pc = 0x4BFEF4u;
label_4bfef4:
    // 0x4bfef4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x4bfef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4bfef8:
    // 0x4bfef8: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x4bfef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4bfefc:
    // 0x4bfefc: 0x0  nop
    ctx->pc = 0x4bfefcu;
    // NOP
label_4bff00:
    // 0x4bff00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bff00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bff04:
    // 0x4bff04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4bff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bff08:
    // 0x4bff08: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x4bff08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4bff0c:
    // 0x4bff0c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x4bff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bff10:
    // 0x4bff10: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4bff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bff14:
    // 0x4bff14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4bff14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bff18:
    // 0x4bff18: 0x0  nop
    ctx->pc = 0x4bff18u;
    // NOP
label_4bff1c:
    // 0x4bff1c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_4bff20:
    if (ctx->pc == 0x4BFF20u) {
        ctx->pc = 0x4BFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF1Cu;
        // 0x4bff20: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFF24u;
        goto label_4bff24;
    }
    ctx->pc = 0x4BFF1Cu;
    {
        const bool branch_taken_0x4bff1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bff1c) {
            ctx->pc = 0x4BFF20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFF1Cu;
            // 0x4bff20: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFF30u;
            goto label_4bff30;
        }
    }
    ctx->pc = 0x4BFF24u;
label_4bff24:
    // 0x4bff24: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x4bff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4bff28:
    // 0x4bff28: 0x1000000e  b           . + 4 + (0xE << 2)
label_4bff2c:
    if (ctx->pc == 0x4BFF2Cu) {
        ctx->pc = 0x4BFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF28u;
        // 0x4bff2c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFF30u;
        goto label_4bff30;
    }
    ctx->pc = 0x4BFF28u;
    {
        const bool branch_taken_0x4bff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF28u;
        // 0x4bff2c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bff28) {
            ctx->pc = 0x4BFF64u;
            goto label_4bff64;
        }
    }
    ctx->pc = 0x4BFF30u;
label_4bff30:
    // 0x4bff30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4bff30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4bff34:
    // 0x4bff34: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4bff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4bff38:
    // 0x4bff38: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x4bff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bff3c:
    // 0x4bff3c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4bff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4bff40:
    // 0x4bff40: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4bff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bff44:
    // 0x4bff44: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4bff44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bff48:
    // 0x4bff48: 0x0  nop
    ctx->pc = 0x4bff48u;
    // NOP
label_4bff4c:
    // 0x4bff4c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4bff50:
    if (ctx->pc == 0x4BFF50u) {
        ctx->pc = 0x4BFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF4Cu;
        // 0x4bff50: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFF54u;
        goto label_4bff54;
    }
    ctx->pc = 0x4BFF4Cu;
    {
        const bool branch_taken_0x4bff4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BFF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF4Cu;
        // 0x4bff50: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bff4c) {
            ctx->pc = 0x4BFF64u;
            goto label_4bff64;
        }
    }
    ctx->pc = 0x4BFF54u;
label_4bff54:
    // 0x4bff54: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x4bff54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_4bff58:
    // 0x4bff58: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x4bff58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_4bff5c:
    // 0x4bff5c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4bff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4bff60:
    // 0x4bff60: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x4bff60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_4bff64:
    // 0x4bff64: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x4bff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4bff68:
    // 0x4bff68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4bff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bff6c:
    // 0x4bff6c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4bff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4bff70:
    // 0x4bff70: 0x481ffe3  bgez        $a0, . + 4 + (-0x1D << 2)
label_4bff74:
    if (ctx->pc == 0x4BFF74u) {
        ctx->pc = 0x4BFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF70u;
        // 0x4bff74: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFF78u;
        goto label_4bff78;
    }
    ctx->pc = 0x4BFF70u;
    {
        const bool branch_taken_0x4bff70 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4BFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF70u;
        // 0x4bff74: 0x8fa3013c  lw          $v1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bff70) {
            ctx->pc = 0x4BFF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bff00;
        }
    }
    ctx->pc = 0x4BFF78u;
label_4bff78:
    // 0x4bff78: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x4bff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4bff7c:
    // 0x4bff7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4bff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4bff80:
    // 0x4bff80: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x4bff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bff84:
    // 0x4bff84: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x4bff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bff88:
    // 0x4bff88: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x4bff88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bff8c:
    // 0x4bff8c: 0x0  nop
    ctx->pc = 0x4bff8cu;
    // NOP
label_4bff90:
    // 0x4bff90: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4bff94:
    if (ctx->pc == 0x4BFF94u) {
        ctx->pc = 0x4BFF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF90u;
        // 0x4bff94: 0xc4a10048  lwc1        $f1, 0x48($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFF98u;
        goto label_4bff98;
    }
    ctx->pc = 0x4BFF90u;
    {
        const bool branch_taken_0x4bff90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bff90) {
            ctx->pc = 0x4BFF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFF90u;
            // 0x4bff94: 0xc4a10048  lwc1        $f1, 0x48($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFFA0u;
            goto label_4bffa0;
        }
    }
    ctx->pc = 0x4BFF98u;
label_4bff98:
    // 0x4bff98: 0x10000006  b           . + 4 + (0x6 << 2)
label_4bff9c:
    if (ctx->pc == 0x4BFF9Cu) {
        ctx->pc = 0x4BFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF98u;
        // 0x4bff9c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFFA0u;
        goto label_4bffa0;
    }
    ctx->pc = 0x4BFF98u;
    {
        const bool branch_taken_0x4bff98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFF98u;
        // 0x4bff9c: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bff98) {
            ctx->pc = 0x4BFFB4u;
            goto label_4bffb4;
        }
    }
    ctx->pc = 0x4BFFA0u;
label_4bffa0:
    // 0x4bffa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bffa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bffa4:
    // 0x4bffa4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4bffa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bffa8:
    // 0x4bffa8: 0x0  nop
    ctx->pc = 0x4bffa8u;
    // NOP
label_4bffac:
    // 0x4bffac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4bffb0:
    if (ctx->pc == 0x4BFFB0u) {
        ctx->pc = 0x4BFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFFACu;
        // 0x4bffb0: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFFB4u;
        goto label_4bffb4;
    }
    ctx->pc = 0x4BFFACu;
    {
        const bool branch_taken_0x4bffac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bffac) {
            ctx->pc = 0x4BFFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFFACu;
            // 0x4bffb0: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFFB4u;
            goto label_4bffb4;
        }
    }
    ctx->pc = 0x4BFFB4u;
label_4bffb4:
    // 0x4bffb4: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x4bffb4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4bffb8:
    // 0x4bffb8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x4bffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4bffbc:
    // 0x4bffbc: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x4bffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4bffc0:
    // 0x4bffc0: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x4bffc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bffc4:
    // 0x4bffc4: 0x0  nop
    ctx->pc = 0x4bffc4u;
    // NOP
label_4bffc8:
    // 0x4bffc8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4bffcc:
    if (ctx->pc == 0x4BFFCCu) {
        ctx->pc = 0x4BFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFFC8u;
        // 0x4bffcc: 0xc4a2004c  lwc1        $f2, 0x4C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFFD0u;
        goto label_4bffd0;
    }
    ctx->pc = 0x4BFFC8u;
    {
        const bool branch_taken_0x4bffc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bffc8) {
            ctx->pc = 0x4BFFCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFFC8u;
            // 0x4bffcc: 0xc4a2004c  lwc1        $f2, 0x4C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFFD8u;
            goto label_4bffd8;
        }
    }
    ctx->pc = 0x4BFFD0u;
label_4bffd0:
    // 0x4bffd0: 0x10000006  b           . + 4 + (0x6 << 2)
label_4bffd4:
    if (ctx->pc == 0x4BFFD4u) {
        ctx->pc = 0x4BFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFFD0u;
        // 0x4bffd4: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFFD8u;
        goto label_4bffd8;
    }
    ctx->pc = 0x4BFFD0u;
    {
        const bool branch_taken_0x4bffd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFFD0u;
        // 0x4bffd4: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bffd0) {
            ctx->pc = 0x4BFFECu;
            goto label_4bffec;
        }
    }
    ctx->pc = 0x4BFFD8u;
label_4bffd8:
    // 0x4bffd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4bffd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4bffdc:
    // 0x4bffdc: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x4bffdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bffe0:
    // 0x4bffe0: 0x0  nop
    ctx->pc = 0x4bffe0u;
    // NOP
label_4bffe4:
    // 0x4bffe4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4bffe8:
    if (ctx->pc == 0x4BFFE8u) {
        ctx->pc = 0x4BFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BFFE4u;
        // 0x4bffe8: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4BFFECu;
        goto label_4bffec;
    }
    ctx->pc = 0x4BFFE4u;
    {
        const bool branch_taken_0x4bffe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4bffe4) {
            ctx->pc = 0x4BFFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BFFE4u;
            // 0x4bffe8: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BFFECu;
            goto label_4bffec;
        }
    }
    ctx->pc = 0x4BFFECu;
label_4bffec:
    // 0x4bffec: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x4bffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4bfff0:
    // 0x4bfff0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4bfff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4bfff4:
    // 0x4bfff4: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x4bfff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4bfff8:
    // 0x4bfff8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x4bfff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4bfffc:
    // 0x4bfffc: 0x0  nop
    ctx->pc = 0x4bfffcu;
    // NOP
label_4c0000:
    // 0x4c0000: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_4c0004:
    if (ctx->pc == 0x4C0004u) {
        ctx->pc = 0x4C0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0000u;
        // 0x4c0004: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0008u;
        goto label_4c0008;
    }
    ctx->pc = 0x4C0000u;
    {
        const bool branch_taken_0x4c0000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0000u;
        // 0x4c0004: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0000) {
            ctx->pc = 0x4C0010u;
            goto label_4c0010;
        }
    }
    ctx->pc = 0x4C0008u;
label_4c0008:
    // 0x4c0008: 0x10000007  b           . + 4 + (0x7 << 2)
label_4c000c:
    if (ctx->pc == 0x4C000Cu) {
        ctx->pc = 0x4C000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0008u;
        // 0x4c000c: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0010u;
        goto label_4c0010;
    }
    ctx->pc = 0x4C0008u;
    {
        const bool branch_taken_0x4c0008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0008u;
        // 0x4c000c: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0008) {
            ctx->pc = 0x4C0028u;
            goto label_4c0028;
        }
    }
    ctx->pc = 0x4C0010u;
label_4c0010:
    // 0x4c0010: 0xc4a10050  lwc1        $f1, 0x50($a1)
    ctx->pc = 0x4c0010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c0014:
    // 0x4c0014: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4c0014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c0018:
    // 0x4c0018: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4c0018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c001c:
    // 0x4c001c: 0x0  nop
    ctx->pc = 0x4c001cu;
    // NOP
label_4c0020:
    // 0x4c0020: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_4c0024:
    if (ctx->pc == 0x4C0024u) {
        ctx->pc = 0x4C0024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0020u;
        // 0x4c0024: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0028u;
        goto label_4c0028;
    }
    ctx->pc = 0x4C0020u;
    {
        const bool branch_taken_0x4c0020 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c0020) {
            ctx->pc = 0x4C0024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C0020u;
            // 0x4c0024: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0028u;
            goto label_4c0028;
        }
    }
    ctx->pc = 0x4C0028u;
label_4c0028:
    // 0x4c0028: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x4c0028u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c002c:
    // 0x4c002c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x4c002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c0030:
    // 0x4c0030: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x4c0030u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_4c0034:
    // 0x4c0034: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4c0034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_4c0038:
    // 0x4c0038: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4c0038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c003c:
    // 0x4c003c: 0x0  nop
    ctx->pc = 0x4c003cu;
    // NOP
label_4c0040:
    // 0x4c0040: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4c0044:
    if (ctx->pc == 0x4C0044u) {
        ctx->pc = 0x4C0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0040u;
        // 0x4c0044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0048u;
        goto label_4c0048;
    }
    ctx->pc = 0x4C0040u;
    {
        const bool branch_taken_0x4c0040 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4C0044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0040u;
        // 0x4c0044: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c0040) {
            ctx->pc = 0x4C004Cu;
            goto label_4c004c;
        }
    }
    ctx->pc = 0x4C0048u;
label_4c0048:
    // 0x4c0048: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4c0048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c004c:
    // 0x4c004c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4c0050:
    if (ctx->pc == 0x4C0050u) {
        ctx->pc = 0x4C0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C004Cu;
        // 0x4c0050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0054u;
        goto label_4c0054;
    }
    ctx->pc = 0x4C004Cu;
    {
        const bool branch_taken_0x4c004c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C0050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C004Cu;
        // 0x4c0050: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c004c) {
            ctx->pc = 0x4C0064u;
            goto label_4c0064;
        }
    }
    ctx->pc = 0x4C0054u;
label_4c0054:
    // 0x4c0054: 0x240f809  jalr        $s2
label_4c0058:
    if (ctx->pc == 0x4C0058u) {
        ctx->pc = 0x4C0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0054u;
        // 0x4c0058: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C005Cu;
        goto label_4c005c;
    }
    ctx->pc = 0x4C0054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x4C005Cu);
        ctx->pc = 0x4C0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C0054u;
        // 0x4c0058: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C0054u, 0x4C005Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4C005Cu;
label_4c005c:
    // 0x4c005c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_4c0060:
    if (ctx->pc == 0x4C0060u) {
        ctx->pc = 0x4C0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C005Cu;
        // 0x4c0060: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0064u;
        goto label_4c0064;
    }
    ctx->pc = 0x4C005Cu;
    {
        const bool branch_taken_0x4c005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c005c) {
            ctx->pc = 0x4C0060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C005Cu;
            // 0x4c0060: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C0078u;
            goto label_4c0078;
        }
    }
    ctx->pc = 0x4C0064u;
label_4c0064:
    // 0x4c0064: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x4c0064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_4c0068:
    // 0x4c0068: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x4c0068u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c006c:
    // 0x4c006c: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
label_4c0070:
    if (ctx->pc == 0x4C0070u) {
        ctx->pc = 0x4C0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C006Cu;
        // 0x4c0070: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0074u;
        goto label_4c0074;
    }
    ctx->pc = 0x4C006Cu;
    {
        const bool branch_taken_0x4c006c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C006Cu;
        // 0x4c0070: 0x2462fffc  addiu       $v0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c006c) {
            ctx->pc = 0x4BFEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4bfee0;
        }
    }
    ctx->pc = 0x4C0074u;
label_4c0074:
    // 0x4c0074: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x4c0074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_4c0078:
    // 0x4c0078: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x4c0078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_4c007c:
    // 0x4c007c: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x4c007cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4c0080:
    // 0x4c0080: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x4c0080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_4c0084:
    // 0x4c0084: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x4c0084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_4c0088:
    // 0x4c0088: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x4c0088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_4c008c:
    // 0x4c008c: 0x3e00008  jr          $ra
label_4c0090:
    if (ctx->pc == 0x4C0090u) {
        ctx->pc = 0x4C0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C008Cu;
        // 0x4c0090: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4C0094u;
        goto label_4c0094;
    }
    ctx->pc = 0x4C008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C0090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C008Cu;
        // 0x4c0090: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C008Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C0094u;
label_4c0094:
    // 0x4c0094: 0x0  nop
    ctx->pc = 0x4c0094u;
    // NOP
    ctx->pc = 0x4c0098u;
}
