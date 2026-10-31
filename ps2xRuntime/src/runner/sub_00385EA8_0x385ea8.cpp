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

// Function: sub_00385EA8
// Address: 0x385ea8 - 0x385f60
void sub_00385EA8_0x385ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00385EA8_0x385ea8");
#endif

    switch (ctx->pc) {
        case 0x385ea8u: goto label_385ea8;
        case 0x385eacu: goto label_385eac;
        case 0x385eb0u: goto label_385eb0;
        case 0x385eb4u: goto label_385eb4;
        case 0x385eb8u: goto label_385eb8;
        case 0x385ebcu: goto label_385ebc;
        case 0x385ec0u: goto label_385ec0;
        case 0x385ec4u: goto label_385ec4;
        case 0x385ec8u: goto label_385ec8;
        case 0x385eccu: goto label_385ecc;
        case 0x385ed0u: goto label_385ed0;
        case 0x385ed4u: goto label_385ed4;
        case 0x385ed8u: goto label_385ed8;
        case 0x385edcu: goto label_385edc;
        case 0x385ee0u: goto label_385ee0;
        case 0x385ee4u: goto label_385ee4;
        case 0x385ee8u: goto label_385ee8;
        case 0x385eecu: goto label_385eec;
        case 0x385ef0u: goto label_385ef0;
        case 0x385ef4u: goto label_385ef4;
        case 0x385ef8u: goto label_385ef8;
        case 0x385efcu: goto label_385efc;
        case 0x385f00u: goto label_385f00;
        case 0x385f04u: goto label_385f04;
        case 0x385f08u: goto label_385f08;
        case 0x385f0cu: goto label_385f0c;
        case 0x385f10u: goto label_385f10;
        case 0x385f14u: goto label_385f14;
        case 0x385f18u: goto label_385f18;
        case 0x385f1cu: goto label_385f1c;
        case 0x385f20u: goto label_385f20;
        case 0x385f24u: goto label_385f24;
        case 0x385f28u: goto label_385f28;
        case 0x385f2cu: goto label_385f2c;
        case 0x385f30u: goto label_385f30;
        case 0x385f34u: goto label_385f34;
        case 0x385f38u: goto label_385f38;
        case 0x385f3cu: goto label_385f3c;
        case 0x385f40u: goto label_385f40;
        case 0x385f44u: goto label_385f44;
        case 0x385f48u: goto label_385f48;
        case 0x385f4cu: goto label_385f4c;
        case 0x385f50u: goto label_385f50;
        case 0x385f54u: goto label_385f54;
        case 0x385f58u: goto label_385f58;
        case 0x385f5cu: goto label_385f5c;
        default: break;
    }

    ctx->pc = 0x385ea8u;

label_385ea8:
    // 0x385ea8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x385ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_385eac:
    // 0x385eac: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x385eacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_385eb0:
    // 0x385eb0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x385eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_385eb4:
    // 0x385eb4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x385eb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_385eb8:
    // 0x385eb8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x385eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_385ebc:
    // 0x385ebc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x385ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_385ec0:
    // 0x385ec0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x385ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_385ec4:
    // 0x385ec4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x385ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_385ec8:
    // 0x385ec8: 0xc0e4060  jal         func_390180
label_385ecc:
    if (ctx->pc == 0x385ECCu) {
        ctx->pc = 0x385ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EC8u;
        // 0x385ecc: 0xafa50044  sw          $a1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385ED0u;
        goto label_385ed0;
    }
    ctx->pc = 0x385EC8u;
    SET_GPR_U32(ctx, 31, 0x385ED0u);
    ctx->pc = 0x385ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385EC8u;
    // 0x385ecc: 0xafa50044  sw          $a1, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385EC8u, 0x385ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385ED0u;
label_385ed0:
    // 0x385ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x385ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_385ed4:
    // 0x385ed4: 0xc0e4060  jal         func_390180
label_385ed8:
    if (ctx->pc == 0x385ED8u) {
        ctx->pc = 0x385ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385ED4u;
        // 0x385ed8: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385EDCu;
        goto label_385edc;
    }
    ctx->pc = 0x385ED4u;
    SET_GPR_U32(ctx, 31, 0x385EDCu);
    ctx->pc = 0x385ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385ED4u;
    // 0x385ed8: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x385ED4u, 0x385EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385EDCu;
label_385edc:
    // 0x385edc: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_385ee0:
    if (ctx->pc == 0x385EE0u) {
        ctx->pc = 0x385EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EDCu;
        // 0x385ee0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385EE4u;
        goto label_385ee4;
    }
    ctx->pc = 0x385EDCu;
    {
        const bool branch_taken_0x385edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x385EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EDCu;
        // 0x385ee0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385edc) {
            ctx->pc = 0x385F44u;
            goto label_385f44;
        }
    }
    ctx->pc = 0x385EE4u;
