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

// Function: sub_003B0CD0
// Address: 0x3b0cd0 - 0x3b0ee8
void sub_003B0CD0_0x3b0cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0CD0_0x3b0cd0");
#endif

    switch (ctx->pc) {
        case 0x3b0cd0u: goto label_3b0cd0;
        case 0x3b0cd4u: goto label_3b0cd4;
        case 0x3b0cd8u: goto label_3b0cd8;
        case 0x3b0cdcu: goto label_3b0cdc;
        case 0x3b0ce0u: goto label_3b0ce0;
        case 0x3b0ce4u: goto label_3b0ce4;
        case 0x3b0ce8u: goto label_3b0ce8;
        case 0x3b0cecu: goto label_3b0cec;
        case 0x3b0cf0u: goto label_3b0cf0;
        case 0x3b0cf4u: goto label_3b0cf4;
        case 0x3b0cf8u: goto label_3b0cf8;
        case 0x3b0cfcu: goto label_3b0cfc;
        case 0x3b0d00u: goto label_3b0d00;
        case 0x3b0d04u: goto label_3b0d04;
        case 0x3b0d08u: goto label_3b0d08;
        case 0x3b0d0cu: goto label_3b0d0c;
        case 0x3b0d10u: goto label_3b0d10;
        case 0x3b0d14u: goto label_3b0d14;
        case 0x3b0d18u: goto label_3b0d18;
        case 0x3b0d1cu: goto label_3b0d1c;
        case 0x3b0d20u: goto label_3b0d20;
        case 0x3b0d24u: goto label_3b0d24;
        case 0x3b0d28u: goto label_3b0d28;
        case 0x3b0d2cu: goto label_3b0d2c;
        case 0x3b0d30u: goto label_3b0d30;
        case 0x3b0d34u: goto label_3b0d34;
        case 0x3b0d38u: goto label_3b0d38;
        case 0x3b0d3cu: goto label_3b0d3c;
        case 0x3b0d40u: goto label_3b0d40;
        case 0x3b0d44u: goto label_3b0d44;
        case 0x3b0d48u: goto label_3b0d48;
        case 0x3b0d4cu: goto label_3b0d4c;
        case 0x3b0d50u: goto label_3b0d50;
        case 0x3b0d54u: goto label_3b0d54;
        case 0x3b0d58u: goto label_3b0d58;
        case 0x3b0d5cu: goto label_3b0d5c;
        case 0x3b0d60u: goto label_3b0d60;
        case 0x3b0d64u: goto label_3b0d64;
        case 0x3b0d68u: goto label_3b0d68;
        case 0x3b0d6cu: goto label_3b0d6c;
        case 0x3b0d70u: goto label_3b0d70;
        case 0x3b0d74u: goto label_3b0d74;
        case 0x3b0d78u: goto label_3b0d78;
        case 0x3b0d7cu: goto label_3b0d7c;
        case 0x3b0d80u: goto label_3b0d80;
        case 0x3b0d84u: goto label_3b0d84;
        case 0x3b0d88u: goto label_3b0d88;
        case 0x3b0d8cu: goto label_3b0d8c;
        case 0x3b0d90u: goto label_3b0d90;
        case 0x3b0d94u: goto label_3b0d94;
        case 0x3b0d98u: goto label_3b0d98;
        case 0x3b0d9cu: goto label_3b0d9c;
        case 0x3b0da0u: goto label_3b0da0;
        case 0x3b0da4u: goto label_3b0da4;
        case 0x3b0da8u: goto label_3b0da8;
        case 0x3b0dacu: goto label_3b0dac;
        case 0x3b0db0u: goto label_3b0db0;
        case 0x3b0db4u: goto label_3b0db4;
        case 0x3b0db8u: goto label_3b0db8;
        case 0x3b0dbcu: goto label_3b0dbc;
        case 0x3b0dc0u: goto label_3b0dc0;
        case 0x3b0dc4u: goto label_3b0dc4;
        case 0x3b0dc8u: goto label_3b0dc8;
        case 0x3b0dccu: goto label_3b0dcc;
        case 0x3b0dd0u: goto label_3b0dd0;
        case 0x3b0dd4u: goto label_3b0dd4;
        case 0x3b0dd8u: goto label_3b0dd8;
        case 0x3b0ddcu: goto label_3b0ddc;
        case 0x3b0de0u: goto label_3b0de0;
        case 0x3b0de4u: goto label_3b0de4;
        case 0x3b0de8u: goto label_3b0de8;
        case 0x3b0decu: goto label_3b0dec;
        case 0x3b0df0u: goto label_3b0df0;
        case 0x3b0df4u: goto label_3b0df4;
        case 0x3b0df8u: goto label_3b0df8;
        case 0x3b0dfcu: goto label_3b0dfc;
        case 0x3b0e00u: goto label_3b0e00;
        case 0x3b0e04u: goto label_3b0e04;
        case 0x3b0e08u: goto label_3b0e08;
        case 0x3b0e0cu: goto label_3b0e0c;
        case 0x3b0e10u: goto label_3b0e10;
        case 0x3b0e14u: goto label_3b0e14;
        case 0x3b0e18u: goto label_3b0e18;
        case 0x3b0e1cu: goto label_3b0e1c;
        case 0x3b0e20u: goto label_3b0e20;
        case 0x3b0e24u: goto label_3b0e24;
        case 0x3b0e28u: goto label_3b0e28;
        case 0x3b0e2cu: goto label_3b0e2c;
        case 0x3b0e30u: goto label_3b0e30;
        case 0x3b0e34u: goto label_3b0e34;
        case 0x3b0e38u: goto label_3b0e38;
        case 0x3b0e3cu: goto label_3b0e3c;
        case 0x3b0e40u: goto label_3b0e40;
        case 0x3b0e44u: goto label_3b0e44;
        case 0x3b0e48u: goto label_3b0e48;
        case 0x3b0e4cu: goto label_3b0e4c;
        case 0x3b0e50u: goto label_3b0e50;
        case 0x3b0e54u: goto label_3b0e54;
        case 0x3b0e58u: goto label_3b0e58;
        case 0x3b0e5cu: goto label_3b0e5c;
        case 0x3b0e60u: goto label_3b0e60;
        case 0x3b0e64u: goto label_3b0e64;
        case 0x3b0e68u: goto label_3b0e68;
        case 0x3b0e6cu: goto label_3b0e6c;
        case 0x3b0e70u: goto label_3b0e70;
        case 0x3b0e74u: goto label_3b0e74;
        case 0x3b0e78u: goto label_3b0e78;
        case 0x3b0e7cu: goto label_3b0e7c;
        case 0x3b0e80u: goto label_3b0e80;
        case 0x3b0e84u: goto label_3b0e84;
        case 0x3b0e88u: goto label_3b0e88;
        case 0x3b0e8cu: goto label_3b0e8c;
        case 0x3b0e90u: goto label_3b0e90;
        case 0x3b0e94u: goto label_3b0e94;
        case 0x3b0e98u: goto label_3b0e98;
        case 0x3b0e9cu: goto label_3b0e9c;
        case 0x3b0ea0u: goto label_3b0ea0;
        case 0x3b0ea4u: goto label_3b0ea4;
        case 0x3b0ea8u: goto label_3b0ea8;
        case 0x3b0eacu: goto label_3b0eac;
        case 0x3b0eb0u: goto label_3b0eb0;
        case 0x3b0eb4u: goto label_3b0eb4;
        case 0x3b0eb8u: goto label_3b0eb8;
        case 0x3b0ebcu: goto label_3b0ebc;
        case 0x3b0ec0u: goto label_3b0ec0;
        case 0x3b0ec4u: goto label_3b0ec4;
        case 0x3b0ec8u: goto label_3b0ec8;
        case 0x3b0eccu: goto label_3b0ecc;
        case 0x3b0ed0u: goto label_3b0ed0;
        case 0x3b0ed4u: goto label_3b0ed4;
        case 0x3b0ed8u: goto label_3b0ed8;
        case 0x3b0edcu: goto label_3b0edc;
        case 0x3b0ee0u: goto label_3b0ee0;
        case 0x3b0ee4u: goto label_3b0ee4;
        default: break;
    }

    ctx->pc = 0x3b0cd0u;

