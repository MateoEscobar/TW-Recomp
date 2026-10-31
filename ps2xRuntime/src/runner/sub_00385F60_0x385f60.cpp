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

// Function: sub_00385F60
// Address: 0x385f60 - 0x386010
void sub_00385F60_0x385f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385F60_0x385f60");
#endif

    switch (ctx->pc) {
        case 0x385f60u: goto label_385f60;
        case 0x385f64u: goto label_385f64;
        case 0x385f68u: goto label_385f68;
        case 0x385f6cu: goto label_385f6c;
        case 0x385f70u: goto label_385f70;
        case 0x385f74u: goto label_385f74;
        case 0x385f78u: goto label_385f78;
        case 0x385f7cu: goto label_385f7c;
        case 0x385f80u: goto label_385f80;
        case 0x385f84u: goto label_385f84;
        case 0x385f88u: goto label_385f88;
        case 0x385f8cu: goto label_385f8c;
        case 0x385f90u: goto label_385f90;
        case 0x385f94u: goto label_385f94;
        case 0x385f98u: goto label_385f98;
        case 0x385f9cu: goto label_385f9c;
        case 0x385fa0u: goto label_385fa0;
        case 0x385fa4u: goto label_385fa4;
        case 0x385fa8u: goto label_385fa8;
        case 0x385facu: goto label_385fac;
        case 0x385fb0u: goto label_385fb0;
        case 0x385fb4u: goto label_385fb4;
        case 0x385fb8u: goto label_385fb8;
        case 0x385fbcu: goto label_385fbc;
        case 0x385fc0u: goto label_385fc0;
        case 0x385fc4u: goto label_385fc4;
        case 0x385fc8u: goto label_385fc8;
        case 0x385fccu: goto label_385fcc;
        case 0x385fd0u: goto label_385fd0;
        case 0x385fd4u: goto label_385fd4;
        case 0x385fd8u: goto label_385fd8;
        case 0x385fdcu: goto label_385fdc;
        case 0x385fe0u: goto label_385fe0;
        case 0x385fe4u: goto label_385fe4;
        case 0x385fe8u: goto label_385fe8;
        case 0x385fecu: goto label_385fec;
        case 0x385ff0u: goto label_385ff0;
        case 0x385ff4u: goto label_385ff4;
        case 0x385ff8u: goto label_385ff8;
        case 0x385ffcu: goto label_385ffc;
        case 0x386000u: goto label_386000;
        case 0x386004u: goto label_386004;
        case 0x386008u: goto label_386008;
        case 0x38600cu: goto label_38600c;
        default: break;
    }

    ctx->pc = 0x385f60u;

label_385f60:
    // 0x385f60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x385f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_385f64:
    // 0x385f64: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x385f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_385f68:
    // 0x385f68: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x385f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_385f6c:
    // 0x385f6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x385f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_385f70:
    // 0x385f70: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x385f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_385f74:
    // 0x385f74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x385f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_385f78:
    // 0x385f78: 0xc0e4060  jal         func_390180
label_385f7c:
    if (ctx->pc == 0x385F7Cu) {
        ctx->pc = 0x385F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F78u;
        // 0x385f7c: 0xafa50044  sw          $a1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F80u;
        goto label_385f80;
    }
    ctx->pc = 0x385F78u;
    SET_GPR_U32(ctx, 31, 0x385F80u);
    ctx->pc = 0x385F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F78u;
    // 0x385f7c: 0xafa50044  sw          $a1, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385F78u, 0x385F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F80u;
label_385f80:
    // 0x385f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x385f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385f84:
    // 0x385f84: 0xc0e4060  jal         func_390180
label_385f88:
    if (ctx->pc == 0x385F88u) {
        ctx->pc = 0x385F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F84u;
        // 0x385f88: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F8Cu;
        goto label_385f8c;
    }
    ctx->pc = 0x385F84u;
    SET_GPR_U32(ctx, 31, 0x385F8Cu);
    ctx->pc = 0x385F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F84u;
    // 0x385f88: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385F84u, 0x385F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F8Cu;
label_385f8c:
    // 0x385f8c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_385f90:
    if (ctx->pc == 0x385F90u) {
        ctx->pc = 0x385F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F8Cu;
        // 0x385f90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F94u;
        goto label_385f94;
    }
    ctx->pc = 0x385F8Cu;
    {
        const bool branch_taken_0x385f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F8Cu;
        // 0x385f90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f8c) {
            ctx->pc = 0x385FECu;
            goto label_385fec;
        }
    }
    ctx->pc = 0x385F94u;
