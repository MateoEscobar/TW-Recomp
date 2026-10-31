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

// Function: sub_001F1C78
// Address: 0x1f1c78 - 0x1f1e00
void sub_001F1C78_0x1f1c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1C78_0x1f1c78");
#endif

    switch (ctx->pc) {
        case 0x1f1c78u: goto label_1f1c78;
        case 0x1f1c7cu: goto label_1f1c7c;
        case 0x1f1c80u: goto label_1f1c80;
        case 0x1f1c84u: goto label_1f1c84;
        case 0x1f1c88u: goto label_1f1c88;
        case 0x1f1c8cu: goto label_1f1c8c;
        case 0x1f1c90u: goto label_1f1c90;
        case 0x1f1c94u: goto label_1f1c94;
        case 0x1f1c98u: goto label_1f1c98;
        case 0x1f1c9cu: goto label_1f1c9c;
        case 0x1f1ca0u: goto label_1f1ca0;
        case 0x1f1ca4u: goto label_1f1ca4;
        case 0x1f1ca8u: goto label_1f1ca8;
        case 0x1f1cacu: goto label_1f1cac;
        case 0x1f1cb0u: goto label_1f1cb0;
        case 0x1f1cb4u: goto label_1f1cb4;
        case 0x1f1cb8u: goto label_1f1cb8;
        case 0x1f1cbcu: goto label_1f1cbc;
        case 0x1f1cc0u: goto label_1f1cc0;
        case 0x1f1cc4u: goto label_1f1cc4;
        case 0x1f1cc8u: goto label_1f1cc8;
        case 0x1f1cccu: goto label_1f1ccc;
        case 0x1f1cd0u: goto label_1f1cd0;
        case 0x1f1cd4u: goto label_1f1cd4;
        case 0x1f1cd8u: goto label_1f1cd8;
        case 0x1f1cdcu: goto label_1f1cdc;
        case 0x1f1ce0u: goto label_1f1ce0;
        case 0x1f1ce4u: goto label_1f1ce4;
        case 0x1f1ce8u: goto label_1f1ce8;
        case 0x1f1cecu: goto label_1f1cec;
        case 0x1f1cf0u: goto label_1f1cf0;
        case 0x1f1cf4u: goto label_1f1cf4;
        case 0x1f1cf8u: goto label_1f1cf8;
        case 0x1f1cfcu: goto label_1f1cfc;
        case 0x1f1d00u: goto label_1f1d00;
        case 0x1f1d04u: goto label_1f1d04;
        case 0x1f1d08u: goto label_1f1d08;
        case 0x1f1d0cu: goto label_1f1d0c;
        case 0x1f1d10u: goto label_1f1d10;
        case 0x1f1d14u: goto label_1f1d14;
        case 0x1f1d18u: goto label_1f1d18;
        case 0x1f1d1cu: goto label_1f1d1c;
        case 0x1f1d20u: goto label_1f1d20;
        case 0x1f1d24u: goto label_1f1d24;
        case 0x1f1d28u: goto label_1f1d28;
        case 0x1f1d2cu: goto label_1f1d2c;
        case 0x1f1d30u: goto label_1f1d30;
        case 0x1f1d34u: goto label_1f1d34;
        case 0x1f1d38u: goto label_1f1d38;
        case 0x1f1d3cu: goto label_1f1d3c;
        case 0x1f1d40u: goto label_1f1d40;
        case 0x1f1d44u: goto label_1f1d44;
        case 0x1f1d48u: goto label_1f1d48;
        case 0x1f1d4cu: goto label_1f1d4c;
        case 0x1f1d50u: goto label_1f1d50;
        case 0x1f1d54u: goto label_1f1d54;
        case 0x1f1d58u: goto label_1f1d58;
        case 0x1f1d5cu: goto label_1f1d5c;
        case 0x1f1d60u: goto label_1f1d60;
        case 0x1f1d64u: goto label_1f1d64;
        case 0x1f1d68u: goto label_1f1d68;
        case 0x1f1d6cu: goto label_1f1d6c;
        case 0x1f1d70u: goto label_1f1d70;
        case 0x1f1d74u: goto label_1f1d74;
        case 0x1f1d78u: goto label_1f1d78;
        case 0x1f1d7cu: goto label_1f1d7c;
        case 0x1f1d80u: goto label_1f1d80;
        case 0x1f1d84u: goto label_1f1d84;
        case 0x1f1d88u: goto label_1f1d88;
        case 0x1f1d8cu: goto label_1f1d8c;
        case 0x1f1d90u: goto label_1f1d90;
        case 0x1f1d94u: goto label_1f1d94;
        case 0x1f1d98u: goto label_1f1d98;
        case 0x1f1d9cu: goto label_1f1d9c;
        case 0x1f1da0u: goto label_1f1da0;
        case 0x1f1da4u: goto label_1f1da4;
        case 0x1f1da8u: goto label_1f1da8;
        case 0x1f1dacu: goto label_1f1dac;
        case 0x1f1db0u: goto label_1f1db0;
        case 0x1f1db4u: goto label_1f1db4;
        case 0x1f1db8u: goto label_1f1db8;
        case 0x1f1dbcu: goto label_1f1dbc;
        case 0x1f1dc0u: goto label_1f1dc0;
        case 0x1f1dc4u: goto label_1f1dc4;
        case 0x1f1dc8u: goto label_1f1dc8;
        case 0x1f1dccu: goto label_1f1dcc;
        case 0x1f1dd0u: goto label_1f1dd0;
        case 0x1f1dd4u: goto label_1f1dd4;
        case 0x1f1dd8u: goto label_1f1dd8;
        case 0x1f1ddcu: goto label_1f1ddc;
        case 0x1f1de0u: goto label_1f1de0;
        case 0x1f1de4u: goto label_1f1de4;
        case 0x1f1de8u: goto label_1f1de8;
        case 0x1f1decu: goto label_1f1dec;
        case 0x1f1df0u: goto label_1f1df0;
        case 0x1f1df4u: goto label_1f1df4;
        case 0x1f1df8u: goto label_1f1df8;
        case 0x1f1dfcu: goto label_1f1dfc;
        default: break;
    }

    ctx->pc = 0x1f1c78u;