label_3b0cd0:
    // 0x3b0cd0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3b0cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3b0cd4:
    // 0x3b0cd4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x3b0cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_3b0cd8:
    // 0x3b0cd8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x3b0cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_3b0cdc:
    // 0x3b0cdc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b0cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b0ce0:
    // 0x3b0ce0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x3b0ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_3b0ce4:
    // 0x3b0ce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b0ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0ce8:
    // 0x3b0ce8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x3b0ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_3b0cec:
    // 0x3b0cec: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x3b0cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_3b0cf0:
    // 0x3b0cf0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x3b0cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_3b0cf4:
    // 0x3b0cf4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3b0cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3b0cf8:
    // 0x3b0cf8: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x3b0cf8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_3b0cfc:
    // 0x3b0cfc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3b0cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3b0d00:
    // 0x3b0d00: 0x36b5ff70  ori         $s5, $s5, 0xFF70
    ctx->pc = 0x3b0d00u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65392);
label_3b0d04:
    // 0x3b0d04: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x3b0d04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_3b0d08:
    // 0x3b0d08: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x3b0d08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3b0d0c:
    // 0x3b0d0c: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x3b0d0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_3b0d10:
    // 0x3b0d10: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x3b0d10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_3b0d14:
    // 0x3b0d14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b0d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b0d18:
    // 0x3b0d18: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3b0d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3b0d1c:
    // 0x3b0d1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b0d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b0d20:
    // 0x3b0d20: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x3b0d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
