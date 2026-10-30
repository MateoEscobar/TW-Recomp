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

// Function: sub_002E4CF0
// Address: 0x2e4cf0 - 0x2e4e28
void sub_002E4CF0_0x2e4cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4CF0_0x2e4cf0");
#endif

    switch (ctx->pc) {
        case 0x2e4d3cu: goto label_2e4d3c;
        case 0x2e4d44u: goto label_2e4d44;
        case 0x2e4d54u: goto label_2e4d54;
        case 0x2e4d8cu: goto label_2e4d8c;
        case 0x2e4d94u: goto label_2e4d94;
        case 0x2e4dbcu: goto label_2e4dbc;
        case 0x2e4dc8u: goto label_2e4dc8;
        case 0x2e4df8u: goto label_2e4df8;
        default: break;
    }

    ctx->pc = 0x2e4cf0u;

    // 0x2e4cf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e4cf4: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e4cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e4cf8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2e4cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2e4cfc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2e4cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e4d00: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2e4d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2e4d04: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2e4d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d08: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2e4d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2e4d0c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e4d0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e4d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e4d14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e4d14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d18: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2e4d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2e4d1c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2e4d1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d20: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2e4d20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2e4d24: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x2e4d24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d28: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2e4d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2e4d2c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2e4d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2e4d30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e4d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e4d34: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E4D34u;
    SET_GPR_U32(ctx, 31, 0x2E4D3Cu);
    ctx->pc = 0x2E4D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D34u;
    // 0x2e4d38: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E4D34u, 0x2E4D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D3Cu;
label_2e4d3c:
    // 0x2e4d3c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E4D3Cu;
    SET_GPR_U32(ctx, 31, 0x2E4D44u);
    ctx->pc = 0x2E4D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D3Cu;
    // 0x2e4d40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E4D3Cu, 0x2E4D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D44u;
label_2e4d44:
    // 0x2e4d44: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x2E4D44u;
    {
        const bool branch_taken_0x2e4d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4d44) {
            ctx->pc = 0x2E4D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4D44u;
            // 0x2e4d48: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4DFCu;
            goto label_2e4dfc;
        }
    }
    ctx->pc = 0x2E4D4Cu;
    // 0x2e4d4c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E4D4Cu;
    SET_GPR_U32(ctx, 31, 0x2E4D54u);
    ctx->pc = 0x2E4D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D4Cu;
    // 0x2e4d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E4D4Cu, 0x2E4D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D54u;
label_2e4d54:
    // 0x2e4d54: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2e4d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e4d58: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2e4d58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e4d5c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2e4d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e4d60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e4d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d64: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2e4d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e4d68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2e4d68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2e4d6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4d70: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e4d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e4d74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e4d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d78: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2e4d78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e4d7c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2e4d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e4d80: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x2e4d80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e4d84: 0xc0cd7a8  jal         func_335EA0
    ctx->pc = 0x2E4D84u;
    SET_GPR_U32(ctx, 31, 0x2E4D8Cu);
    ctx->pc = 0x2E4D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D84u;
    // 0x2e4d88: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x2E4D84u, 0x2E4D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D8Cu;
label_2e4d8c:
    // 0x2e4d8c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E4D8Cu;
    SET_GPR_U32(ctx, 31, 0x2E4D94u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E4D8Cu, 0x2E4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4D94u;
label_2e4d94:
    // 0x2e4d94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e4d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4d98: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E4D98u;
    {
        const bool branch_taken_0x2e4d98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D98u;
        // 0x2e4d9c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d98) {
            ctx->pc = 0x2E4DBCu;
            goto label_2e4dbc;
        }
    }
    ctx->pc = 0x2E4DA0u;
    // 0x2e4da0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2e4da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4da4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2e4da4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4da8: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x2e4da8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4db0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e4db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4db4: 0xc0b938a  jal         func_2E4E28
    ctx->pc = 0x2E4DB4u;
    SET_GPR_U32(ctx, 31, 0x2E4DBCu);
    ctx->pc = 0x2E4DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4DB4u;
    // 0x2e4db8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4E28u, 0x2E4DB4u, 0x2E4DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DBCu;
label_2e4dbc:
    // 0x2e4dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e4dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4dc0: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E4DC0u;
    SET_GPR_U32(ctx, 31, 0x2E4DC8u);
    ctx->pc = 0x2E4DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4DC0u;
    // 0x2e4dc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E4DC0u, 0x2E4DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DC8u;
label_2e4dc8:
    // 0x2e4dc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4dcc: 0x16c3000b  bne         $s6, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2E4DCCu;
    {
        const bool branch_taken_0x2e4dcc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DCCu;
        // 0x2e4dd0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4dcc) {
            ctx->pc = 0x2E4DFCu;
            goto label_2e4dfc;
        }
    }
    ctx->pc = 0x2E4DD4u;
    // 0x2e4dd4: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x2e4dd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2e4dd8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E4DD8u;
    {
        const bool branch_taken_0x2e4dd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2E4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DD8u;
        // 0x2e4ddc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4dd8) {
            ctx->pc = 0x2E4DECu;
            goto label_2e4dec;
        }
    }
    ctx->pc = 0x2E4DE0u;
    // 0x2e4de0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2e4de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e4de4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E4DE4u;
    {
        const bool branch_taken_0x2e4de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DE4u;
        // 0x2e4de8: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4de4) {
            ctx->pc = 0x2E4DF0u;
            goto label_2e4df0;
        }
    }
    ctx->pc = 0x2E4DECu;
label_2e4dec:
    // 0x2e4dec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e4decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4df0:
    // 0x2e4df0: 0xc0a7bb6  jal         func_29EED8
    ctx->pc = 0x2E4DF0u;
    SET_GPR_U32(ctx, 31, 0x2E4DF8u);
    ctx->pc = 0x29EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EED8u, 0x2E4DF0u, 0x2E4DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4DF8u;
label_2e4df8:
    // 0x2e4df8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2e4df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e4dfc:
    // 0x2e4dfc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2e4dfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e4e00: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2e4e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e4e04: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2e4e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e4e08: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2e4e08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e4e0c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e4e0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e4e10: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2e4e10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e4e14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e4e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e4e18: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2e4e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e4e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E1Cu;
        // 0x2e4e20: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4E24u;
    // 0x2e4e24: 0x0  nop
    ctx->pc = 0x2e4e24u;
    // NOP
    ctx->pc = 0x2e4e28u;
}
