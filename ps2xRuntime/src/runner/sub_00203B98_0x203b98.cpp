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

// Function: sub_00203B98
// Address: 0x203b98 - 0x203f48
void sub_00203B98_0x203b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203B98_0x203b98");
#endif

    switch (ctx->pc) {
        case 0x203d0cu: goto label_203d0c;
        default: break;
    }

    ctx->pc = 0x203b98u;

    // 0x203b98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x203b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x203b9c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x203b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x203ba0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x203ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203ba4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x203ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x203ba8: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x203BA8u;
    {
        const bool branch_taken_0x203ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BA8u;
        // 0x203bac: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ba8) {
            ctx->pc = 0x203D3Cu;
            goto label_203d3c;
        }
    }
    ctx->pc = 0x203BB0u;
    // 0x203bb0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x203BB0u;
    {
        const bool branch_taken_0x203bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203BB0u;
        // 0x203bb4: 0x3c0b0051  lui         $t3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203bb0) {
            ctx->pc = 0x203C74u;
            goto label_203c74;
        }
    }
    ctx->pc = 0x203BB8u;
    // 0x203bb8: 0x3c013f1c  lui         $at, 0x3F1C
    ctx->pc = 0x203bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16156 << 16));
    // 0x203bbc: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x203bbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x203bc0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x203bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x203bc4: 0x3c01be0f  lui         $at, 0xBE0F
    ctx->pc = 0x203bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48655 << 16));
    // 0x203bc8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x203bc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x203bcc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x203bccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x203bd0: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x203bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x203bd4: 0x3c013f4a  lui         $at, 0x3F4A
    ctx->pc = 0x203bd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16202 << 16));
    // 0x203bd8: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x203bd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x203bdc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x203bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x203be0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x203be0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x203be4: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x203be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
    // 0x203be8: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x203be8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x203bec: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x203becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x203bf0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x203bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x203bf4: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x203bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x203bf8: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x203bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x203bfc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x203bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x203c00: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x203c00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x203c04: 0x3c013f27  lui         $at, 0x3F27
    ctx->pc = 0x203c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16167 << 16));
    // 0x203c08: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x203c08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x203c0c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x203c0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x203c10: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x203c10u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x203c14: 0x3c013f2f  lui         $at, 0x3F2F
    ctx->pc = 0x203c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16175 << 16));
    // 0x203c18: 0x3421df3b  ori         $at, $at, 0xDF3B
    ctx->pc = 0x203c18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57147);
    // 0x203c1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x203c1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x203c20: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x203c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x203c24: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x203c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x203c28: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x203c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x203c2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203c30: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x203c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x203c34: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x203c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
    // 0x203c38: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x203c38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x203c3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x203c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203c40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x203c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x203c44: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x203c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x203c48: 0xe567f5c4  swc1        $f7, -0xA3C($t3)
    ctx->pc = 0x203c48u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964676), bits); }
    // 0x203c4c: 0xe526f5e8  swc1        $f6, -0xA18($t1)
    ctx->pc = 0x203c4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5E8u, _value); } while (0); }
    // 0x203c50: 0xe505f5c8  swc1        $f5, -0xA38($t0)
    ctx->pc = 0x203c50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5C8u, _value); } while (0); }
    // 0x203c54: 0xe4e4f5cc  swc1        $f4, -0xA34($a3)
    ctx->pc = 0x203c54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5CCu, _value); } while (0); }
    // 0x203c58: 0xe4c3f5d0  swc1        $f3, -0xA30($a2)
    ctx->pc = 0x203c58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5D0u, _value); } while (0); }
    // 0x203c5c: 0xe4a2f5d8  swc1        $f2, -0xA28($a1)
    ctx->pc = 0x203c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5D8u, _value); } while (0); }
    // 0x203c60: 0xe480f5dc  swc1        $f0, -0xA24($a0)
    ctx->pc = 0x203c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5DCu, _value); } while (0); }
    // 0x203c64: 0xe448f5e0  swc1        $f8, -0xA20($v0)
    ctx->pc = 0x203c64u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5E0u, _value); } while (0); }
    // 0x203c68: 0xe461f5e4  swc1        $f1, -0xA1C($v1)
    ctx->pc = 0x203c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5E4u, _value); } while (0); }
    // 0x203c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x203C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203C6Cu;
        // 0x203c70: 0xe548f5d4  swc1        $f8, -0xA2C($t2) (Delay Slot)
        { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964692), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203C74u;