label_3b0d24:
    // 0x3b0d24: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3b0d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3b0d28:
    // 0x3b0d28: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b0d28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b0d2c:
    // 0x3b0d2c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b0d30:
    // 0x3b0d30: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3b0d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3b0d34:
    // 0x3b0d34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3b0d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b0d38:
    // 0x3b0d38: 0x40f809  jalr        $v0
label_3b0d3c:
    if (ctx->pc == 0x3B0D3Cu) {
        ctx->pc = 0x3B0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D38u;
        // 0x3b0d3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D40u;
        goto label_3b0d40;
    }
    ctx->pc = 0x3B0D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0D40u);
        ctx->pc = 0x3B0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D38u;
        // 0x3b0d3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0D38u, 0x3B0D40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0D40u;
label_3b0d40:
    // 0x3b0d40: 0x3c030480  lui         $v1, 0x480
    ctx->pc = 0x3b0d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1152 << 16));
label_3b0d44:
    // 0x3b0d44: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3b0d44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d48:
    // 0x3b0d48: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3b0d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3b0d4c:
    // 0x3b0d4c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b0d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b0d50:
    // 0x3b0d50: 0xc0e858c  jal         func_3A1630
label_3b0d54:
    if (ctx->pc == 0x3B0D54u) {
        ctx->pc = 0x3B0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D50u;
        // 0x3b0d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D58u;
        goto label_3b0d58;
    }
    ctx->pc = 0x3B0D50u;
    SET_GPR_U32(ctx, 31, 0x3B0D58u);
    ctx->pc = 0x3B0D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D50u;
    // 0x3b0d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B0D50u, 0x3B0D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D58u;
label_3b0d58:
    // 0x3b0d58: 0xae3500b0  sw          $s5, 0xB0($s1)
    ctx->pc = 0x3b0d58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 21));
label_3b0d5c:
    // 0x3b0d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d60:
    // 0x3b0d60: 0xc0ea146  jal         func_3A8518
label_3b0d64:
    if (ctx->pc == 0x3B0D64u) {
        ctx->pc = 0x3B0D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D60u;
        // 0x3b0d64: 0xae2000bc  sw          $zero, 0xBC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D68u;
        goto label_3b0d68;
    }
    ctx->pc = 0x3B0D60u;
    SET_GPR_U32(ctx, 31, 0x3B0D68u);
    ctx->pc = 0x3B0D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D60u;
    // 0x3b0d64: 0xae2000bc  sw          $zero, 0xBC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B0D60u, 0x3B0D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D68u;
label_3b0d68:
    // 0x3b0d68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b0d68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d6c:
    // 0x3b0d6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b0d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b0d70:
    // 0x3b0d70: 0xc0ea12a  jal         func_3A84A8
label_3b0d74:
    if (ctx->pc == 0x3B0D74u) {
        ctx->pc = 0x3B0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D70u;
        // 0x3b0d74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D78u;
        goto label_3b0d78;
    }
    ctx->pc = 0x3B0D70u;
    SET_GPR_U32(ctx, 31, 0x3B0D78u);
    ctx->pc = 0x3B0D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D70u;
    // 0x3b0d74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B0D70u, 0x3B0D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D78u;
label_3b0d78:
    // 0x3b0d78: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b0d78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b0d7c:
    // 0x3b0d7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3b0d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b0d80:
    // 0x3b0d80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b0d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d84:
    // 0x3b0d84: 0xc0ea12a  jal         func_3A84A8
label_3b0d88:
    if (ctx->pc == 0x3B0D88u) {
        ctx->pc = 0x3B0D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D84u;
        // 0x3b0d88: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0D8Cu;
        goto label_3b0d8c;
    }
    ctx->pc = 0x3B0D84u;
    SET_GPR_U32(ctx, 31, 0x3B0D8Cu);
    ctx->pc = 0x3B0D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D84u;
    // 0x3b0d88: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B0D84u, 0x3B0D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0D8Cu;
