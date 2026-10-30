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

// Function: sub_001E81C0
// Address: 0x1e81c0 - 0x1e8368
void sub_001E81C0_0x1e81c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E81C0_0x1e81c0");
#endif

    switch (ctx->pc) {
        case 0x1e8294u: goto label_1e8294;
        default: break;
    }

    ctx->pc = 0x1e81c0u;

    // 0x1e81c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e81c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e81c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e81c8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e81c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1e81cc: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1e81ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1e81d0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1e81d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1e81d4: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1e81d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1e81d8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1e81d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1e81dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e81dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e81e0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1e81e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1e81e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e81e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e81e8: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x1e81e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x1e81ec: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1e81ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x1e81f0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e81f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1e81f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e81f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e81f8: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x1e81f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x1e81fc: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x1e81fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
    // 0x1e8200: 0x3421ae15  ori         $at, $at, 0xAE15
    ctx->pc = 0x1e8200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44565);
    // 0x1e8204: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8208: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x1e8208u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x1e820c: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x1e820cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x1e8210: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1e8210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1e8214: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8218: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1e8218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1e821c: 0x3c013da7  lui         $at, 0x3DA7
    ctx->pc = 0x1e821cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15783 << 16));
    // 0x1e8220: 0x3421ef9e  ori         $at, $at, 0xEF9E
    ctx->pc = 0x1e8220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61342);
    // 0x1e8224: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8228: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1e8228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1e822c: 0xe484f2fc  swc1        $f4, -0xD04($a0)
    ctx->pc = 0x1e822cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F2FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F2FCu, _value); } while (0); }
    // 0x1e8230: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1e8230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1e8234: 0xe4e3f300  swc1        $f3, -0xD00($a3)
    ctx->pc = 0x1e8234u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F300u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F300u, _value); } while (0); }
    // 0x1e8238: 0xe502f304  swc1        $f2, -0xCFC($t0)
    ctx->pc = 0x1e8238u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F304u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F304u, _value); } while (0); }
    // 0x1e823c: 0xe520f308  swc1        $f0, -0xCF8($t1)
    ctx->pc = 0x1e823cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F308u, _value); } while (0); }
    // 0x1e8240: 0xe4a5f310  swc1        $f5, -0xCF0($a1)
    ctx->pc = 0x1e8240u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F310u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F310u, _value); } while (0); }
    // 0x1e8244: 0xe4c1f314  swc1        $f1, -0xCEC($a2)
    ctx->pc = 0x1e8244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F314u, _value); } while (0); }
    // 0x1e8248: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1E8248u;
    {
        const bool branch_taken_0x1e8248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8248u;
        // 0x1e824c: 0xe545f30c  swc1        $f5, -0xCF4($t2) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294963980), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8248) {
            ctx->pc = 0x1E8314u;
            goto label_1e8314;
        }
    }
    ctx->pc = 0x1E8250u;
    // 0x1e8250: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e8250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1e8254: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E8254u;
    {
        const bool branch_taken_0x1e8254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8254u;
        // 0x1e8258: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8254) {
            ctx->pc = 0x1E82D0u;
            goto label_1e82d0;
        }
    }
    ctx->pc = 0x1E825Cu;
    // 0x1e825c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1e825cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1e8260: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e8260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e8264: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e8264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1e8268: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1e8268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1e826c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e826cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1e8270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8274: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x1e8274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x1e8278: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e8278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e827c: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x1e827cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x1e8280: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e8280u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1e8284: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8288: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1e8288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x1e828c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1e828cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1e8290: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e8290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e8294:
    // 0x1e8294: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1e8294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1e8298: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e8298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e829c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e829cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e82a0: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1e82a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
    // 0x1e82a4: 0x34210a3e  ori         $at, $at, 0xA3E
    ctx->pc = 0x1e82a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2622);
    // 0x1e82a8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1e82a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1e82ac: 0xe480f2fc  swc1        $f0, -0xD04($a0)
    ctx->pc = 0x1e82acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294963964), bits); }
    // 0x1e82b0: 0xe4e1f300  swc1        $f1, -0xD00($a3)
    ctx->pc = 0x1e82b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294963968), bits); }
    // 0x1e82b4: 0xe502f304  swc1        $f2, -0xCFC($t0)
    ctx->pc = 0x1e82b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294963972), bits); }
    // 0x1e82b8: 0xe523f308  swc1        $f3, -0xCF8($t1)
    ctx->pc = 0x1e82b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294963976), bits); }
    // 0x1e82bc: 0xe4a6f310  swc1        $f6, -0xCF0($a1)
    ctx->pc = 0x1e82bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294963984), bits); }
    // 0x1e82c0: 0xe4c4f314  swc1        $f4, -0xCEC($a2)
    ctx->pc = 0x1e82c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294963988), bits); }
    // 0x1e82c4: 0xe445f2dc  swc1        $f5, -0xD24($v0)
    ctx->pc = 0x1e82c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294963932), bits); }
    // 0x1e82c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E82C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E82CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E82C8u;
        // 0x1e82cc: 0xe546f30c  swc1        $f6, -0xCF4($t2) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294963980), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E82C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E82D0u;
