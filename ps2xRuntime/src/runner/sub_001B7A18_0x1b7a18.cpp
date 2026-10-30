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

// Function: sub_001B7A18
// Address: 0x1b7a18 - 0x1b7b68
void sub_001B7A18_0x1b7a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7A18_0x1b7a18");
#endif

    switch (ctx->pc) {
        case 0x1b7a90u: goto label_1b7a90;
        default: break;
    }

    ctx->pc = 0x1b7a18u;

    // 0x1b7a18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7a1c: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B7A1Cu;
    {
        const bool branch_taken_0x1b7a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B7A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A1Cu;
        // 0x1b7a20: 0x3c070051  lui         $a3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a1c) {
            ctx->pc = 0x1B7AB0u;
            goto label_1b7ab0;
        }
    }
    ctx->pc = 0x1B7A24u;
    // 0x1b7a24: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7A24u;
    {
        const bool branch_taken_0x1b7a24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A24u;
        // 0x1b7a28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a24) {
            ctx->pc = 0x1B7A3Cu;
            goto label_1b7a3c;
        }
    }
    ctx->pc = 0x1B7A2Cu;
    // 0x1b7a2c: 0x10a20035  beq         $a1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B7A2Cu;
    {
        const bool branch_taken_0x1b7a2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B7A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7A2Cu;
        // 0x1b7a30: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7a2c) {
            ctx->pc = 0x1B7B04u;
            goto label_1b7b04;
        }
    }
    ctx->pc = 0x1B7A34u;
    // 0x1b7a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7A3Cu;
label_1b7a3c:
    // 0x1b7a3c: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x1b7a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x1b7a40: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b7a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b7a44: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1b7a44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1b7a48: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x1b7a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x1b7a4c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b7a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b7a50: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1b7a50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1b7a54: 0x3c0140ae  lui         $at, 0x40AE
    ctx->pc = 0x1b7a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16558 << 16));
    // 0x1b7a58: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b7a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b7a5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b7a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7a60: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b7a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1b7a64: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1b7a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1b7a68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7a6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7a70: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b7a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1b7a74: 0x3c0140c3  lui         $at, 0x40C3
    ctx->pc = 0x1b7a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16579 << 16));
    // 0x1b7a78: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b7a78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b7a7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7a80: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b7a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1b7a84: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b7a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b7a88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b7a90:
    // 0x1b7a90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b7a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b7a94: 0xe4e5d6b8  swc1        $f5, -0x2948($a3)
    ctx->pc = 0x1b7a94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956728), bits); }
    // 0x1b7a98: 0xe4c4d6bc  swc1        $f4, -0x2944($a2)
    ctx->pc = 0x1b7a98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956732), bits); }
    // 0x1b7a9c: 0xe4a3d6c4  swc1        $f3, -0x293C($a1)
    ctx->pc = 0x1b7a9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956740), bits); }
    // 0x1b7aa0: 0xe482d6c8  swc1        $f2, -0x2938($a0)
    ctx->pc = 0x1b7aa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956744), bits); }
    // 0x1b7aa4: 0xe461d6cc  swc1        $f1, -0x2934($v1)
    ctx->pc = 0x1b7aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294956748), bits); }
    // 0x1b7aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AA8u;
        // 0x1b7aac: 0xe440d6d0  swc1        $f0, -0x2930($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956752), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7AB0u;
label_1b7ab0:
    // 0x1b7ab0: 0x3c0141d8  lui         $at, 0x41D8
    ctx->pc = 0x1b7ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16856 << 16));
    // 0x1b7ab4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b7ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1b7ab8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1b7ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1b7abc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b7abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b7ac0: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1b7ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1b7ac4: 0x3c0140b6  lui         $at, 0x40B6
    ctx->pc = 0x1b7ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16566 << 16));
    // 0x1b7ac8: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1b7ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1b7acc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b7accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7ad0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b7ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1b7ad4: 0x3c013f11  lui         $at, 0x3F11
    ctx->pc = 0x1b7ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16145 << 16));
    // 0x1b7ad8: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1b7ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1b7adc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7ae0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b7ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1b7ae4: 0x3c0140c4  lui         $at, 0x40C4
    ctx->pc = 0x1b7ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16580 << 16));
    // 0x1b7ae8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7ae8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7aec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7aecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7af0: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x1b7af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x1b7af4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1b7af4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1b7af8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7afc: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1B7AFCu;
    {
        const bool branch_taken_0x1b7afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AFCu;
        // 0x1b7b00: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7afc) {
            ctx->pc = 0x1B7A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7a90;
        }
    }
    ctx->pc = 0x1B7B04u;
label_1b7b04:
    // 0x1b7b04: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1b7b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1b7b08: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b7b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b7b0c: 0x3c014113  lui         $at, 0x4113
    ctx->pc = 0x1b7b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16659 << 16));
    // 0x1b7b10: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b7b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b7b14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b7b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b7b18: 0x3c0140bc  lui         $at, 0x40BC
    ctx->pc = 0x1b7b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16572 << 16));
    // 0x1b7b1c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b7b1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b7b20: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b7b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b7b24: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1b7b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1b7b28: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1b7b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1b7b2c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1b7b2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1b7b30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b7b30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7b34: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1b7b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1b7b38: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x1b7b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x1b7b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b7b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b7b40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b7b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1b7b44: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b7b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1b7b48: 0xe4e4d6b8  swc1        $f4, -0x2948($a3)
    ctx->pc = 0x1b7b48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294956728), bits); }
    // 0x1b7b4c: 0xe4c3d6bc  swc1        $f3, -0x2944($a2)
    ctx->pc = 0x1b7b4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294956732), bits); }
    // 0x1b7b50: 0xe4a2d6c4  swc1        $f2, -0x293C($a1)
    ctx->pc = 0x1b7b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D6C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D6C4u, _value); } while (0); }
    // 0x1b7b54: 0xe481d6c8  swc1        $f1, -0x2938($a0)
    ctx->pc = 0x1b7b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D6C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D6C8u, _value); } while (0); }
    // 0x1b7b58: 0xe440d6cc  swc1        $f0, -0x2934($v0)
    ctx->pc = 0x1b7b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50D6CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50D6CCu, _value); } while (0); }
    // 0x1b7b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7B5Cu;
        // 0x1b7b60: 0xac60d6d0  sw          $zero, -0x2930($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956752), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7B64u;
    // 0x1b7b64: 0x0  nop
    ctx->pc = 0x1b7b64u;
    // NOP
    ctx->pc = 0x1b7b68u;
}