label_3b0d8c:
    // 0x3b0d8c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3b0d8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b0d90:
    // 0x3b0d90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3b0d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b0d94:
    // 0x3b0d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b0d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0d98:
    // 0x3b0d98: 0xc0e858c  jal         func_3A1630
label_3b0d9c:
    if (ctx->pc == 0x3B0D9Cu) {
        ctx->pc = 0x3B0D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0D98u;
        // 0x3b0d9c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0DA0u;
        goto label_3b0da0;
    }
    ctx->pc = 0x3B0D98u;
    SET_GPR_U32(ctx, 31, 0x3B0DA0u);
    ctx->pc = 0x3B0D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0D98u;
    // 0x3b0d9c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B0D98u, 0x3B0DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0DA0u;
label_3b0da0:
    // 0x3b0da0: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x3b0da0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b0da4:
    // 0x3b0da4: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x3b0da4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
label_3b0da8:
    // 0x3b0da8: 0x2610b8b8  addiu       $s0, $s0, -0x4748
    ctx->pc = 0x3b0da8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949048));
label_3b0dac:
    // 0x3b0dac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x3b0dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_3b0db0:
    // 0x3b0db0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b0db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b0db4:
    // 0x3b0db4: 0x86720070  lh          $s2, 0x70($s3)
    ctx->pc = 0x3b0db4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 112)));
label_3b0db8:
    // 0x3b0db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0dbc:
    // 0x3b0dbc: 0x26730070  addiu       $s3, $s3, 0x70
    ctx->pc = 0x3b0dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_3b0dc0:
    // 0x3b0dc0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3b0dc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_3b0dc4:
    // 0x3b0dc4: 0xc0cd518  jal         func_335460
label_3b0dc8:
    if (ctx->pc == 0x3B0DC8u) {
        ctx->pc = 0x3B0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DC4u;
        // 0x3b0dc8: 0x2329021  addu        $s2, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0DCCu;
        goto label_3b0dcc;
    }
    ctx->pc = 0x3B0DC4u;
    SET_GPR_U32(ctx, 31, 0x3B0DCCu);
    ctx->pc = 0x3B0DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0DC4u;
    // 0x3b0dc8: 0x2329021  addu        $s2, $s1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B0DC4u, 0x3B0DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0DCCu;
label_3b0dcc:
    // 0x3b0dcc: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3b0dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b0dd0:
    // 0x3b0dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0dd4:
    // 0x3b0dd4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b0dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b0dd8:
    // 0x3b0dd8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b0dd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b0ddc:
    // 0x3b0ddc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b0ddcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b0de0:
    // 0x3b0de0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b0de0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b0de4:
    // 0x3b0de4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3b0de4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3b0de8:
    // 0x3b0de8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3b0de8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3b0dec:
    // 0x3b0dec: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b0decu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b0df0:
    // 0x3b0df0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3b0df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3b0df4:
    // 0x3b0df4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3b0df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3b0df8:
    // 0x3b0df8: 0xc0cd518  jal         func_335460
label_3b0dfc:
    if (ctx->pc == 0x3B0DFCu) {
        ctx->pc = 0x3B0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0DF8u;
        // 0x3b0dfc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E00u;
        goto label_3b0e00;
    }
    ctx->pc = 0x3B0DF8u;
    SET_GPR_U32(ctx, 31, 0x3B0E00u);
    ctx->pc = 0x3B0DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0DF8u;
    // 0x3b0dfc: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B0DF8u, 0x3B0E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0E00u;
label_3b0e00:
    // 0x3b0e00: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3b0e00u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3b0e04:
    // 0x3b0e04: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3b0e04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_3b0e08:
    // 0x3b0e08: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x3b0e08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_3b0e0c:
    // 0x3b0e0c: 0xc0cd518  jal         func_335460
label_3b0e10:
    if (ctx->pc == 0x3B0E10u) {
        ctx->pc = 0x3B0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E0Cu;
        // 0x3b0e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E14u;
        goto label_3b0e14;
    }
    ctx->pc = 0x3B0E0Cu;
    SET_GPR_U32(ctx, 31, 0x3B0E14u);
    ctx->pc = 0x3B0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E0Cu;
    // 0x3b0e10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B0E0Cu, 0x3B0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0E14u;
label_3b0e14:
    // 0x3b0e14: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3b0e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_3b0e18:
    // 0x3b0e18: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3b0e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b0e1c:
    // 0x3b0e1c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3b0e1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3b0e20:
    // 0x3b0e20: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x3b0e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_3b0e24:
    // 0x3b0e24: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3b0e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3b0e28:
    // 0x3b0e28: 0xc0cd518  jal         func_335460
