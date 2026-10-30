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

// Function: sub_003A8C60
// Address: 0x3a8c60 - 0x3a8db0
void sub_003A8C60_0x3a8c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8C60_0x3a8c60");
#endif

    switch (ctx->pc) {
        case 0x3a8c60u: goto label_3a8c60;
        case 0x3a8c64u: goto label_3a8c64;
        case 0x3a8c68u: goto label_3a8c68;
        case 0x3a8c6cu: goto label_3a8c6c;
        case 0x3a8c70u: goto label_3a8c70;
        case 0x3a8c74u: goto label_3a8c74;
        case 0x3a8c78u: goto label_3a8c78;
        case 0x3a8c7cu: goto label_3a8c7c;
        case 0x3a8c80u: goto label_3a8c80;
        case 0x3a8c84u: goto label_3a8c84;
        case 0x3a8c88u: goto label_3a8c88;
        case 0x3a8c8cu: goto label_3a8c8c;
        case 0x3a8c90u: goto label_3a8c90;
        case 0x3a8c94u: goto label_3a8c94;
        case 0x3a8c98u: goto label_3a8c98;
        case 0x3a8c9cu: goto label_3a8c9c;
        case 0x3a8ca0u: goto label_3a8ca0;
        case 0x3a8ca4u: goto label_3a8ca4;
        case 0x3a8ca8u: goto label_3a8ca8;
        case 0x3a8cacu: goto label_3a8cac;
        case 0x3a8cb0u: goto label_3a8cb0;
        case 0x3a8cb4u: goto label_3a8cb4;
        case 0x3a8cb8u: goto label_3a8cb8;
        case 0x3a8cbcu: goto label_3a8cbc;
        case 0x3a8cc0u: goto label_3a8cc0;
        case 0x3a8cc4u: goto label_3a8cc4;
        case 0x3a8cc8u: goto label_3a8cc8;
        case 0x3a8cccu: goto label_3a8ccc;
        case 0x3a8cd0u: goto label_3a8cd0;
        case 0x3a8cd4u: goto label_3a8cd4;
        case 0x3a8cd8u: goto label_3a8cd8;
        case 0x3a8cdcu: goto label_3a8cdc;
        case 0x3a8ce0u: goto label_3a8ce0;
        case 0x3a8ce4u: goto label_3a8ce4;
        case 0x3a8ce8u: goto label_3a8ce8;
        case 0x3a8cecu: goto label_3a8cec;
        case 0x3a8cf0u: goto label_3a8cf0;
        case 0x3a8cf4u: goto label_3a8cf4;
        case 0x3a8cf8u: goto label_3a8cf8;
        case 0x3a8cfcu: goto label_3a8cfc;
        case 0x3a8d00u: goto label_3a8d00;
        case 0x3a8d04u: goto label_3a8d04;
        case 0x3a8d08u: goto label_3a8d08;
        case 0x3a8d0cu: goto label_3a8d0c;
        case 0x3a8d10u: goto label_3a8d10;
        case 0x3a8d14u: goto label_3a8d14;
        case 0x3a8d18u: goto label_3a8d18;
        case 0x3a8d1cu: goto label_3a8d1c;
        case 0x3a8d20u: goto label_3a8d20;
        case 0x3a8d24u: goto label_3a8d24;
        case 0x3a8d28u: goto label_3a8d28;
        case 0x3a8d2cu: goto label_3a8d2c;
        case 0x3a8d30u: goto label_3a8d30;
        case 0x3a8d34u: goto label_3a8d34;
        case 0x3a8d38u: goto label_3a8d38;
        case 0x3a8d3cu: goto label_3a8d3c;
        case 0x3a8d40u: goto label_3a8d40;
        case 0x3a8d44u: goto label_3a8d44;
        case 0x3a8d48u: goto label_3a8d48;
        case 0x3a8d4cu: goto label_3a8d4c;
        case 0x3a8d50u: goto label_3a8d50;
        case 0x3a8d54u: goto label_3a8d54;
        case 0x3a8d58u: goto label_3a8d58;
        case 0x3a8d5cu: goto label_3a8d5c;
        case 0x3a8d60u: goto label_3a8d60;
        case 0x3a8d64u: goto label_3a8d64;
        case 0x3a8d68u: goto label_3a8d68;
        case 0x3a8d6cu: goto label_3a8d6c;
        case 0x3a8d70u: goto label_3a8d70;
        case 0x3a8d74u: goto label_3a8d74;
        case 0x3a8d78u: goto label_3a8d78;
        case 0x3a8d7cu: goto label_3a8d7c;
        case 0x3a8d80u: goto label_3a8d80;
        case 0x3a8d84u: goto label_3a8d84;
        case 0x3a8d88u: goto label_3a8d88;
        case 0x3a8d8cu: goto label_3a8d8c;
        case 0x3a8d90u: goto label_3a8d90;
        case 0x3a8d94u: goto label_3a8d94;
        case 0x3a8d98u: goto label_3a8d98;
        case 0x3a8d9cu: goto label_3a8d9c;
        case 0x3a8da0u: goto label_3a8da0;
        case 0x3a8da4u: goto label_3a8da4;
        case 0x3a8da8u: goto label_3a8da8;
        case 0x3a8dacu: goto label_3a8dac;
        default: break;
    }

    ctx->pc = 0x3a8c60u;