label_1f1c78:
    // 0x1f1c78: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f1c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1f1c7c:
    // 0x1f1c7c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1f1c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1f1c80:
    // 0x1f1c80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1c80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1c84:
    // 0x1f1c84: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1f1c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1f1c88:
    // 0x1f1c88: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1f1c88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1f1c8c:
    // 0x1f1c8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f1c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1f1c90:
    // 0x1f1c90: 0xc047e6c  jal         func_11F9B0
label_1f1c94:
    if (ctx->pc == 0x1F1C94u) {
        ctx->pc = 0x1F1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1C90u;
        // 0x1f1c94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1C98u;
        goto label_1f1c98;
    }
    ctx->pc = 0x1F1C90u;
    SET_GPR_U32(ctx, 31, 0x1F1C98u);
    ctx->pc = 0x1F1C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1C90u;
    // 0x1f1c94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1F1C90u, 0x1F1C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1C98u;
label_1f1c98:
    // 0x1f1c98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1c9c:
    // 0x1f1c9c: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x1f1c9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_1f1ca0:
    // 0x1f1ca0: 0x8c650224  lw          $a1, 0x224($v1)
    ctx->pc = 0x1f1ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_1f1ca4:
    // 0x1f1ca4: 0xa0f809  jalr        $a1
label_1f1ca8:
    if (ctx->pc == 0x1F1CA8u) {
        ctx->pc = 0x1F1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CA4u;
        // 0x1f1ca8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1CACu;
        goto label_1f1cac;
    }
    ctx->pc = 0x1F1CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F1CACu);
        ctx->pc = 0x1F1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CA4u;
        // 0x1f1ca8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1CA4u, 0x1F1CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1CACu;
label_1f1cac:
    // 0x1f1cac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1f1cacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f1cb0:
    // 0x1f1cb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f1cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f1cb4:
    // 0x1f1cb4: 0xc0cd7d2  jal         func_335F48