label_385f94:
    // 0x385f94: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_385f98:
    if (ctx->pc == 0x385F98u) {
        ctx->pc = 0x385F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F94u;
        // 0x385f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F9Cu;
        goto label_385f9c;
    }
    ctx->pc = 0x385F94u;
    {
        const bool branch_taken_0x385f94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F94u;
        // 0x385f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f94) {
            ctx->pc = 0x385FECu;
            goto label_385fec;
        }
    }
    ctx->pc = 0x385F9Cu;
label_385f9c:
    // 0x385f9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x385f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385fa0:
    // 0x385fa0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x385fa0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_385fa4:
    // 0x385fa4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x385fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_385fa8:
    // 0x385fa8: 0x60f809  jalr        $v1
label_385fac:
    if (ctx->pc == 0x385FACu) {
        ctx->pc = 0x385FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FA8u;
        // 0x385fac: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385FB0u;
        goto label_385fb0;
    }
    ctx->pc = 0x385FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385FB0u);
        ctx->pc = 0x385FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FA8u;
        // 0x385fac: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385FA8u, 0x385FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385FB0u;
label_385fb0:
    // 0x385fb0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x385fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_385fb4:
    // 0x385fb4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x385fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_385fb8:
    // 0x385fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385fbc:
    // 0x385fbc: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x385fbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_385fc0:
    // 0x385fc0: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x385fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_385fc4:
    // 0x385fc4: 0x40f809  jalr        $v0
label_385fc8:
    if (ctx->pc == 0x385FC8u) {
        ctx->pc = 0x385FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FC4u;
        // 0x385fc8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385FCCu;
        goto label_385fcc;
    }
    ctx->pc = 0x385FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385FCCu);
        ctx->pc = 0x385FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FC4u;
        // 0x385fc8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385FC4u, 0x385FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385FCCu;
label_385fcc:
    // 0x385fcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x385fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385fd0:
    // 0x385fd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x385fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_385fd4:
    // 0x385fd4: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x385fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_385fd8:
    // 0x385fd8: 0xc09391e  jal         func_24E478
label_385fdc:
    if (ctx->pc == 0x385FDCu) {
        ctx->pc = 0x385FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FD8u;
        // 0x385fdc: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x385FE0u;
        goto label_385fe0;
    }
    ctx->pc = 0x385FD8u;
    SET_GPR_U32(ctx, 31, 0x385FE0u);
    ctx->pc = 0x385FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385FD8u;
    // 0x385fdc: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E478u, 0x385FD8u, 0x385FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385FE0u;
label_385fe0:
    // 0x385fe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x385fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_385fe4:
    // 0x385fe4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_385fe8:
    if (ctx->pc == 0x385FE8u) {
        ctx->pc = 0x385FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FE4u;
        // 0x385fe8: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x385FECu;
        goto label_385fec;
    }
    ctx->pc = 0x385FE4u;
    {
        const bool branch_taken_0x385fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x385FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385FE4u;
        // 0x385fe8: 0xc7a00048  lwc1        $f0, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x385fe4) {
            ctx->pc = 0x385FF8u;
            goto label_385ff8;
        }
    }
    ctx->pc = 0x385FECu;
label_385fec:
    // 0x385fec: 0x3c01ce6e  lui         $at, 0xCE6E
    ctx->pc = 0x385fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)52846 << 16));
label_385ff0:
    // 0x385ff0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x385ff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_385ff4:
    // 0x385ff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x385ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_385ff8:
    // 0x385ff8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x385ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_385ffc:
    // 0x385ffc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x385ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_386000:
    // 0x386000: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x386000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_386004:
    // 0x386004: 0x3e00008  jr          $ra
label_386008:
    if (ctx->pc == 0x386008u) {
        ctx->pc = 0x386008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386004u;
        // 0x386008: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38600Cu;
        goto label_38600c;
    }
    ctx->pc = 0x386004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386004u;
        // 0x386008: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38600Cu;
label_38600c:
    // 0x38600c: 0x0  nop
    ctx->pc = 0x38600cu;
    // NOP
    ctx->pc = 0x386010u;
}
