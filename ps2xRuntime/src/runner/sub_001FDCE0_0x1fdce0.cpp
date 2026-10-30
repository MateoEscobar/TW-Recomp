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

// Function: sub_001FDCE0
// Address: 0x1fdce0 - 0x1fdf10
void sub_001FDCE0_0x1fdce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDCE0_0x1fdce0");
#endif

    ctx->pc = 0x1fdce0u;

    // 0x1fdce0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fdce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1fdce4: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1fdce4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1fdce8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fdce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fdcec: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1fdcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fdcf0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1FDCF0u;
    {
        const bool branch_taken_0x1fdcf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCF0u;
        // 0x1fdcf4: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcf0) {
            ctx->pc = 0x1FDDB8u;
            goto label_1fddb8;
        }
    }
    ctx->pc = 0x1FDCF8u;
    // 0x1fdcf8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FDCF8u;
    {
        const bool branch_taken_0x1fdcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCF8u;
        // 0x1fdcfc: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcf8) {
            ctx->pc = 0x1FDD5Cu;
            goto label_1fdd5c;
        }
    }
    ctx->pc = 0x1FDD00u;
    // 0x1fdd00: 0x3c013fc6  lui         $at, 0x3FC6
    ctx->pc = 0x1fdd00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16326 << 16));
    // 0x1fdd04: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1fdd04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1fdd08: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1fdd08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1fdd0c: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x1fdd0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x1fdd10: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1fdd10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1fdd14: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fdd14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fdd18: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1fdd18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1fdd1c: 0x3c013e0f  lui         $at, 0x3E0F
    ctx->pc = 0x1fdd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15887 << 16));
    // 0x1fdd20: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1fdd20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1fdd24: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fdd24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fdd28: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1fdd28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1fdd2c: 0x3c013f4e  lui         $at, 0x3F4E
    ctx->pc = 0x1fdd2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16206 << 16));
    // 0x1fdd30: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1fdd30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1fdd34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fdd34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fdd38: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1fdd38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1fdd3c: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1fdd3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x1fdd40: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1fdd40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1fdd44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fdd44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdd48: 0x3c013f5c  lui         $at, 0x3F5C
    ctx->pc = 0x1fdd48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16220 << 16));
    // 0x1fdd4c: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1fdd4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x1fdd50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fdd50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fdd54: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1FDD54u;
    {
        const bool branch_taken_0x1fdd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD54u;
        // 0x1fdd58: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd54) {
            ctx->pc = 0x1FDEF0u;
            goto label_1fdef0;
        }
    }
    ctx->pc = 0x1FDD5Cu;
label_1fdd5c:
    // 0x1fdd5c: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1fdd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1fdd60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fdd60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1fdd64: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1fdd64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1fdd68: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1fdd68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1fdd6c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fdd6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1fdd70: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fdd70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fdd74: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1fdd74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1fdd78: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x1fdd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x1fdd7c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1fdd7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1fdd80: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fdd80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fdd84: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1fdd84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1fdd88: 0x3c013f45  lui         $at, 0x3F45
    ctx->pc = 0x1fdd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16197 << 16));
    // 0x1fdd8c: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x1fdd8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x1fdd90: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fdd90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fdd94: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1fdd94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1fdd98: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x1fdd98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
    // 0x1fdd9c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1fdd9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1fdda0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fdda0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdda4: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x1fdda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
    // 0x1fdda8: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1fdda8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1fddac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fddacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fddb0: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1FDDB0u;
    {
        const bool branch_taken_0x1fddb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDB0u;
        // 0x1fddb4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddb0) {
            ctx->pc = 0x1FDEF0u;
            goto label_1fdef0;
        }
    }
    ctx->pc = 0x1FDDB8u;