label_385ee4:
    // 0x385ee4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_385ee8:
    if (ctx->pc == 0x385EE8u) {
        ctx->pc = 0x385EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EE4u;
        // 0x385ee8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385EECu;
        goto label_385eec;
    }
    ctx->pc = 0x385EE4u;
    {
        const bool branch_taken_0x385ee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x385EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EE4u;
        // 0x385ee8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385ee4) {
            ctx->pc = 0x385F44u;
            goto label_385f44;
        }
    }
    ctx->pc = 0x385EECu;
label_385eec:
    // 0x385eec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x385eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_385ef0:
    // 0x385ef0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x385ef0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_385ef4:
    // 0x385ef4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x385ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_385ef8:
    // 0x385ef8: 0x60f809  jalr        $v1
label_385efc:
    if (ctx->pc == 0x385EFCu) {
        ctx->pc = 0x385EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EF8u;
        // 0x385efc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F00u;
        goto label_385f00;
    }
    ctx->pc = 0x385EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x385F00u);
        ctx->pc = 0x385EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385EF8u;
        // 0x385efc: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385EF8u, 0x385F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385F00u;
label_385f00:
    // 0x385f00: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x385f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_385f04:
    // 0x385f04: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x385f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_385f08:
    // 0x385f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x385f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385f0c:
    // 0x385f0c: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x385f0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_385f10:
    // 0x385f10: 0x8cc200ac  lw          $v0, 0xAC($a2)
    ctx->pc = 0x385f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_385f14:
    // 0x385f14: 0x40f809  jalr        $v0
label_385f18:
    if (ctx->pc == 0x385F18u) {
        ctx->pc = 0x385F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F14u;
        // 0x385f18: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F1Cu;
        goto label_385f1c;
    }
    ctx->pc = 0x385F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x385F1Cu);
        ctx->pc = 0x385F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F14u;
        // 0x385f18: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385F14u, 0x385F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x385F1Cu;
label_385f1c:
    // 0x385f1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x385f1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_385f20:
    // 0x385f20: 0xc0cdb38  jal         func_336CE0
label_385f24:
    if (ctx->pc == 0x385F24u) {
        ctx->pc = 0x385F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F20u;
        // 0x385f24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F28u;
        goto label_385f28;
    }
    ctx->pc = 0x385F20u;
    SET_GPR_U32(ctx, 31, 0x385F28u);
    ctx->pc = 0x385F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x385F20u;
    // 0x385f24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x385F20u, 0x385F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x385F28u;
label_385f28:
    // 0x385f28: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x385f28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_385f2c:
    // 0x385f2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x385f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_385f30:
    // 0x385f30: 0x0  nop
    ctx->pc = 0x385f30u;
    // NOP
label_385f34:
    // 0x385f34: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_385f38:
    if (ctx->pc == 0x385F38u) {
        ctx->pc = 0x385F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F34u;
        // 0x385f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F3Cu;
        goto label_385f3c;
    }
    ctx->pc = 0x385F34u;
    {
        const bool branch_taken_0x385f34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x385F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F34u;
        // 0x385f38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f34) {
            ctx->pc = 0x385F48u;
            goto label_385f48;
        }
    }
    ctx->pc = 0x385F3Cu;
label_385f3c:
    // 0x385f3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_385f40:
    if (ctx->pc == 0x385F40u) {
        ctx->pc = 0x385F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F3Cu;
        // 0x385f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F44u;
        goto label_385f44;
    }
    ctx->pc = 0x385F3Cu;
    {
        const bool branch_taken_0x385f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x385F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F3Cu;
        // 0x385f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x385f3c) {
            ctx->pc = 0x385F48u;
            goto label_385f48;
        }
    }
    ctx->pc = 0x385F44u;
label_385f44:
    // 0x385f44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x385f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_385f48:
    // 0x385f48: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x385f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_385f4c:
    // 0x385f4c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x385f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_385f50:
    // 0x385f50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x385f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_385f54:
    // 0x385f54: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x385f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_385f58:
    // 0x385f58: 0x3e00008  jr          $ra
label_385f5c:
    if (ctx->pc == 0x385F5Cu) {
        ctx->pc = 0x385F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F58u;
        // 0x385f5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x385F60u;
        goto label_fallthrough_0x385f58;
    }
    ctx->pc = 0x385F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x385F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x385F58u;
        // 0x385f5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x385F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x385f58:
    ctx->pc = 0x385F60u;
}