label_3a8c60:
    // 0x3a8c60: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3a8c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3a8c64:
    // 0x3a8c64: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3a8c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3a8c68:
    // 0x3a8c68: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3a8c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3a8c6c:
    // 0x3a8c6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a8c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a8c70:
    // 0x3a8c70: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3a8c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3a8c74:
    // 0x3a8c74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a8c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a8c78:
    // 0x3a8c78: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3a8c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3a8c7c:
    // 0x3a8c7c: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3a8c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3a8c80:
    // 0x3a8c80: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a8c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3a8c84:
    // 0x3a8c84: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3a8c84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3a8c88:
    // 0x3a8c88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3a8c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3a8c8c:
    // 0x3a8c8c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a8c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a8c90:
    // 0x3a8c90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a8c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a8c94:
    // 0x3a8c94: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3a8c94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3a8c98:
    // 0x3a8c98: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3a8c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3a8c9c:
    // 0x3a8c9c: 0x40f809  jalr        $v0
label_3a8ca0:
    if (ctx->pc == 0x3A8CA0u) {
        ctx->pc = 0x3A8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C9Cu;
        // 0x3a8ca0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8CA4u;
        goto label_3a8ca4;
    }
    ctx->pc = 0x3A8C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A8CA4u);
        ctx->pc = 0x3A8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C9Cu;
        // 0x3a8ca0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8C9Cu, 0x3A8CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8CA4u;
label_3a8ca4:
    // 0x3a8ca4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3a8ca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8ca8:
    // 0x3a8ca8: 0xc0ea146  jal         func_3A8518
label_3a8cac:
    if (ctx->pc == 0x3A8CACu) {
        ctx->pc = 0x3A8CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CA8u;
        // 0x3a8cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8CB0u;
        goto label_3a8cb0;
    }
    ctx->pc = 0x3A8CA8u;
    SET_GPR_U32(ctx, 31, 0x3A8CB0u);
    ctx->pc = 0x3A8CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CA8u;
    // 0x3a8cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A8CA8u, 0x3A8CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CB0u;
label_3a8cb0:
    // 0x3a8cb0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a8cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a8cb4:
    // 0x3a8cb4: 0xc0ea12a  jal         func_3A84A8