label_1f1cb8:
    if (ctx->pc == 0x1F1CB8u) {
        ctx->pc = 0x1F1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CB4u;
        // 0x1f1cb8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1CBCu;
        goto label_1f1cbc;
    }
    ctx->pc = 0x1F1CB4u;
    SET_GPR_U32(ctx, 31, 0x1F1CBCu);
    ctx->pc = 0x1F1CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CB4u;
    // 0x1f1cb8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x1F1CB4u, 0x1F1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CBCu;
label_1f1cbc:
    // 0x1f1cbc: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f1cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1f1cc0:
    // 0x1f1cc0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1f1cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1f1cc4:
    // 0x1f1cc4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f1cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f1cc8:
    // 0x1f1cc8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1f1cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1f1ccc:
    // 0x1f1ccc: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1f1cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_1f1cd0:
    // 0x1f1cd0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1f1cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_1f1cd4:
    // 0x1f1cd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f1cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f1cd8:
    // 0x1f1cd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f1cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1cdc:
    // 0x1f1cdc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1f1cdcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1f1ce0:
    // 0x1f1ce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f1ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ce4:
    // 0x1f1ce4: 0x24a572a0  addiu       $a1, $a1, 0x72A0
    ctx->pc = 0x1f1ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29344));
label_1f1ce8:
    // 0x1f1ce8: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x1f1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1f1cec:
    // 0x1f1cec: 0xc05a872  jal         func_16A1C8
label_1f1cf0:
    if (ctx->pc == 0x1F1CF0u) {
        ctx->pc = 0x1F1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CECu;
        // 0x1f1cf0: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1CF4u;
        goto label_1f1cf4;
    }
    ctx->pc = 0x1F1CECu;
    SET_GPR_U32(ctx, 31, 0x1F1CF4u);
    ctx->pc = 0x1F1CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CECu;
    // 0x1f1cf0: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A1C8u, 0x1F1CECu, 0x1F1CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1CF4u;
label_1f1cf4:
    // 0x1f1cf4: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x1f1cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_1f1cf8:
    // 0x1f1cf8: 0xa622006c  sh          $v0, 0x6C($s1)
    ctx->pc = 0x1f1cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 108), (uint16_t)GPR_U32(ctx, 2));
label_1f1cfc:
    // 0x1f1cfc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1f1cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f1d00:
    // 0x1f1d00: 0x246772b0  addiu       $a3, $v1, 0x72B0
    ctx->pc = 0x1f1d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 29360));
label_1f1d04:
    // 0x1f1d04: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x1f1d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1f1d08:
    // 0x1f1d08: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x1f1d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1f1d0c:
    // 0x1f1d0c: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1f1d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1f1d10:
    // 0x1f1d10: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1f1d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f1d14:
    // 0x1f1d14: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1f1d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f1d18:
    // 0x1f1d18: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1f1d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_1f1d1c:
    // 0x1f1d1c: 0xc046e0e  jal         func_11B838
label_1f1d20:
    if (ctx->pc == 0x1F1D20u) {
        ctx->pc = 0x1F1D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D1Cu;
        // 0x1f1d20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1D24u;
        goto label_1f1d24;
    }
    ctx->pc = 0x1F1D1Cu;
    SET_GPR_U32(ctx, 31, 0x1F1D24u);
    ctx->pc = 0x1F1D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D1Cu;
    // 0x1f1d20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x1F1D1Cu, 0x1F1D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D24u;
label_1f1d24:
    // 0x1f1d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f1d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1d28:
    // 0x1f1d28: 0xc046e5c  jal         func_11B970
label_1f1d2c:
    if (ctx->pc == 0x1F1D2Cu) {
        ctx->pc = 0x1F1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D28u;
        // 0x1f1d2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1D30u;
        goto label_1f1d30;
    }
    ctx->pc = 0x1F1D28u;
    SET_GPR_U32(ctx, 31, 0x1F1D30u);
    ctx->pc = 0x1F1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D28u;
    // 0x1f1d2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B970u, 0x1F1D28u, 0x1F1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D30u;
