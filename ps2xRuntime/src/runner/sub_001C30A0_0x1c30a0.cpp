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

// Function: sub_001C30A0
// Address: 0x1c30a0 - 0x1c3280
void sub_001C30A0_0x1c30a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C30A0_0x1c30a0");
#endif

    ctx->pc = 0x1c30a0u;

    // 0x1c30a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c30a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c30a4: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1c30a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1c30a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c30a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c30ac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1c30acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1c30b0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1C30B0u;
    {
        const bool branch_taken_0x1c30b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30B0u;
        // 0x1c30b4: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30b0) {
            ctx->pc = 0x1C3188u;
            goto label_1c3188;
        }
    }
    ctx->pc = 0x1C30B8u;
    // 0x1c30b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C30B8u;
    {
        const bool branch_taken_0x1c30b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30B8u;
        // 0x1c30bc: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30b8) {
            ctx->pc = 0x1C30F0u;
            goto label_1c30f0;
        }
    }
    ctx->pc = 0x1C30C0u;
    // 0x1c30c0: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1C30C0u;
    {
        const bool branch_taken_0x1c30c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30C0u;
        // 0x1c30c4: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30c0) {
            ctx->pc = 0x1C3274u;
            goto label_1c3274;
        }
    }
    ctx->pc = 0x1C30C8u;
    // 0x1c30c8: 0x3c013f8d  lui         $at, 0x3F8D
    ctx->pc = 0x1c30c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16269 << 16));
    // 0x1c30cc: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1c30ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1c30d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c30d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c30d4: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x1c30d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x1c30d8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c30d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c30dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c30dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c30e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c30e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c30e4: 0xe461e988  swc1        $f1, -0x1678($v1)
    ctx->pc = 0x1c30e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961544), bits); }
    // 0x1c30e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30E8u;
        // 0x1c30ec: 0xe440e97c  swc1        $f0, -0x1684($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961532), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30F0u;
label_1c30f0:
    // 0x1c30f0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C30F0u;
    {
        const bool branch_taken_0x1c30f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30F0u;
        // 0x1c30f4: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30f0) {
            ctx->pc = 0x1C3148u;
            goto label_1c3148;
        }
    }
    ctx->pc = 0x1C30F8u;
    // 0x1c30f8: 0x3c013f8f  lui         $at, 0x3F8F
    ctx->pc = 0x1c30f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16271 << 16));
    // 0x1c30fc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c30fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c3100: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c3100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3104: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1c3104u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1c3108: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x1c3108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x1c310c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c310cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c3110: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c3110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3114: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c3114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c3118: 0x3c013f88  lui         $at, 0x3F88
    ctx->pc = 0x1c3118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16264 << 16));
    // 0x1c311c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1c311cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1c3120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3124: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c3124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c3128: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c3128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c312c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1c312cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1c3130: 0xe442e98c  swc1        $f2, -0x1674($v0)
    ctx->pc = 0x1c3130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E98Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E98Cu, _value); } while (0); }
    // 0x1c3134: 0xe460e990  swc1        $f0, -0x1670($v1)
    ctx->pc = 0x1c3134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E990u, _value); } while (0); }
    // 0x1c3138: 0xe481e994  swc1        $f1, -0x166C($a0)
    ctx->pc = 0x1c3138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E994u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E994u, _value); } while (0); }
    // 0x1c313c: 0xe4c2e988  swc1        $f2, -0x1678($a2)
    ctx->pc = 0x1c313cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E988u, _value); } while (0); }
    // 0x1c3140: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3140u;
        // 0x1c3144: 0xe4a1e97c  swc1        $f1, -0x1684($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961532), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3148u;
label_1c3148:
    // 0x1c3148: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c3148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c314c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c314cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c3150: 0x3c013f7c  lui         $at, 0x3F7C
    ctx->pc = 0x1c3150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16252 << 16));
    // 0x1c3154: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1c3154u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x1c3158: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c3158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c315c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1c315cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1c3160: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x1c3160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x1c3164: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1c3164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1c3168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c3168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c316c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c316cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c3170: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x1c3170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x1c3174: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c3174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c3178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c317c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c3180: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1C3180u;
    {
        const bool branch_taken_0x1c3180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3180u;
        // 0x1c3184: 0xe4a3e988  swc1        $f3, -0x1678($a1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3180) {
            ctx->pc = 0x1C3268u;
            goto label_1c3268;
        }
    }
    ctx->pc = 0x1C3188u;
