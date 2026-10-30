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

// Function: sub_002E1C18
// Address: 0x2e1c18 - 0x2e1e10
void sub_002E1C18_0x2e1c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1C18_0x2e1c18");
#endif

    switch (ctx->pc) {
        case 0x2e1c18u: goto label_2e1c18;
        case 0x2e1c1cu: goto label_2e1c1c;
        case 0x2e1c20u: goto label_2e1c20;
        case 0x2e1c24u: goto label_2e1c24;
        case 0x2e1c28u: goto label_2e1c28;
        case 0x2e1c2cu: goto label_2e1c2c;
        case 0x2e1c30u: goto label_2e1c30;
        case 0x2e1c34u: goto label_2e1c34;
        case 0x2e1c38u: goto label_2e1c38;
        case 0x2e1c3cu: goto label_2e1c3c;
        case 0x2e1c40u: goto label_2e1c40;
        case 0x2e1c44u: goto label_2e1c44;
        case 0x2e1c48u: goto label_2e1c48;
        case 0x2e1c4cu: goto label_2e1c4c;
        case 0x2e1c50u: goto label_2e1c50;
        case 0x2e1c54u: goto label_2e1c54;
        case 0x2e1c58u: goto label_2e1c58;
        case 0x2e1c5cu: goto label_2e1c5c;
        case 0x2e1c60u: goto label_2e1c60;
        case 0x2e1c64u: goto label_2e1c64;
        case 0x2e1c68u: goto label_2e1c68;
        case 0x2e1c6cu: goto label_2e1c6c;
        case 0x2e1c70u: goto label_2e1c70;
        case 0x2e1c74u: goto label_2e1c74;
        case 0x2e1c78u: goto label_2e1c78;
        case 0x2e1c7cu: goto label_2e1c7c;
        case 0x2e1c80u: goto label_2e1c80;
        case 0x2e1c84u: goto label_2e1c84;
        case 0x2e1c88u: goto label_2e1c88;
        case 0x2e1c8cu: goto label_2e1c8c;
        case 0x2e1c90u: goto label_2e1c90;
        case 0x2e1c94u: goto label_2e1c94;
        case 0x2e1c98u: goto label_2e1c98;
        case 0x2e1c9cu: goto label_2e1c9c;
        case 0x2e1ca0u: goto label_2e1ca0;
        case 0x2e1ca4u: goto label_2e1ca4;
        case 0x2e1ca8u: goto label_2e1ca8;
        case 0x2e1cacu: goto label_2e1cac;
        case 0x2e1cb0u: goto label_2e1cb0;
        case 0x2e1cb4u: goto label_2e1cb4;
        case 0x2e1cb8u: goto label_2e1cb8;
        case 0x2e1cbcu: goto label_2e1cbc;
        case 0x2e1cc0u: goto label_2e1cc0;
        case 0x2e1cc4u: goto label_2e1cc4;
        case 0x2e1cc8u: goto label_2e1cc8;
        case 0x2e1cccu: goto label_2e1ccc;
        case 0x2e1cd0u: goto label_2e1cd0;
        case 0x2e1cd4u: goto label_2e1cd4;
        case 0x2e1cd8u: goto label_2e1cd8;
        case 0x2e1cdcu: goto label_2e1cdc;
        case 0x2e1ce0u: goto label_2e1ce0;
        case 0x2e1ce4u: goto label_2e1ce4;
        case 0x2e1ce8u: goto label_2e1ce8;
        case 0x2e1cecu: goto label_2e1cec;
        case 0x2e1cf0u: goto label_2e1cf0;
        case 0x2e1cf4u: goto label_2e1cf4;
        case 0x2e1cf8u: goto label_2e1cf8;
        case 0x2e1cfcu: goto label_2e1cfc;
        case 0x2e1d00u: goto label_2e1d00;
        case 0x2e1d04u: goto label_2e1d04;
        case 0x2e1d08u: goto label_2e1d08;
        case 0x2e1d0cu: goto label_2e1d0c;
        case 0x2e1d10u: goto label_2e1d10;
        case 0x2e1d14u: goto label_2e1d14;
        case 0x2e1d18u: goto label_2e1d18;
        case 0x2e1d1cu: goto label_2e1d1c;
        case 0x2e1d20u: goto label_2e1d20;
        case 0x2e1d24u: goto label_2e1d24;
        case 0x2e1d28u: goto label_2e1d28;
        case 0x2e1d2cu: goto label_2e1d2c;
        case 0x2e1d30u: goto label_2e1d30;
        case 0x2e1d34u: goto label_2e1d34;
        case 0x2e1d38u: goto label_2e1d38;
        case 0x2e1d3cu: goto label_2e1d3c;
        case 0x2e1d40u: goto label_2e1d40;
        case 0x2e1d44u: goto label_2e1d44;
        case 0x2e1d48u: goto label_2e1d48;
        case 0x2e1d4cu: goto label_2e1d4c;
        case 0x2e1d50u: goto label_2e1d50;
        case 0x2e1d54u: goto label_2e1d54;
        case 0x2e1d58u: goto label_2e1d58;
        case 0x2e1d5cu: goto label_2e1d5c;
        case 0x2e1d60u: goto label_2e1d60;
        case 0x2e1d64u: goto label_2e1d64;
        case 0x2e1d68u: goto label_2e1d68;
        case 0x2e1d6cu: goto label_2e1d6c;
        case 0x2e1d70u: goto label_2e1d70;
        case 0x2e1d74u: goto label_2e1d74;
        case 0x2e1d78u: goto label_2e1d78;
        case 0x2e1d7cu: goto label_2e1d7c;
        case 0x2e1d80u: goto label_2e1d80;
        case 0x2e1d84u: goto label_2e1d84;
        case 0x2e1d88u: goto label_2e1d88;
        case 0x2e1d8cu: goto label_2e1d8c;
        case 0x2e1d90u: goto label_2e1d90;
        case 0x2e1d94u: goto label_2e1d94;
        case 0x2e1d98u: goto label_2e1d98;
        case 0x2e1d9cu: goto label_2e1d9c;
        case 0x2e1da0u: goto label_2e1da0;
        case 0x2e1da4u: goto label_2e1da4;
        case 0x2e1da8u: goto label_2e1da8;
        case 0x2e1dacu: goto label_2e1dac;
        case 0x2e1db0u: goto label_2e1db0;
        case 0x2e1db4u: goto label_2e1db4;
        case 0x2e1db8u: goto label_2e1db8;
        case 0x2e1dbcu: goto label_2e1dbc;
        case 0x2e1dc0u: goto label_2e1dc0;
        case 0x2e1dc4u: goto label_2e1dc4;
        case 0x2e1dc8u: goto label_2e1dc8;
        case 0x2e1dccu: goto label_2e1dcc;
        case 0x2e1dd0u: goto label_2e1dd0;
        case 0x2e1dd4u: goto label_2e1dd4;
        case 0x2e1dd8u: goto label_2e1dd8;
        case 0x2e1ddcu: goto label_2e1ddc;
        case 0x2e1de0u: goto label_2e1de0;
        case 0x2e1de4u: goto label_2e1de4;
        case 0x2e1de8u: goto label_2e1de8;
        case 0x2e1decu: goto label_2e1dec;
        case 0x2e1df0u: goto label_2e1df0;
        case 0x2e1df4u: goto label_2e1df4;
        case 0x2e1df8u: goto label_2e1df8;
        case 0x2e1dfcu: goto label_2e1dfc;
        case 0x2e1e00u: goto label_2e1e00;
        case 0x2e1e04u: goto label_2e1e04;
        case 0x2e1e08u: goto label_2e1e08;
        case 0x2e1e0cu: goto label_2e1e0c;
        default: break;
    }

    ctx->pc = 0x2e1c18u;

