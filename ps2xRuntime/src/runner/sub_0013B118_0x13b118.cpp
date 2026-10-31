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

// Function: sub_0013B118
// Address: 0x13b118 - 0x13b290
void sub_0013B118_0x13b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B118_0x13b118");
#endif

    switch (ctx->pc) {
        case 0x13b12cu: goto label_13b12c;
        case 0x13b238u: goto label_13b238;
        case 0x13b240u: goto label_13b240;
        case 0x13b260u: goto label_13b260;
        default: break;
    }

    ctx->pc = 0x13b118u;

    // 0x13b118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b11c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13b11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13b120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b124: 0xc04821a  jal         func_120868
    ctx->pc = 0x13B124u;
    SET_GPR_U32(ctx, 31, 0x13B12Cu);
    ctx->pc = 0x13B128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B124u;
    // 0x13b128: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x13B124u, 0x13B12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B12Cu;
label_13b12c:
    // 0x13b12c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x13b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x13b130: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13b130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x13b134: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13b134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b138: 0xc4409280  lwc1        $f0, -0x6D80($v0)
    ctx->pc = 0x13b138u;
    { uint32_t bits = FAST_READ32(0x549280u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b13c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x13b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x13b140: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x13b140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x13b144: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13b144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b148: 0x24636dd0  addiu       $v1, $v1, 0x6DD0
    ctx->pc = 0x13b148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28112));
    // 0x13b14c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x13b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x13b150: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x13b150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x13b154: 0xe6010374  swc1        $f1, 0x374($s0)
    ctx->pc = 0x13b154u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 884), bits); }
    // 0x13b158: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x13b158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13b15c: 0xe6000394  swc1        $f0, 0x394($s0)
    ctx->pc = 0x13b15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 916), bits); }
    // 0x13b160: 0x24a59278  addiu       $a1, $a1, -0x6D88
    ctx->pc = 0x13b160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939256));
    // 0x13b164: 0xe6020358  swc1        $f2, 0x358($s0)
    ctx->pc = 0x13b164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 856), bits); }
    // 0x13b168: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x13b168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13b16c: 0xe602035c  swc1        $f2, 0x35C($s0)
    ctx->pc = 0x13b16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 860), bits); }
    // 0x13b170: 0xe6000368  swc1        $f0, 0x368($s0)
    ctx->pc = 0x13b170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 872), bits); }
    // 0x13b174: 0xe600036c  swc1        $f0, 0x36C($s0)
    ctx->pc = 0x13b174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 876), bits); }
    // 0x13b178: 0xe6020370  swc1        $f2, 0x370($s0)
    ctx->pc = 0x13b178u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 880), bits); }
    // 0x13b17c: 0xe602037c  swc1        $f2, 0x37C($s0)
    ctx->pc = 0x13b17cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
    // 0x13b180: 0xe6000388  swc1        $f0, 0x388($s0)
    ctx->pc = 0x13b180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x13b184: 0xae000348  sw          $zero, 0x348($s0)
    ctx->pc = 0x13b184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
    // 0x13b188: 0xae00034c  sw          $zero, 0x34C($s0)
    ctx->pc = 0x13b188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 0));
    // 0x13b18c: 0xa6000350  sh          $zero, 0x350($s0)
    ctx->pc = 0x13b18cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 848), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b190: 0xa6000352  sh          $zero, 0x352($s0)
    ctx->pc = 0x13b190u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 850), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b194: 0xae000354  sw          $zero, 0x354($s0)
    ctx->pc = 0x13b194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 0));
    // 0x13b198: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x13b198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
    // 0x13b19c: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x13b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
    // 0x13b1a0: 0xae000378  sw          $zero, 0x378($s0)
    ctx->pc = 0x13b1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 888), GPR_U32(ctx, 0));
    // 0x13b1a4: 0xae000380  sw          $zero, 0x380($s0)
    ctx->pc = 0x13b1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
    // 0x13b1a8: 0xae000384  sw          $zero, 0x384($s0)
    ctx->pc = 0x13b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 900), GPR_U32(ctx, 0));
    // 0x13b1ac: 0xae000398  sw          $zero, 0x398($s0)
    ctx->pc = 0x13b1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 920), GPR_U32(ctx, 0));
    // 0x13b1b0: 0xae00039c  sw          $zero, 0x39C($s0)
    ctx->pc = 0x13b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 924), GPR_U32(ctx, 0));
    // 0x13b1b4: 0xae0003a0  sw          $zero, 0x3A0($s0)
    ctx->pc = 0x13b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 928), GPR_U32(ctx, 0));
    // 0x13b1b8: 0xae0003a4  sw          $zero, 0x3A4($s0)
    ctx->pc = 0x13b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 932), GPR_U32(ctx, 0));
    // 0x13b1bc: 0xae0003a8  sw          $zero, 0x3A8($s0)
    ctx->pc = 0x13b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 936), GPR_U32(ctx, 0));
    // 0x13b1c0: 0xae0003ac  sw          $zero, 0x3AC($s0)
    ctx->pc = 0x13b1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 940), GPR_U32(ctx, 0));
    // 0x13b1c4: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x13b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
    // 0x13b1c8: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x13b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
    // 0x13b1cc: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x13b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x13b1d0: 0xae0003bc  sw          $zero, 0x3BC($s0)
    ctx->pc = 0x13b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 0));
    // 0x13b1d4: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x13b1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
    // 0x13b1d8: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x13b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x13b1dc: 0xae0003c8  sw          $zero, 0x3C8($s0)
    ctx->pc = 0x13b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 968), GPR_U32(ctx, 0));
    // 0x13b1e0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x13b1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x13b1e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13b1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b1e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13b1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13b1ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13b1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b1f0: 0xae0003cc  sw          $zero, 0x3CC($s0)
    ctx->pc = 0x13b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 972), GPR_U32(ctx, 0));
    // 0x13b1f4: 0xae0003dc  sw          $zero, 0x3DC($s0)
    ctx->pc = 0x13b1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 988), GPR_U32(ctx, 0));
    // 0x13b1f8: 0xae0003e0  sw          $zero, 0x3E0($s0)
    ctx->pc = 0x13b1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 992), GPR_U32(ctx, 0));
    // 0x13b1fc: 0xa20003e4  sb          $zero, 0x3E4($s0)
    ctx->pc = 0x13b1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 996), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b200: 0xa20003e5  sb          $zero, 0x3E5($s0)
    ctx->pc = 0x13b200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 997), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b204: 0xa20003e6  sb          $zero, 0x3E6($s0)
    ctx->pc = 0x13b204u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 998), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b208: 0xa20003e7  sb          $zero, 0x3E7($s0)
    ctx->pc = 0x13b208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 999), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b20c: 0xa20003e8  sb          $zero, 0x3E8($s0)
    ctx->pc = 0x13b20cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1000), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b210: 0xa20003e9  sb          $zero, 0x3E9($s0)
    ctx->pc = 0x13b210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1001), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b214: 0xa20003ea  sb          $zero, 0x3EA($s0)
    ctx->pc = 0x13b214u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1002), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b218: 0xa20003eb  sb          $zero, 0x3EB($s0)
    ctx->pc = 0x13b218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1003), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b21c: 0xa20003ec  sb          $zero, 0x3EC($s0)
    ctx->pc = 0x13b21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1004), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b220: 0xa20003ed  sb          $zero, 0x3ED($s0)
    ctx->pc = 0x13b220u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1005), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b224: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x13b224u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x13b228: 0xe60003d0  swc1        $f0, 0x3D0($s0)
    ctx->pc = 0x13b228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 976), bits); }
    // 0x13b22c: 0xe60103d4  swc1        $f1, 0x3D4($s0)
    ctx->pc = 0x13b22cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 980), bits); }
    // 0x13b230: 0xc10c4de  jal         func_431378
    ctx->pc = 0x13B230u;
    SET_GPR_U32(ctx, 31, 0x13B238u);
    ctx->pc = 0x13B234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B230u;
    // 0x13b234: 0xe60203d8  swc1        $f2, 0x3D8($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 984), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x13B230u, 0x13B238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B238u;