label_203c74:
    // 0x203c74: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x203c78: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x203c78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x203c7c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x203c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x203c80: 0x3c013f47  lui         $at, 0x3F47
    ctx->pc = 0x203c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16199 << 16));
    // 0x203c84: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x203c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x203c88: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x203c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x203c8c: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x203c8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x203c90: 0x3c013f3b  lui         $at, 0x3F3B
    ctx->pc = 0x203c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16187 << 16));
    // 0x203c94: 0x3421e76d  ori         $at, $at, 0xE76D
    ctx->pc = 0x203c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59245);
    // 0x203c98: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x203c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x203c9c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x203c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x203ca0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x203ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x203ca4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x203ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x203ca8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x203ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x203cac: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x203cacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x203cb0: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x203cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x203cb4: 0x3421c083  ori         $at, $at, 0xC083
    ctx->pc = 0x203cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49283);
    // 0x203cb8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x203cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x203cbc: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x203cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x203cc0: 0x3c013f21  lui         $at, 0x3F21
    ctx->pc = 0x203cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16161 << 16));
    // 0x203cc4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x203cc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x203cc8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x203cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x203ccc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x203cccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x203cd0: 0x3c013f2f  lui         $at, 0x3F2F
    ctx->pc = 0x203cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16175 << 16));
    // 0x203cd4: 0x3421df3b  ori         $at, $at, 0xDF3B
    ctx->pc = 0x203cd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57147);
    // 0x203cd8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x203cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x203cdc: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x203cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x203ce0: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x203ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x203ce4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x203ce4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x203ce8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x203ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x203cec: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x203cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x203cf0: 0x3c013f1e  lui         $at, 0x3F1E
    ctx->pc = 0x203cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16158 << 16));
    // 0x203cf4: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x203cf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x203cf8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x203cf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203cfc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x203cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x203d00: 0x3c013f15  lui         $at, 0x3F15
    ctx->pc = 0x203d00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16149 << 16));
    // 0x203d04: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x203d04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x203d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_203d0c:
    // 0x203d0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x203d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x203d10: 0xe569f5c4  swc1        $f9, -0xA3C($t3)
    ctx->pc = 0x203d10u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294964676), bits); }
    // 0x203d14: 0xe548f5e8  swc1        $f8, -0xA18($t2)
    ctx->pc = 0x203d14u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294964712), bits); }
    // 0x203d18: 0xe527f5c8  swc1        $f7, -0xA38($t1)
    ctx->pc = 0x203d18u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294964680), bits); }
    // 0x203d1c: 0xe506f5cc  swc1        $f6, -0xA34($t0)
    ctx->pc = 0x203d1cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964684), bits); }
    // 0x203d20: 0xe4e5f5d0  swc1        $f5, -0xA30($a3)
    ctx->pc = 0x203d20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294964688), bits); }
    // 0x203d24: 0xe4c4f5d4  swc1        $f4, -0xA2C($a2)
    ctx->pc = 0x203d24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964692), bits); }
    // 0x203d28: 0xe4a3f5d8  swc1        $f3, -0xA28($a1)
    ctx->pc = 0x203d28u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294964696), bits); }
    // 0x203d2c: 0xe482f5dc  swc1        $f2, -0xA24($a0)
    ctx->pc = 0x203d2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294964700), bits); }
    // 0x203d30: 0xe461f5e0  swc1        $f1, -0xA20($v1)
    ctx->pc = 0x203d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294964704), bits); }
    // 0x203d34: 0x3e00008  jr          $ra
    ctx->pc = 0x203D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D34u;
        // 0x203d38: 0xe440f5e4  swc1        $f0, -0xA1C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964708), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203D3Cu;