label_2e1c18:
    // 0x2e1c18: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2e1c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2e1c1c:
    // 0x2e1c1c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2e1c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2e1c20:
    // 0x2e1c20: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2e1c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2e1c24:
    // 0x2e1c24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e1c24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1c28:
    // 0x2e1c28: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2e1c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2e1c2c:
    // 0x2e1c2c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e1c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e1c30:
    // 0x2e1c30: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2e1c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2e1c34:
    // 0x2e1c34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e1c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1c38:
    // 0x2e1c38: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2e1c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2e1c3c:
    // 0x2e1c3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e1c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1c40:
    // 0x2e1c40: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2e1c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2e1c44:
    // 0x2e1c44: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e1c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2e1c48:
    // 0x2e1c48: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2e1c48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2e1c4c:
    // 0x2e1c4c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2e1c4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1c50:
    // 0x2e1c50: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2e1c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2e1c54:
    // 0x2e1c54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e1c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2e1c58:
    // 0x2e1c58: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x2e1c58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_2e1c5c:
    // 0x2e1c5c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2e1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e1c60:
    // 0x2e1c60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e1c64:
    // 0x2e1c64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e1c68:
    // 0x2e1c68: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2e1c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2e1c6c:
    // 0x2e1c6c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2e1c70:
    // 0x2e1c70: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2e1c70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2e1c74:
    // 0x2e1c74: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x2e1c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2e1c78:
    // 0x2e1c78: 0xc0f809  jalr        $a2