label_3b0e2c:
    if (ctx->pc == 0x3B0E2Cu) {
        ctx->pc = 0x3B0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0E28u;
        // 0x3b0e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0E30u;
        goto label_3b0e30;
    }
    ctx->pc = 0x3B0E28u;
    SET_GPR_U32(ctx, 31, 0x3B0E30u);
    ctx->pc = 0x3B0E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E28u;
    // 0x3b0e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3B0E28u, 0x3B0E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0E30u;
label_3b0e30:
    // 0x3b0e30: 0xe7b50050  swc1        $f21, 0x50($sp)
    ctx->pc = 0x3b0e30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3b0e34:
    // 0x3b0e34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b0e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b0e38:
    // 0x3b0e38: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x3b0e38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3b0e3c:
    // 0x3b0e3c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3b0e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b0e40:
    // 0x3b0e40: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x3b0e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3b0e44:
    // 0x3b0e44: 0xe7b7005c  swc1        $f23, 0x5C($sp)
    ctx->pc = 0x3b0e44u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_3b0e48:
    // 0x3b0e48: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3b0e48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b0e4c:
    // 0x3b0e4c: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x3b0e4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b0e50:
    // 0x3b0e50: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3b0e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3b0e54:
    // 0x3b0e54: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3b0e54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3b0e58:
    // 0x3b0e58: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3b0e58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3b0e5c:
    // 0x3b0e5c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3b0e5cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3b0e60:
    // 0x3b0e60: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3b0e60u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3b0e64:
    // 0x3b0e64: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3b0e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3b0e68:
    // 0x3b0e68: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3b0e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3b0e6c:
    // 0x3b0e6c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3b0e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3b0e70:
    // 0x3b0e70: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3b0e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3b0e74:
    // 0x3b0e74: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3b0e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3b0e78:
    // 0x3b0e78: 0x60f809  jalr        $v1
label_3b0e7c:
    if (ctx->pc == 0x3B0E7Cu) {
        ctx->pc = 0x3B0E80u;
        goto label_3b0e80;
    }
    ctx->pc = 0x3B0E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B0E80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0E78u, 0x3B0E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0E80u;
label_3b0e80:
    // 0x3b0e80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3b0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3b0e84:
    // 0x3b0e84: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3b0e84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0e88:
    // 0x3b0e88: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x3b0e88u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_3b0e8c:
    // 0x3b0e8c: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x3b0e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
label_3b0e90:
    // 0x3b0e90: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x3b0e90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
label_3b0e94:
    // 0x3b0e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b0e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b0e98:
    // 0x3b0e98: 0x36940034  ori         $s4, $s4, 0x34
    ctx->pc = 0x3b0e98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)52);
label_3b0e9c:
    // 0x3b0e9c: 0xae3500b4  sw          $s5, 0xB4($s1)
    ctx->pc = 0x3b0e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 21));
label_3b0ea0:
    // 0x3b0ea0: 0xae3400c4  sw          $s4, 0xC4($s1)
    ctx->pc = 0x3b0ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 20));
label_3b0ea4:
    // 0x3b0ea4: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3b0ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3b0ea8:
    // 0x3b0ea8: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x3b0ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3b0eac:
    // 0x3b0eac: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x3b0eacu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_3b0eb0:
    // 0x3b0eb0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3b0eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3b0eb4:
    // 0x3b0eb4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3b0eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3b0eb8:
    // 0x3b0eb8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3b0eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3b0ebc:
    // 0x3b0ebc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3b0ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3b0ec0:
    // 0x3b0ec0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3b0ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b0ec4:
    // 0x3b0ec4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3b0ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b0ec8:
    // 0x3b0ec8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3b0ec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b0ecc:
    // 0x3b0ecc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3b0eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3b0ed0:
    // 0x3b0ed0: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x3b0ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b0ed4:
    // 0x3b0ed4: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x3b0ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b0ed8:
    // 0x3b0ed8: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x3b0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b0edc:
    // 0x3b0edc: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x3b0edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b0ee0:
    // 0x3b0ee0: 0x3e00008  jr          $ra
label_3b0ee4:
    if (ctx->pc == 0x3B0EE4u) {
        ctx->pc = 0x3B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EE0u;
        // 0x3b0ee4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0EE8u;
        goto label_fallthrough_0x3b0ee0;
    }
    ctx->pc = 0x3B0EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0EE0u;
        // 0x3b0ee4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b0ee0:
    ctx->pc = 0x3B0EE8u;
}