label_3a8cb8:
    if (ctx->pc == 0x3A8CB8u) {
        ctx->pc = 0x3A8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CB4u;
        // 0x3a8cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8CBCu;
        goto label_3a8cbc;
    }
    ctx->pc = 0x3A8CB4u;
    SET_GPR_U32(ctx, 31, 0x3A8CBCu);
    ctx->pc = 0x3A8CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CB4u;
    // 0x3a8cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A8CB4u, 0x3A8CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CBCu;
label_3a8cbc:
    // 0x3a8cbc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a8cbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a8cc0:
    // 0x3a8cc0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a8cc4:
    // 0x3a8cc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a8cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a8cc8:
    // 0x3a8cc8: 0xc0ea12a  jal         func_3A84A8
label_3a8ccc:
    if (ctx->pc == 0x3A8CCCu) {
        ctx->pc = 0x3A8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CC8u;
        // 0x3a8ccc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8CD0u;
        goto label_3a8cd0;
    }
    ctx->pc = 0x3A8CC8u;
    SET_GPR_U32(ctx, 31, 0x3A8CD0u);
    ctx->pc = 0x3A8CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CC8u;
    // 0x3a8ccc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3A8CC8u, 0x3A8CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CD0u;
label_3a8cd0:
    // 0x3a8cd0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a8cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a8cd4:
    // 0x3a8cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a8cd8:
    // 0x3a8cd8: 0xc0ea146  jal         func_3A8518
label_3a8cdc:
    if (ctx->pc == 0x3A8CDCu) {
        ctx->pc = 0x3A8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CD8u;
        // 0x3a8cdc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8CE0u;
        goto label_3a8ce0;
    }
    ctx->pc = 0x3A8CD8u;
    SET_GPR_U32(ctx, 31, 0x3A8CE0u);
    ctx->pc = 0x3A8CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CD8u;
    // 0x3a8cdc: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A8CD8u, 0x3A8CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CE0u;
label_3a8ce0:
    // 0x3a8ce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a8ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8ce4:
    // 0x3a8ce4: 0xc0ea14c  jal         func_3A8530
label_3a8ce8:
    if (ctx->pc == 0x3A8CE8u) {
        ctx->pc = 0x3A8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CE4u;
        // 0x3a8ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8CECu;
        goto label_3a8cec;
    }
    ctx->pc = 0x3A8CE4u;
    SET_GPR_U32(ctx, 31, 0x3A8CECu);
    ctx->pc = 0x3A8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CE4u;
    // 0x3a8ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3A8CE4u, 0x3A8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CECu;
label_3a8cec:
    // 0x3a8cec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a8cecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8cf0:
    // 0x3a8cf0: 0xc0ea146  jal         func_3A8518
label_3a8cf4:
    if (ctx->pc == 0x3A8CF4u) {
        ctx->pc = 0x3A8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CF0u;
        // 0x3a8cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8CF8u;
        goto label_3a8cf8;
    }
    ctx->pc = 0x3A8CF0u;
    SET_GPR_U32(ctx, 31, 0x3A8CF8u);
    ctx->pc = 0x3A8CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CF0u;
    // 0x3a8cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3A8CF0u, 0x3A8CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CF8u;
label_3a8cf8:
    // 0x3a8cf8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a8cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a8cfc:
    // 0x3a8cfc: 0xc0e858c  jal         func_3A1630
label_3a8d00:
    if (ctx->pc == 0x3A8D00u) {
        ctx->pc = 0x3A8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CFCu;
        // 0x3a8d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8D04u;
        goto label_3a8d04;
    }
    ctx->pc = 0x3A8CFCu;
    SET_GPR_U32(ctx, 31, 0x3A8D04u);
    ctx->pc = 0x3A8D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CFCu;
    // 0x3a8d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3A8CFCu, 0x3A8D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D04u;
label_3a8d04:
    // 0x3a8d04: 0xe63400bc  swc1        $f20, 0xBC($s1)
    ctx->pc = 0x3a8d04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3a8d08:
    // 0x3a8d08: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3a8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3a8d0c:
    // 0x3a8d0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a8d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a8d10:
    // 0x3a8d10: 0xc0e896e  jal         func_3A25B8
