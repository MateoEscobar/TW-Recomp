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

// Function: sub_004B8C40
// Address: 0x4b8c40 - 0x4b8d30
void sub_004B8C40_0x4b8c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B8C40_0x4b8c40");
#endif

    switch (ctx->pc) {
        case 0x4b8c78u: goto label_4b8c78;
        case 0x4b8ca4u: goto label_4b8ca4;
        case 0x4b8ce8u: goto label_4b8ce8;
        case 0x4b8cfcu: goto label_4b8cfc;
        case 0x4b8d10u: goto label_4b8d10;
        case 0x4b8d20u: goto label_4b8d20;
        default: break;
    }

    ctx->pc = 0x4b8c40u;

    // 0x4b8c40: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x4b8c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4b8c44: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b8c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4b8c48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b8c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b8c4c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x4b8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x4b8c50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b8c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b8c54: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x4b8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x4b8c58: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4b8c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4b8c5c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x4b8c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x4b8c60: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4b8c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4b8c64: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B8C64u;
    {
        const bool branch_taken_0x4b8c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8C64u;
        // 0x4b8c68: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8c64) {
            ctx->pc = 0x4B8C80u;
            goto label_4b8c80;
        }
    }
    ctx->pc = 0x4B8C6Cu;
    // 0x4b8c6c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4b8c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x4b8c70: 0xc12f7c8  jal         func_4BDF20
    ctx->pc = 0x4B8C70u;
    SET_GPR_U32(ctx, 31, 0x4B8C78u);
    ctx->pc = 0x4B8C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8C70u;
    // 0x4b8c74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BDF20u, 0x4B8C70u, 0x4B8C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8C78u;
label_4b8c78:
    // 0x4b8c78: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x4B8C78u;
    {
        const bool branch_taken_0x4b8c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8C78u;
        // 0x4b8c7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8c78) {
            ctx->pc = 0x4B8D28u;
            goto label_4b8d28;
        }
    }
    ctx->pc = 0x4B8C80u;
label_4b8c80:
    // 0x4b8c80: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x4b8c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x4b8c84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b8c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b8c88: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x4b8c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4b8c8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B8C8Cu;
    {
        const bool branch_taken_0x4b8c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8c8c) {
            ctx->pc = 0x4B8C9Cu;
            goto label_4b8c9c;
        }
    }
    ctx->pc = 0x4B8C94u;
    // 0x4b8c94: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4B8C94u;
    {
        const bool branch_taken_0x4b8c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8C94u;
        // 0x4b8c98: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8c94) {
            ctx->pc = 0x4B8D24u;
            goto label_4b8d24;
        }
    }
    ctx->pc = 0x4B8C9Cu;
label_4b8c9c:
    // 0x4b8c9c: 0xc12f3d8  jal         func_4BCF60
    ctx->pc = 0x4B8C9Cu;
    SET_GPR_U32(ctx, 31, 0x4B8CA4u);
    ctx->pc = 0x4B8CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8C9Cu;
    // 0x4b8ca0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BCF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BCF60u, 0x4B8C9Cu, 0x4B8CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8CA4u;
label_4b8ca4:
    // 0x4b8ca4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4b8ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4b8ca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b8cac: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B8CACu;
    {
        const bool branch_taken_0x4b8cac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8CACu;
        // 0x4b8cb0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8cac) {
            ctx->pc = 0x4B8CF0u;
            goto label_4b8cf0;
        }
    }
    ctx->pc = 0x4B8CB4u;
    // 0x4b8cb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B8CB4u;
    {
        const bool branch_taken_0x4b8cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8CB4u;
        // 0x4b8cb8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8cb4) {
            ctx->pc = 0x4B8CCCu;
            goto label_4b8ccc;
        }
    }
    ctx->pc = 0x4B8CBCu;
    // 0x4b8cbc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B8CBCu;
    {
        const bool branch_taken_0x4b8cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8CBCu;
        // 0x4b8cc0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8cbc) {
            ctx->pc = 0x4B8CDCu;
            goto label_4b8cdc;
        }
    }
    ctx->pc = 0x4B8CC4u;
    // 0x4b8cc4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B8CC4u;
    {
        const bool branch_taken_0x4b8cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8cc4) {
            ctx->pc = 0x4B8D18u;
            goto label_4b8d18;
        }
    }
    ctx->pc = 0x4B8CCCu;