label_2e1c7c:
    if (ctx->pc == 0x2E1C7Cu) {
        ctx->pc = 0x2E1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C78u;
        // 0x2e1c7c: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1C80u;
        goto label_2e1c80;
    }
    ctx->pc = 0x2E1C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2E1C80u);
        ctx->pc = 0x2E1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C78u;
        // 0x2e1c7c: 0xe52821  addu        $a1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1C78u, 0x2E1C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1C80u;
label_2e1c80:
    // 0x2e1c80: 0x92230038  lbu         $v1, 0x38($s1)
    ctx->pc = 0x2e1c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_2e1c84:
    // 0x2e1c84: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e1c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e1c88:
    // 0x2e1c88: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x2e1c88u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e1c8c:
    // 0x2e1c8c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2e1c8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1c90:
    // 0x2e1c90: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2e1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2e1c94:
    // 0x2e1c94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e1c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e1c98:
    // 0x2e1c98: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x2e1c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
label_2e1c9c:
    // 0x2e1c9c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e1c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e1ca0:
    // 0x2e1ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e1ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e1ca4:
    // 0x2e1ca4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2e1ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2e1ca8:
    // 0x2e1ca8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2e1ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e1cac:
    // 0x2e1cac: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2e1cacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2e1cb0:
    // 0x2e1cb0: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2e1cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2e1cb4:
    // 0x2e1cb4: 0x40f809  jalr        $v0
label_2e1cb8:
    if (ctx->pc == 0x2E1CB8u) {
        ctx->pc = 0x2E1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CB4u;
        // 0x2e1cb8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1CBCu;
        goto label_2e1cbc;
    }
    ctx->pc = 0x2E1CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1CBCu);
        ctx->pc = 0x2E1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CB4u;
        // 0x2e1cb8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1CB4u, 0x2E1CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1CBCu;
label_2e1cbc:
    // 0x2e1cbc: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2e1cbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e1cc0:
    // 0x2e1cc0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e1cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2e1cc4:
    // 0x2e1cc4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2e1cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1cc8:
    // 0x2e1cc8: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2e1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2e1ccc:
    // 0x2e1ccc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2e1cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2e1cd0:
    // 0x2e1cd0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e1cd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1cd4:
    // 0x2e1cd4: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x2e1cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
label_2e1cd8:
    // 0x2e1cd8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2e1cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2e1cdc:
    // 0x2e1cdc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2e1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e1ce0:
    // 0x2e1ce0: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x2e1ce0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2e1ce4:
    // 0x2e1ce4: 0xc4746bd8  lwc1        $f20, 0x6BD8($v1)
    ctx->pc = 0x2e1ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 27608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e1ce8:
    // 0x2e1ce8: 0x84a20092  lh          $v0, 0x92($a1)
    ctx->pc = 0x2e1ce8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
label_2e1cec:
    // 0x2e1cec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2e1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2e1cf0:
    // 0x2e1cf0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2e1cf4:
    // 0x2e1cf4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2e1cf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1cf8:
    // 0x2e1cf8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x2e1cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_2e1cfc:
    // 0x2e1cfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e1cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e1d00:
    // 0x2e1d00: 0xc137826  jal         func_4DE098
label_2e1d04:
    if (ctx->pc == 0x2E1D04u) {
        ctx->pc = 0x2E1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D00u;
        // 0x2e1d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1D08u;
        goto label_2e1d08;
    }
    ctx->pc = 0x2E1D00u;
    SET_GPR_U32(ctx, 31, 0x2E1D08u);
    ctx->pc = 0x2E1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D00u;
    // 0x2e1d04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2E1D00u, 0x2E1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D08u;
label_2e1d08:
    // 0x2e1d08: 0xc0e409a  jal         func_390268
label_2e1d0c:
    if (ctx->pc == 0x2E1D0Cu) {
        ctx->pc = 0x2E1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D08u;
        // 0x2e1d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1D10u;
        goto label_2e1d10;
    }
    ctx->pc = 0x2E1D08u;
    SET_GPR_U32(ctx, 31, 0x2E1D10u);
    ctx->pc = 0x2E1D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D08u;
    // 0x2e1d0c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2E1D08u, 0x2E1D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D10u;