label_13b238:
    // 0x13b238: 0xc04eddc  jal         func_13B770
    ctx->pc = 0x13B238u;
    SET_GPR_U32(ctx, 31, 0x13B240u);
    ctx->pc = 0x13B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B238u;
    // 0x13b23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B770u, 0x13B238u, 0x13B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B240u;
label_13b240:
    // 0x13b240: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x13b240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x13b244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13b244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b248: 0x248416c0  addiu       $a0, $a0, 0x16C0
    ctx->pc = 0x13b248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5824));
    // 0x13b24c: 0x26050340  addiu       $a1, $s0, 0x340
    ctx->pc = 0x13b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x13b250: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x13b250u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x13b254: 0x7e020320  sq          $v0, 0x320($s0)
    ctx->pc = 0x13b254u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 800), GPR_VEC(ctx, 2));
    // 0x13b258: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x13b258u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x13b25c: 0x7e030330  sq          $v1, 0x330($s0)
    ctx->pc = 0x13b25cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 816), GPR_VEC(ctx, 3));
label_13b260:
    // 0x13b260: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x13b260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x13b264: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x13b264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b268: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x13b268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13b26c: 0x0  nop
    ctx->pc = 0x13b26cu;
    // NOP
    // 0x13b270: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13B270u;
    {
        const bool branch_taken_0x13b270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B270u;
        // 0x13b274: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b270) {
            ctx->pc = 0x13B260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13b260;
        }
    }
    ctx->pc = 0x13B278u;
    // 0x13b278: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b27c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13b280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b284: 0x3e00008  jr          $ra
    ctx->pc = 0x13B284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B284u;
        // 0x13b288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B28Cu;
    // 0x13b28c: 0x0  nop
    ctx->pc = 0x13b28cu;
    // NOP
    ctx->pc = 0x13b290u;
}