label_4b8ccc:
    // 0x4b8ccc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B8CCCu;
    {
        const bool branch_taken_0x4b8ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8CCCu;
        // 0x4b8cd0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8ccc) {
            ctx->pc = 0x4B8D04u;
            goto label_4b8d04;
        }
    }
    ctx->pc = 0x4B8CD4u;
    // 0x4b8cd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4B8CD4u;
    {
        const bool branch_taken_0x4b8cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b8cd4) {
            ctx->pc = 0x4B8D18u;
            goto label_4b8d18;
        }
    }
    ctx->pc = 0x4B8CDCu;
label_4b8cdc:
    // 0x4b8cdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b8cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b8ce0: 0xc12f7c8  jal         func_4BDF20
    ctx->pc = 0x4B8CE0u;
    SET_GPR_U32(ctx, 31, 0x4B8CE8u);
    ctx->pc = 0x4B8CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8CE0u;
    // 0x4b8ce4: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BDF20u, 0x4B8CE0u, 0x4B8CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8CE8u;
label_4b8ce8:
    // 0x4b8ce8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4B8CE8u;
    {
        const bool branch_taken_0x4b8ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8CE8u;
        // 0x4b8cec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8ce8) {
            ctx->pc = 0x4B8D28u;
            goto label_4b8d28;
        }
    }
    ctx->pc = 0x4B8CF0u;
label_4b8cf0:
    // 0x4b8cf0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x4b8cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x4b8cf4: 0xc12f51e  jal         func_4BD478
    ctx->pc = 0x4B8CF4u;
    SET_GPR_U32(ctx, 31, 0x4B8CFCu);
    ctx->pc = 0x4B8CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8CF4u;
    // 0x4b8cf8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BD478u, 0x4B8CF4u, 0x4B8CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8CFCu;
label_4b8cfc:
    // 0x4b8cfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4B8CFCu;
    {
        const bool branch_taken_0x4b8cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8CFCu;
        // 0x4b8d00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8cfc) {
            ctx->pc = 0x4B8D28u;
            goto label_4b8d28;
        }
    }
    ctx->pc = 0x4B8D04u;
label_4b8d04:
    // 0x4b8d04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b8d08: 0xc12f7c8  jal         func_4BDF20
    ctx->pc = 0x4B8D08u;
    SET_GPR_U32(ctx, 31, 0x4B8D10u);
    ctx->pc = 0x4B8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8D08u;
    // 0x4b8d0c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BDF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BDF20u, 0x4B8D08u, 0x4B8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8D10u;
label_4b8d10:
    // 0x4b8d10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B8D10u;
    {
        const bool branch_taken_0x4b8d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8D10u;
        // 0x4b8d14: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b8d10) {
            ctx->pc = 0x4B8D24u;
            goto label_4b8d24;
        }
    }
    ctx->pc = 0x4B8D18u;
label_4b8d18:
    // 0x4b8d18: 0xc12f51e  jal         func_4BD478
    ctx->pc = 0x4B8D18u;
    SET_GPR_U32(ctx, 31, 0x4B8D20u);
    ctx->pc = 0x4B8D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B8D18u;
    // 0x4b8d1c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BD478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BD478u, 0x4B8D18u, 0x4B8D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B8D20u;
label_4b8d20:
    // 0x4b8d20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4b8d20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_4b8d24:
    // 0x4b8d24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b8d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b8d28:
    // 0x4b8d28: 0x3e00008  jr          $ra
    ctx->pc = 0x4B8D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B8D28u;
        // 0x4b8d2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B8D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B8D30u;
}