label_2e1d10:
    // 0x2e1d10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e1d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1d14:
    // 0x2e1d14: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_2e1d18:
    if (ctx->pc == 0x2E1D18u) {
        ctx->pc = 0x2E1D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D14u;
        // 0x2e1d18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1D1Cu;
        goto label_2e1d1c;
    }
    ctx->pc = 0x2E1D14u;
    {
        const bool branch_taken_0x2e1d14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d14) {
            ctx->pc = 0x2E1D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1D14u;
            // 0x2e1d18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1DB0u;
            goto label_2e1db0;
        }
    }
    ctx->pc = 0x2E1D1Cu;
label_2e1d1c:
    // 0x2e1d1c: 0xc089f98  jal         func_227E60
label_2e1d20:
    if (ctx->pc == 0x2E1D20u) {
        ctx->pc = 0x2E1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D1Cu;
        // 0x2e1d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1D24u;
        goto label_2e1d24;
    }
    ctx->pc = 0x2E1D1Cu;
    SET_GPR_U32(ctx, 31, 0x2E1D24u);
    ctx->pc = 0x2E1D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D1Cu;
    // 0x2e1d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2E1D1Cu, 0x2E1D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D24u;
label_2e1d24:
    // 0x2e1d24: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_2e1d28:
    if (ctx->pc == 0x2E1D28u) {
        ctx->pc = 0x2E1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D24u;
        // 0x2e1d28: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1D2Cu;
        goto label_2e1d2c;
    }
    ctx->pc = 0x2E1D24u;
    {
        const bool branch_taken_0x2e1d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d24) {
            ctx->pc = 0x2E1D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1D24u;
            // 0x2e1d28: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1DB0u;
            goto label_2e1db0;
        }
    }
    ctx->pc = 0x2E1D2Cu;
label_2e1d2c:
    // 0x2e1d2c: 0xc088edc  jal         func_223B70
label_2e1d30:
    if (ctx->pc == 0x2E1D30u) {
        ctx->pc = 0x2E1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D2Cu;
        // 0x2e1d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1D34u;
        goto label_2e1d34;
    }
    ctx->pc = 0x2E1D2Cu;
    SET_GPR_U32(ctx, 31, 0x2E1D34u);
    ctx->pc = 0x2E1D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D2Cu;
    // 0x2e1d30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2E1D2Cu, 0x2E1D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D34u;
label_2e1d34:
    // 0x2e1d34: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2e1d38:
    if (ctx->pc == 0x2E1D38u) {
        ctx->pc = 0x2E1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D34u;
        // 0x2e1d38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1D3Cu;
        goto label_2e1d3c;
    }
    ctx->pc = 0x2E1D34u;
    {
        const bool branch_taken_0x2e1d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d34) {
            ctx->pc = 0x2E1D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1D34u;
            // 0x2e1d38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1DB0u;
            goto label_2e1db0;
        }
    }
    ctx->pc = 0x2E1D3Cu;
label_2e1d3c:
    // 0x2e1d3c: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x2e1d3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_2e1d40:
    // 0x2e1d40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e1d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e1d44:
    // 0x2e1d44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e1d44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e1d48:
    // 0x2e1d48: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2e1d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e1d4c:
    // 0x2e1d4c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e1d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2e1d50:
    // 0x2e1d50: 0xc0cdbb8  jal         func_336EE0
label_2e1d54:
    if (ctx->pc == 0x2E1D54u) {
        ctx->pc = 0x2E1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D50u;
        // 0x2e1d54: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1D58u;
        goto label_2e1d58;
    }
    ctx->pc = 0x2E1D50u;
    SET_GPR_U32(ctx, 31, 0x2E1D58u);
    ctx->pc = 0x2E1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D50u;
    // 0x2e1d54: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336EE0u, 0x2E1D50u, 0x2E1D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D58u;
label_2e1d58:
    // 0x2e1d58: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2e1d58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1d5c:
    // 0x2e1d5c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x2e1d5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e1d60:
    // 0x2e1d60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e1d60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e1d64:
    // 0x2e1d64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e1d64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e1d68:
    // 0x2e1d68: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2e1d68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2e1d6c:
    // 0x2e1d6c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2e1d6cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2e1d70:
    // 0x2e1d70: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x2e1d70u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_2e1d74:
    // 0x2e1d74: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2e1d74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2e1d78:
    // 0x2e1d78: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x2e1d78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e1d7c:
    // 0x2e1d7c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2e1d7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e1d80:
    // 0x2e1d80: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x2e1d80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2e1d84:
    // 0x2e1d84: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x2e1d84u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