label_1fddb8:
    // 0x1fddb8: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1fddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1fddbc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FDDBCu;
    {
        const bool branch_taken_0x1fddbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDDBCu;
        // 0x1fddc0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fddbc) {
            ctx->pc = 0x1FDE34u;
            goto label_1fde34;
        }
    }
    ctx->pc = 0x1FDDC4u;
    // 0x1fddc4: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x1fddc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
    // 0x1fddc8: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1fddc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1fddcc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fddccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fddd0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1fddd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1fddd4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1fddd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1fddd8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1fddd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1fdddc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fdddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fdde0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1fdde0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1fdde4: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1fdde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
    // 0x1fdde8: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1fdde8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1fddec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fddecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fddf0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1fddf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1fddf4: 0x3c013f4e  lui         $at, 0x3F4E
    ctx->pc = 0x1fddf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16206 << 16));
    // 0x1fddf8: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1fddf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1fddfc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fddfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fde00: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1fde00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1fde04: 0x3c013f68  lui         $at, 0x3F68
    ctx->pc = 0x1fde04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16232 << 16));
    // 0x1fde08: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1fde08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1fde0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fde0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fde10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fde10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1fde14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fde14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1fde18: 0xe4c4f4fc  swc1        $f4, -0xB04($a2)
    ctx->pc = 0x1fde18u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F4FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F4FCu, _value); } while (0); }
    // 0x1fde1c: 0xe4a3f500  swc1        $f3, -0xB00($a1)
    ctx->pc = 0x1fde1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F500u, _value); } while (0); }
    // 0x1fde20: 0xe482f504  swc1        $f2, -0xAFC($a0)
    ctx->pc = 0x1fde20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F504u, _value); } while (0); }
    // 0x1fde24: 0xe441f508  swc1        $f1, -0xAF8($v0)
    ctx->pc = 0x1fde24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F508u, _value); } while (0); }
    // 0x1fde28: 0xe460f50c  swc1        $f0, -0xAF4($v1)
    ctx->pc = 0x1fde28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F50Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F50Cu, _value); } while (0); }
    // 0x1fde2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE2Cu;
        // 0x1fde30: 0xe4e4f4f8  swc1        $f4, -0xB08($a3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964472), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDE34u;
label_1fde34:
    // 0x1fde34: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FDE34u;
    {
        const bool branch_taken_0x1fde34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE34u;
        // 0x1fde38: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde34) {
            ctx->pc = 0x1FDE98u;
            goto label_1fde98;
        }
    }
    ctx->pc = 0x1FDE3Cu;
    // 0x1fde3c: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x1fde3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
    // 0x1fde40: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1fde40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1fde44: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1fde44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1fde48: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1fde48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1fde4c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1fde4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1fde50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fde50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fde54: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1fde54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1fde58: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1fde58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1fde5c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1fde5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1fde60: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fde60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fde64: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1fde64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1fde68: 0x3c013f61  lui         $at, 0x3F61
    ctx->pc = 0x1fde68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16225 << 16));
    // 0x1fde6c: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x1fde6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x1fde70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fde70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fde74: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1fde74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1fde78: 0x3c013f54  lui         $at, 0x3F54
    ctx->pc = 0x1fde78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16212 << 16));
    // 0x1fde7c: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1fde7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1fde80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fde80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fde84: 0x3c013f75  lui         $at, 0x3F75
    ctx->pc = 0x1fde84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16245 << 16));
    // 0x1fde88: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1fde88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1fde8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fde8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fde90: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FDE90u;
    {
        const bool branch_taken_0x1fde90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDE90u;
        // 0x1fde94: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fde90) {
            ctx->pc = 0x1FDEF0u;
            goto label_1fdef0;
        }
    }
    ctx->pc = 0x1FDE98u;
label_1fde98:
    // 0x1fde98: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1fde98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1fde9c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1fde9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1fdea0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1fdea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1fdea4: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1fdea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1fdea8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1fdea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1fdeac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1fdeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1fdeb0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1fdeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1fdeb4: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x1fdeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x1fdeb8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1fdeb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1fdebc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1fdebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1fdec0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1fdec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1fdec4: 0x3c013f57  lui         $at, 0x3F57
    ctx->pc = 0x1fdec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16215 << 16));
    // 0x1fdec8: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1fdec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1fdecc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fdeccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fded0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1fded0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1fded4: 0x3c013f4e  lui         $at, 0x3F4E
    ctx->pc = 0x1fded4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16206 << 16));
    // 0x1fded8: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1fded8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1fdedc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fdedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fdee0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1fdee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1fdee4: 0x3c013f68  lui         $at, 0x3F68
    ctx->pc = 0x1fdee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16232 << 16));
    // 0x1fdee8: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1fdee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1fdeec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fdeecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1fdef0:
    // 0x1fdef0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1fdef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1fdef4: 0xe4e5f4f8  swc1        $f5, -0xB08($a3)
    ctx->pc = 0x1fdef4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964472), bits); }
    // 0x1fdef8: 0xe4c4f4fc  swc1        $f4, -0xB04($a2)
    ctx->pc = 0x1fdef8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964476), bits); }
    // 0x1fdefc: 0xe4a3f500  swc1        $f3, -0xB00($a1)
    ctx->pc = 0x1fdefcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964480), bits); }
    // 0x1fdf00: 0xe482f504  swc1        $f2, -0xAFC($a0)
    ctx->pc = 0x1fdf00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964484), bits); }
    // 0x1fdf04: 0xe461f508  swc1        $f1, -0xAF8($v1)
    ctx->pc = 0x1fdf04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964488), bits); }
    // 0x1fdf08: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDF08u;
        // 0x1fdf0c: 0xe440f50c  swc1        $f0, -0xAF4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964492), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDF10u;
}