label_203d3c:
    // 0x203d3c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x203d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x203d40: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x203D40u;
    {
        const bool branch_taken_0x203d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203D40u;
        // 0x203d44: 0x3c0b0051  lui         $t3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d40) {
            ctx->pc = 0x203DE4u;
            goto label_203de4;
        }
    }
    ctx->pc = 0x203D48u;
    // 0x203d48: 0x3c01bd4c  lui         $at, 0xBD4C
    ctx->pc = 0x203d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48460 << 16));
    // 0x203d4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x203d4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x203d50: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x203d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x203d54: 0x3c013f62  lui         $at, 0x3F62
    ctx->pc = 0x203d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16226 << 16));
    // 0x203d58: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x203d58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x203d5c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x203d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x203d60: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x203d60u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x203d64: 0x3c013f50  lui         $at, 0x3F50
    ctx->pc = 0x203d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16208 << 16));
    // 0x203d68: 0x3421a3d7  ori         $at, $at, 0xA3D7
    ctx->pc = 0x203d68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41943);
    // 0x203d6c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x203d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x203d70: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x203d70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x203d74: 0x3c013f43  lui         $at, 0x3F43
    ctx->pc = 0x203d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16195 << 16));
    // 0x203d78: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x203d78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x203d7c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x203d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x203d80: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x203d80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x203d84: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x203d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x203d88: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x203d88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x203d8c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x203d8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x203d90: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x203d90u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x203d94: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x203d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x203d98: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x203d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x203d9c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x203d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x203da0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x203da0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x203da4: 0x3c013f3e  lui         $at, 0x3F3E
    ctx->pc = 0x203da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16190 << 16));
    // 0x203da8: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x203da8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x203dac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x203dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x203db0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x203db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x203db4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x203db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x203db8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x203db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x203dbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x203dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x203dc0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x203dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x203dc4: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x203dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
    // 0x203dc8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x203dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x203dcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x203dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203dd0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x203dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x203dd4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x203dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x203dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203ddc: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x203DDCu;
    {
        const bool branch_taken_0x203ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DDCu;
        // 0x203de0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ddc) {
            ctx->pc = 0x203D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203d0c;
        }
    }
    ctx->pc = 0x203DE4u;
label_203de4:
    // 0x203de4: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x203de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x203de8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x203DE8u;
    {
        const bool branch_taken_0x203de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203DE8u;
        // 0x203dec: 0x3c0a0051  lui         $t2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203de8) {
            ctx->pc = 0x203E84u;
            goto label_203e84;
        }
    }
    ctx->pc = 0x203DF0u;
    // 0x203df0: 0x3c01bde1  lui         $at, 0xBDE1
    ctx->pc = 0x203df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48609 << 16));
    // 0x203df4: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x203df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x203df8: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x203df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x203dfc: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x203dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x203e00: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x203e00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x203e04: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x203e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x203e08: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x203e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x203e0c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x203e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x203e10: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x203e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x203e14: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x203e14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x203e18: 0x3c013f3d  lui         $at, 0x3F3D
    ctx->pc = 0x203e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16189 << 16));
    // 0x203e1c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x203e1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x203e20: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x203e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x203e24: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x203e24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x203e28: 0x3c013f2e  lui         $at, 0x3F2E
    ctx->pc = 0x203e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16174 << 16));
    // 0x203e2c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x203e2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x203e30: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x203e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x203e34: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x203e34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x203e38: 0x3c013f20  lui         $at, 0x3F20
    ctx->pc = 0x203e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16160 << 16));
    // 0x203e3c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x203e3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x203e40: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x203e44: 0x3c013f3a  lui         $at, 0x3F3A
    ctx->pc = 0x203e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16186 << 16));
    // 0x203e48: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x203e48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x203e4c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x203e4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x203e50: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x203e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x203e54: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x203e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x203e58: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x203e58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x203e5c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x203e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x203e60: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x203e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x203e64: 0x3c013f1a  lui         $at, 0x3F1A
    ctx->pc = 0x203e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16154 << 16));
    // 0x203e68: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x203e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
    // 0x203e6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x203e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203e70: 0x3c013f0b  lui         $at, 0x3F0B
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16139 << 16));
    // 0x203e74: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x203e74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x203e78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203e7c: 0x1000ffa3  b           . + 4 + (-0x5D << 2)
    ctx->pc = 0x203E7Cu;
    {
        const bool branch_taken_0x203e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203E7Cu;
        // 0x203e80: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e7c) {
            ctx->pc = 0x203D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_203d0c;
        }
    }
    ctx->pc = 0x203E84u;