label_2e1d88:
    // 0x2e1d88: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x2e1d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_2e1d8c:
    // 0x2e1d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e1d90:
    // 0x2e1d90: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x2e1d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_2e1d94:
    // 0x2e1d94: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e1d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1d98:
    // 0x2e1d98: 0x0  nop
    ctx->pc = 0x2e1d98u;
    // NOP
label_2e1d9c:
    // 0x2e1d9c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2e1da0:
    if (ctx->pc == 0x2E1DA0u) {
        ctx->pc = 0x2E1DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D9Cu;
        // 0x2e1da0: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1DA4u;
        goto label_2e1da4;
    }
    ctx->pc = 0x2E1D9Cu;
    {
        const bool branch_taken_0x2e1d9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D9Cu;
        // 0x2e1da0: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d9c) {
            ctx->pc = 0x2E1DACu;
            goto label_2e1dac;
        }
    }
    ctx->pc = 0x2E1DA4u;
label_2e1da4:
    // 0x2e1da4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e1da4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2e1da8:
    // 0x2e1da8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2e1da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1dac:
    // 0x2e1dac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2e1dacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2e1db0:
    // 0x2e1db0: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x2e1db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2e1db4:
    // 0x2e1db4: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_2e1db8:
    if (ctx->pc == 0x2E1DB8u) {
        ctx->pc = 0x2E1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DB4u;
        // 0x2e1db8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1DBCu;
        goto label_2e1dbc;
    }
    ctx->pc = 0x2E1DB4u;
    {
        const bool branch_taken_0x2e1db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DB4u;
        // 0x2e1db8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1db4) {
            ctx->pc = 0x2E1D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e1d00;
        }
    }
    ctx->pc = 0x2E1DBCu;
label_2e1dbc:
    // 0x2e1dbc: 0x52600008  beql        $s3, $zero, . + 4 + (0x8 << 2)
label_2e1dc0:
    if (ctx->pc == 0x2E1DC0u) {
        ctx->pc = 0x2E1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DBCu;
        // 0x2e1dc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1DC4u;
        goto label_2e1dc4;
    }
    ctx->pc = 0x2E1DBCu;
    {
        const bool branch_taken_0x2e1dbc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1dbc) {
            ctx->pc = 0x2E1DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1DBCu;
            // 0x2e1dc0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1DE0u;
            goto label_2e1de0;
        }
    }
    ctx->pc = 0x2E1DC4u;
label_2e1dc4:
    // 0x2e1dc4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e1dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e1dc8:
    // 0x2e1dc8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2e1dc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2e1dcc:
    // 0x2e1dcc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2e1dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2e1dd0:
    // 0x2e1dd0: 0x40f809  jalr        $v0
label_2e1dd4:
    if (ctx->pc == 0x2E1DD4u) {
        ctx->pc = 0x2E1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DD0u;
        // 0x2e1dd4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1DD8u;
        goto label_2e1dd8;
    }
    ctx->pc = 0x2E1DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1DD8u);
        ctx->pc = 0x2E1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DD0u;
        // 0x2e1dd4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1DD0u, 0x2E1DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1DD8u;
label_2e1dd8:
    // 0x2e1dd8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2e1dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2e1ddc:
    // 0x2e1ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e1ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1de0:
    // 0x2e1de0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2e1de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2e1de4:
    // 0x2e1de4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2e1de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2e1de8:
    // 0x2e1de8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2e1de8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2e1dec:
    // 0x2e1dec: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2e1decu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e1df0:
    // 0x2e1df0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2e1df0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e1df4:
    // 0x2e1df4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2e1df4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e1df8:
    // 0x2e1df8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2e1df8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e1dfc:
    // 0x2e1dfc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e1dfcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2e1e00:
    // 0x2e1e00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e1e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e1e04:
    // 0x2e1e04: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2e1e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e1e08:
    // 0x2e1e08: 0x3e00008  jr          $ra
label_2e1e0c:
    if (ctx->pc == 0x2E1E0Cu) {
        ctx->pc = 0x2E1E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E08u;
        // 0x2e1e0c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1E10u;
        goto label_fallthrough_0x2e1e08;
    }
    ctx->pc = 0x2E1E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1E08u;
        // 0x2e1e0c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e1e08:
    ctx->pc = 0x2E1E10u;
}