label_1f1d30:
    // 0x1f1d30: 0x8629006c  lh          $t1, 0x6C($s1)
    ctx->pc = 0x1f1d30u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 108)));
label_1f1d34:
    // 0x1f1d34: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x1f1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_1f1d38:
    // 0x1f1d38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f1d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1d3c:
    // 0x1f1d3c: 0x248472c0  addiu       $a0, $a0, 0x72C0
    ctx->pc = 0x1f1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29376));
label_1f1d40:
    // 0x1f1d40: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f1d40u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f1d44:
    // 0x1f1d44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f1d44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1d48:
    // 0x1f1d48: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f1d48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1d4c:
    // 0x1f1d4c: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x1f1d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1f1d50:
    // 0x1f1d50: 0xc08cf58  jal         func_233D60
label_1f1d54:
    if (ctx->pc == 0x1F1D54u) {
        ctx->pc = 0x1F1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D50u;
        // 0x1f1d54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1D58u;
        goto label_1f1d58;
    }
    ctx->pc = 0x1F1D50u;
    SET_GPR_U32(ctx, 31, 0x1F1D58u);
    ctx->pc = 0x1F1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D50u;
    // 0x1f1d54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D60u, 0x1F1D50u, 0x1F1D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D58u;
label_1f1d58:
    // 0x1f1d58: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1f1d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1f1d5c:
    // 0x1f1d5c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1f1d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1f1d60:
    // 0x1f1d60: 0xc0e4060  jal         func_390180
label_1f1d64:
    if (ctx->pc == 0x1F1D64u) {
        ctx->pc = 0x1F1D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D60u;
        // 0x1f1d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1D68u;
        goto label_1f1d68;
    }
    ctx->pc = 0x1F1D60u;
    SET_GPR_U32(ctx, 31, 0x1F1D68u);
    ctx->pc = 0x1F1D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D60u;
    // 0x1f1d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1F1D60u, 0x1F1D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D68u;
label_1f1d68:
    // 0x1f1d68: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1f1d6c:
    if (ctx->pc == 0x1F1D6Cu) {
        ctx->pc = 0x1F1D70u;
        goto label_1f1d70;
    }
    ctx->pc = 0x1F1D68u;
    {
        const bool branch_taken_0x1f1d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d68) {
            ctx->pc = 0x1F1DDCu;
            goto label_1f1ddc;
        }
    }
    ctx->pc = 0x1F1D70u;
label_1f1d70:
    // 0x1f1d70: 0xc0e409a  jal         func_390268
label_1f1d74:
    if (ctx->pc == 0x1F1D74u) {
        ctx->pc = 0x1F1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D70u;
        // 0x1f1d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1D78u;
        goto label_1f1d78;
    }
    ctx->pc = 0x1F1D70u;
    SET_GPR_U32(ctx, 31, 0x1F1D78u);
    ctx->pc = 0x1F1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D70u;
    // 0x1f1d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F1D70u, 0x1F1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D78u;
label_1f1d78:
    // 0x1f1d78: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1f1d7c:
    if (ctx->pc == 0x1F1D7Cu) {
        ctx->pc = 0x1F1D80u;
        goto label_1f1d80;
    }
    ctx->pc = 0x1F1D78u;
    {
        const bool branch_taken_0x1f1d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d78) {
            ctx->pc = 0x1F1DDCu;
            goto label_1f1ddc;
        }
    }
    ctx->pc = 0x1F1D80u;
label_1f1d80:
    // 0x1f1d80: 0xc0e409a  jal         func_390268
label_1f1d84:
    if (ctx->pc == 0x1F1D84u) {
        ctx->pc = 0x1F1D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D80u;
        // 0x1f1d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1D88u;
        goto label_1f1d88;
    }
    ctx->pc = 0x1F1D80u;
    SET_GPR_U32(ctx, 31, 0x1F1D88u);
    ctx->pc = 0x1F1D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D80u;
    // 0x1f1d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F1D80u, 0x1F1D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D88u;
label_1f1d88:
    // 0x1f1d88: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1d8c:
    // 0x1f1d8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1d90:
    // 0x1f1d90: 0xc0a48cc  jal         func_292330