label_1c3188:
    // 0x1c3188: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1c3188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1c318c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C318Cu;
    {
        const bool branch_taken_0x1c318c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C318Cu;
        // 0x1c3190: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c318c) {
            ctx->pc = 0x1C3204u;
            goto label_1c3204;
        }
    }
    ctx->pc = 0x1C3194u;
    // 0x1c3194: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x1c3194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x1c3198: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1c3198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1c319c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c319cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c31a0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1c31a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1c31a4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1c31a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1c31a8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c31a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c31ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c31acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c31b0: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1c31b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1c31b4: 0x3c013f98  lui         $at, 0x3F98
    ctx->pc = 0x1c31b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16280 << 16));
    // 0x1c31b8: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1c31b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1c31bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c31bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c31c0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c31c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c31c4: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x1c31c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
    // 0x1c31c8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c31c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c31cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c31ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c31d0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1c31d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1c31d4: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1c31d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1c31d8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1c31d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1c31dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c31dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c31e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c31e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c31e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c31e8: 0xe4c3e988  swc1        $f3, -0x1678($a2)
    ctx->pc = 0x1c31e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E988u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E988u, _value); } while (0); }
    // 0x1c31ec: 0xe4a2e98c  swc1        $f2, -0x1674($a1)
    ctx->pc = 0x1c31ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E98Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E98Cu, _value); } while (0); }
    // 0x1c31f0: 0xe480e990  swc1        $f0, -0x1670($a0)
    ctx->pc = 0x1c31f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E990u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E990u, _value); } while (0); }
    // 0x1c31f4: 0xe444e994  swc1        $f4, -0x166C($v0)
    ctx->pc = 0x1c31f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E994u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E994u, _value); } while (0); }
    // 0x1c31f8: 0xe461e980  swc1        $f1, -0x1680($v1)
    ctx->pc = 0x1c31f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E980u, _value); } while (0); }
    // 0x1c31fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31FCu;
        // 0x1c3200: 0xe4e4e97c  swc1        $f4, -0x1684($a3) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294961532), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3204u;
label_1c3204:
    // 0x1c3204: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c3204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3208: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1c3208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1c320c: 0x3c013eab  lui         $at, 0x3EAB
    ctx->pc = 0x1c320cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16043 << 16));
    // 0x1c3210: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1c3210u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1c3214: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1c3214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1c3218: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1c3218u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1c321c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x1c321cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x1c3220: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1c3220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1c3224: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1c3224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c3228: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1c3228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1c322c: 0x3c013f7c  lui         $at, 0x3F7C
    ctx->pc = 0x1c322cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16252 << 16));
    // 0x1c3230: 0x342128f6  ori         $at, $at, 0x28F6
    ctx->pc = 0x1c3230u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10486);
    // 0x1c3234: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c3234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3238: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1c3238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1c323c: 0x3c013f74  lui         $at, 0x3F74
    ctx->pc = 0x1c323cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16244 << 16));
    // 0x1c3240: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1c3240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1c3244: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c3244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3248: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1c3248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1c324c: 0x3c013ebd  lui         $at, 0x3EBD
    ctx->pc = 0x1c324cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16061 << 16));
    // 0x1c3250: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1c3250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1c3254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c3254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3258: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1c3258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1c325c: 0xe4e5e988  swc1        $f5, -0x1678($a3)
    ctx->pc = 0x1c325cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294961544), bits); }
    // 0x1c3260: 0xe4c4e97c  swc1        $f4, -0x1684($a2)
    ctx->pc = 0x1c3260u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E97Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E97Cu, _value); } while (0); }
    // 0x1c3264: 0xe4a3e980  swc1        $f3, -0x1680($a1)
    ctx->pc = 0x1c3264u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50E980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50E980u, _value); } while (0); }
label_1c3268:
    // 0x1c3268: 0xe482e98c  swc1        $f2, -0x1674($a0)
    ctx->pc = 0x1c3268u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961548), bits); }
    // 0x1c326c: 0xe461e990  swc1        $f1, -0x1670($v1)
    ctx->pc = 0x1c326cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961552), bits); }
    // 0x1c3270: 0xe440e994  swc1        $f0, -0x166C($v0)
    ctx->pc = 0x1c3270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961556), bits); }
label_1c3274:
    // 0x1c3274: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C327Cu;
    // 0x1c327c: 0x0  nop
    ctx->pc = 0x1c327cu;
    // NOP
    ctx->pc = 0x1c3280u;
}