label_203e84:
    // 0x203e84: 0x3c013f4f  lui         $at, 0x3F4F
    ctx->pc = 0x203e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16207 << 16));
    // 0x203e88: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x203e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x203e8c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x203e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x203e90: 0x3c0b0051  lui         $t3, 0x51
    ctx->pc = 0x203e90u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)81 << 16));
    // 0x203e94: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x203e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x203e98: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x203e98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x203e9c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x203e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x203ea0: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x203ea0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x203ea4: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x203ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
    // 0x203ea8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x203ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x203eac: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x203eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x203eb0: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x203eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x203eb4: 0x3c013f28  lui         $at, 0x3F28
    ctx->pc = 0x203eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16168 << 16));
    // 0x203eb8: 0x34213127  ori         $at, $at, 0x3127
    ctx->pc = 0x203eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12583);
    // 0x203ebc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x203ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x203ec0: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x203ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x203ec4: 0x3c013f3e  lui         $at, 0x3F3E
    ctx->pc = 0x203ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16190 << 16));
    // 0x203ec8: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x203ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x203ecc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x203eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x203ed0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x203ed0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x203ed4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x203ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x203ed8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x203ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x203edc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x203edcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x203ee0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x203ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x203ee4: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x203ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x203ee8: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x203ee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x203eec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x203eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x203ef0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x203ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x203ef4: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x203ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x203ef8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x203ef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x203efc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x203efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x203f00: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x203f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x203f04: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x203f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x203f08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x203f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x203f0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x203f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x203f10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x203f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x203f14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x203f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x203f18: 0xe548f5c8  swc1        $f8, -0xA38($t2)
    ctx->pc = 0x203f18u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5C8u, _value); } while (0); }
    // 0x203f1c: 0xe527f5cc  swc1        $f7, -0xA34($t1)
    ctx->pc = 0x203f1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5CCu, _value); } while (0); }
    // 0x203f20: 0xe506f5d0  swc1        $f6, -0xA30($t0)
    ctx->pc = 0x203f20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5D0u, _value); } while (0); }
    // 0x203f24: 0xe4e5f5d4  swc1        $f5, -0xA2C($a3)
    ctx->pc = 0x203f24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5D4u, _value); } while (0); }
    // 0x203f28: 0xe4c4f5d8  swc1        $f4, -0xA28($a2)
    ctx->pc = 0x203f28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5D8u, _value); } while (0); }
    // 0x203f2c: 0xe4a3f5dc  swc1        $f3, -0xA24($a1)
    ctx->pc = 0x203f2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5DCu, _value); } while (0); }
    // 0x203f30: 0xe482f5e8  swc1        $f2, -0xA18($a0)
    ctx->pc = 0x203f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5E8u, _value); } while (0); }
    // 0x203f34: 0xe441f5e0  swc1        $f1, -0xA20($v0)
    ctx->pc = 0x203f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5E0u, _value); } while (0); }
    // 0x203f38: 0xe460f5e4  swc1        $f0, -0xA1C($v1)
    ctx->pc = 0x203f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50F5E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50F5E4u, _value); } while (0); }
    // 0x203f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x203F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203F3Cu;
        // 0x203f40: 0xad60f5c4  sw          $zero, -0xA3C($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4294964676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203F44u;
    // 0x203f44: 0x0  nop
    ctx->pc = 0x203f44u;
    // NOP
    ctx->pc = 0x203f48u;
}