label_1f1d94:
    if (ctx->pc == 0x1F1D94u) {
        ctx->pc = 0x1F1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D90u;
        // 0x1f1d94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1D98u;
        goto label_1f1d98;
    }
    ctx->pc = 0x1F1D90u;
    SET_GPR_U32(ctx, 31, 0x1F1D98u);
    ctx->pc = 0x1F1D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D90u;
    // 0x1f1d94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292330u, 0x1F1D90u, 0x1F1D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1D98u;
label_1f1d98:
    // 0x1f1d98: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f1d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1d9c:
    // 0x1f1d9c: 0xc08d3be  jal         func_234EF8
label_1f1da0:
    if (ctx->pc == 0x1F1DA0u) {
        ctx->pc = 0x1F1DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D9Cu;
        // 0x1f1da0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1DA4u;
        goto label_1f1da4;
    }
    ctx->pc = 0x1F1D9Cu;
    SET_GPR_U32(ctx, 31, 0x1F1DA4u);
    ctx->pc = 0x1F1DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D9Cu;
    // 0x1f1da0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234EF8u, 0x1F1D9Cu, 0x1F1DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DA4u;
label_1f1da4:
    // 0x1f1da4: 0xa2000284  sb          $zero, 0x284($s0)
    ctx->pc = 0x1f1da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
label_1f1da8:
    // 0x1f1da8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f1da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f1dac:
    // 0x1f1dac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f1dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f1db0:
    // 0x1f1db0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f1db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1f1db4:
    // 0x1f1db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f1db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f1db8:
    // 0x1f1db8: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1f1db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f1dbc:
    // 0x1f1dbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1dc0:
    // 0x1f1dc0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1f1dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f1dc4:
    // 0x1f1dc4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1f1dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f1dc8:
    // 0x1f1dc8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1f1dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1f1dcc:
    // 0x1f1dcc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1f1dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1f1dd0:
    // 0x1f1dd0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1f1dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1f1dd4:
    // 0x1f1dd4: 0xc086c2e  jal         func_21B0B8
label_1f1dd8:
    if (ctx->pc == 0x1F1DD8u) {
        ctx->pc = 0x1F1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DD4u;
        // 0x1f1dd8: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1DDCu;
        goto label_1f1ddc;
    }
    ctx->pc = 0x1F1DD4u;
    SET_GPR_U32(ctx, 31, 0x1F1DDCu);
    ctx->pc = 0x1F1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DD4u;
    // 0x1f1dd8: 0xe443000c  swc1        $f3, 0xC($v0) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x1F1DD4u, 0x1F1DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DDCu;
label_1f1ddc:
    // 0x1f1ddc: 0xc07f8b0  jal         func_1FE2C0
label_1f1de0:
    if (ctx->pc == 0x1F1DE0u) {
        ctx->pc = 0x1F1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DDCu;
        // 0x1f1de0: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1DE4u;
        goto label_1f1de4;
    }
    ctx->pc = 0x1F1DDCu;
    SET_GPR_U32(ctx, 31, 0x1F1DE4u);
    ctx->pc = 0x1F1DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DDCu;
    // 0x1f1de0: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2C0u, 0x1F1DDCu, 0x1F1DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1DE4u;
label_1f1de4:
    // 0x1f1de4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1f1de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f1de8:
    // 0x1f1de8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1f1de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f1dec:
    // 0x1f1dec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f1decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f1df0:
    // 0x1f1df0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1f1df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f1df4:
    // 0x1f1df4: 0x3e00008  jr          $ra
label_1f1df8:
    if (ctx->pc == 0x1F1DF8u) {
        ctx->pc = 0x1F1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DF4u;
        // 0x1f1df8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1DFCu;
        goto label_1f1dfc;
    }
    ctx->pc = 0x1F1DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DF4u;
        // 0x1f1df8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1DFCu;
label_1f1dfc:
    // 0x1f1dfc: 0x0  nop
    ctx->pc = 0x1f1dfcu;
    // NOP
    ctx->pc = 0x1f1e00u;
}