label_3a8d14:
    if (ctx->pc == 0x3A8D14u) {
        ctx->pc = 0x3A8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D10u;
        // 0x3a8d14: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8D18u;
        goto label_3a8d18;
    }
    ctx->pc = 0x3A8D10u;
    SET_GPR_U32(ctx, 31, 0x3A8D18u);
    ctx->pc = 0x3A8D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D10u;
    // 0x3a8d14: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3A8D10u, 0x3A8D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D18u;
label_3a8d18:
    // 0x3a8d18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a8d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8d1c:
    // 0x3a8d1c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a8d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a8d20:
    // 0x3a8d20: 0xc0e8604  jal         func_3A1810
label_3a8d24:
    if (ctx->pc == 0x3A8D24u) {
        ctx->pc = 0x3A8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D20u;
        // 0x3a8d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8D28u;
        goto label_3a8d28;
    }
    ctx->pc = 0x3A8D20u;
    SET_GPR_U32(ctx, 31, 0x3A8D28u);
    ctx->pc = 0x3A8D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D20u;
    // 0x3a8d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1810u, 0x3A8D20u, 0x3A8D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D28u;
label_3a8d28:
    // 0x3a8d28: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3a8d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3a8d2c:
    // 0x3a8d2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3a8d2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3a8d30:
    // 0x3a8d30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a8d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a8d34:
    // 0x3a8d34: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x3a8d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3a8d38:
    // 0x3a8d38: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x3a8d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_3a8d3c:
    // 0x3a8d3c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a8d3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3a8d40:
    // 0x3a8d40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a8d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3a8d44:
    // 0x3a8d44: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3a8d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3a8d48:
    // 0x3a8d48: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3a8d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3a8d4c:
    // 0x3a8d4c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3a8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3a8d50:
    // 0x3a8d50: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x3a8d50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_3a8d54:
    // 0x3a8d54: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3a8d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3a8d58:
    // 0x3a8d58: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3a8d58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a8d5c:
    // 0x3a8d5c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3a8d5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a8d60:
    // 0x3a8d60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a8d60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a8d64:
    // 0x3a8d64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a8d64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a8d68:
    // 0x3a8d68: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a8d68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a8d6c:
    // 0x3a8d6c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a8d6cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a8d70:
    // 0x3a8d70: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a8d70u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3a8d74:
    // 0x3a8d74: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3a8d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3a8d78:
    // 0x3a8d78: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3a8d78u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3a8d7c:
    // 0x3a8d7c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3a8d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3a8d80:
    // 0x3a8d80: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3a8d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3a8d84:
    // 0x3a8d84: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a8d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3a8d88:
    // 0x3a8d88: 0xae930000  sw          $s3, 0x0($s4)
    ctx->pc = 0x3a8d88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 19));
label_3a8d8c:
    // 0x3a8d8c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3a8d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a8d90:
    // 0x3a8d90: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3a8d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a8d94:
    // 0x3a8d94: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3a8d94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a8d98:
    // 0x3a8d98: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3a8d98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a8d9c:
    // 0x3a8d9c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a8d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3a8da0:
    // 0x3a8da0: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3a8da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a8da4:
    // 0x3a8da4: 0x3e00008  jr          $ra
label_3a8da8:
    if (ctx->pc == 0x3A8DA8u) {
        ctx->pc = 0x3A8DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DA4u;
        // 0x3a8da8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8DACu;
        goto label_3a8dac;
    }
    ctx->pc = 0x3A8DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DA4u;
        // 0x3a8da8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8DACu;
label_3a8dac:
    // 0x3a8dac: 0x0  nop
    ctx->pc = 0x3a8dacu;
    // NOP
    ctx->pc = 0x3a8db0u;
}