label_1e82d0:
    // 0x1e82d0: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1e82d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1e82d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e82d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e82d8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1e82d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1e82dc: 0x3c013fbe  lui         $at, 0x3FBE
    ctx->pc = 0x1e82dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16318 << 16));
    // 0x1e82e0: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1e82e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1e82e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e82e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e82e8: 0x3c013fd0  lui         $at, 0x3FD0
    ctx->pc = 0x1e82e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16336 << 16));
    // 0x1e82ec: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x1e82ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x1e82f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e82f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e82f4: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x1e82f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
    // 0x1e82f8: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x1e82f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x1e82fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e82fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e8300: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x1e8300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x1e8304: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1e8304u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1e8308: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e8308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e830c: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x1E830Cu;
    {
        const bool branch_taken_0x1e830c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e830c) {
            ctx->pc = 0x1E8294u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8294;
        }
    }
    ctx->pc = 0x1E8314u;
label_1e8314:
    // 0x1e8314: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1e8314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1e8318: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E8318u;
    {
        const bool branch_taken_0x1e8318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8318u;
        // 0x1e831c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8318) {
            ctx->pc = 0x1E835Cu;
            goto label_1e835c;
        }
    }
    ctx->pc = 0x1E8320u;
    // 0x1e8320: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E8320u;
    {
        const bool branch_taken_0x1e8320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8320) {
            ctx->pc = 0x1E835Cu;
            goto label_1e835c;
        }
    }
    ctx->pc = 0x1E8328u;
    // 0x1e8328: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1e8328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1e832c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e832cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1e8330: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e8330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e8334: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x1e8334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x1e8338: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1e8338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1e833c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e833cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e8340: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e8340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e8344: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e8344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e8348: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e8348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e834c: 0xe480f2fc  swc1        $f0, -0xD04($a0)
    ctx->pc = 0x1e834cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294963964), bits); }
    // 0x1e8350: 0xe4e1f300  swc1        $f1, -0xD00($a3)
    ctx->pc = 0x1e8350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294963968), bits); }
    // 0x1e8354: 0xe502f304  swc1        $f2, -0xCFC($t0)
    ctx->pc = 0x1e8354u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294963972), bits); }
    // 0x1e8358: 0xad20f308  sw          $zero, -0xCF8($t1)
    ctx->pc = 0x1e8358u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294963976), GPR_U32(ctx, 0));
label_1e835c:
    // 0x1e835c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E835Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E835Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8364u;
    // 0x1e8364: 0x0  nop
    ctx->pc = 0x1e8364u;
    // NOP
    ctx->pc = 0x1e8368u;
}
