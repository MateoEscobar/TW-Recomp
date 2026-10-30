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

// Function: sub_0017FBF0
// Address: 0x17fbf0 - 0x17fd78
void sub_0017FBF0_0x17fbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017FBF0_0x17fbf0");
#endif

    switch (ctx->pc) {
        case 0x17fbf0u: goto label_17fbf0;
        case 0x17fbf4u: goto label_17fbf4;
        case 0x17fbf8u: goto label_17fbf8;
        case 0x17fbfcu: goto label_17fbfc;
        case 0x17fc00u: goto label_17fc00;
        case 0x17fc04u: goto label_17fc04;
        case 0x17fc08u: goto label_17fc08;
        case 0x17fc0cu: goto label_17fc0c;
        case 0x17fc10u: goto label_17fc10;
        case 0x17fc14u: goto label_17fc14;
        case 0x17fc18u: goto label_17fc18;
        case 0x17fc1cu: goto label_17fc1c;
        case 0x17fc20u: goto label_17fc20;
        case 0x17fc24u: goto label_17fc24;
        case 0x17fc28u: goto label_17fc28;
        case 0x17fc2cu: goto label_17fc2c;
        case 0x17fc30u: goto label_17fc30;
        case 0x17fc34u: goto label_17fc34;
        case 0x17fc38u: goto label_17fc38;
        case 0x17fc3cu: goto label_17fc3c;
        case 0x17fc40u: goto label_17fc40;
        case 0x17fc44u: goto label_17fc44;
        case 0x17fc48u: goto label_17fc48;
        case 0x17fc4cu: goto label_17fc4c;
        case 0x17fc50u: goto label_17fc50;
        case 0x17fc54u: goto label_17fc54;
        case 0x17fc58u: goto label_17fc58;
        case 0x17fc5cu: goto label_17fc5c;
        case 0x17fc60u: goto label_17fc60;
        case 0x17fc64u: goto label_17fc64;
        case 0x17fc68u: goto label_17fc68;
        case 0x17fc6cu: goto label_17fc6c;
        case 0x17fc70u: goto label_17fc70;
        case 0x17fc74u: goto label_17fc74;
        case 0x17fc78u: goto label_17fc78;
        case 0x17fc7cu: goto label_17fc7c;
        case 0x17fc80u: goto label_17fc80;
        case 0x17fc84u: goto label_17fc84;
        case 0x17fc88u: goto label_17fc88;
        case 0x17fc8cu: goto label_17fc8c;
        case 0x17fc90u: goto label_17fc90;
        case 0x17fc94u: goto label_17fc94;
        case 0x17fc98u: goto label_17fc98;
        case 0x17fc9cu: goto label_17fc9c;
        case 0x17fca0u: goto label_17fca0;
        case 0x17fca4u: goto label_17fca4;
        case 0x17fca8u: goto label_17fca8;
        case 0x17fcacu: goto label_17fcac;
        case 0x17fcb0u: goto label_17fcb0;
        case 0x17fcb4u: goto label_17fcb4;
        case 0x17fcb8u: goto label_17fcb8;
        case 0x17fcbcu: goto label_17fcbc;
        case 0x17fcc0u: goto label_17fcc0;
        case 0x17fcc4u: goto label_17fcc4;
        case 0x17fcc8u: goto label_17fcc8;
        case 0x17fcccu: goto label_17fccc;
        case 0x17fcd0u: goto label_17fcd0;
        case 0x17fcd4u: goto label_17fcd4;
        case 0x17fcd8u: goto label_17fcd8;
        case 0x17fcdcu: goto label_17fcdc;
        case 0x17fce0u: goto label_17fce0;
        case 0x17fce4u: goto label_17fce4;
        case 0x17fce8u: goto label_17fce8;
        case 0x17fcecu: goto label_17fcec;
        case 0x17fcf0u: goto label_17fcf0;
        case 0x17fcf4u: goto label_17fcf4;
        case 0x17fcf8u: goto label_17fcf8;
        case 0x17fcfcu: goto label_17fcfc;
        case 0x17fd00u: goto label_17fd00;
        case 0x17fd04u: goto label_17fd04;
        case 0x17fd08u: goto label_17fd08;
        case 0x17fd0cu: goto label_17fd0c;
        case 0x17fd10u: goto label_17fd10;
        case 0x17fd14u: goto label_17fd14;
        case 0x17fd18u: goto label_17fd18;
        case 0x17fd1cu: goto label_17fd1c;
        case 0x17fd20u: goto label_17fd20;
        case 0x17fd24u: goto label_17fd24;
        case 0x17fd28u: goto label_17fd28;
        case 0x17fd2cu: goto label_17fd2c;
        case 0x17fd30u: goto label_17fd30;
        case 0x17fd34u: goto label_17fd34;
        case 0x17fd38u: goto label_17fd38;
        case 0x17fd3cu: goto label_17fd3c;
        case 0x17fd40u: goto label_17fd40;
        case 0x17fd44u: goto label_17fd44;
        case 0x17fd48u: goto label_17fd48;
        case 0x17fd4cu: goto label_17fd4c;
        case 0x17fd50u: goto label_17fd50;
        case 0x17fd54u: goto label_17fd54;
        case 0x17fd58u: goto label_17fd58;
        case 0x17fd5cu: goto label_17fd5c;
        case 0x17fd60u: goto label_17fd60;
        case 0x17fd64u: goto label_17fd64;
        case 0x17fd68u: goto label_17fd68;
        case 0x17fd6cu: goto label_17fd6c;
        case 0x17fd70u: goto label_17fd70;
        case 0x17fd74u: goto label_17fd74;
        default: break;
    }

    ctx->pc = 0x17fbf0u;

label_17fbf0:
    // 0x17fbf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17fbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17fbf4:
    // 0x17fbf4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17fbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_17fbf8:
    // 0x17fbf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17fbfc:
    // 0x17fbfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17fbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17fc00:
    // 0x17fc00: 0xc11a45e  jal         func_469178
label_17fc04:
    if (ctx->pc == 0x17FC04u) {
        ctx->pc = 0x17FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC00u;
        // 0x17fc04: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FC08u;
        goto label_17fc08;
    }
    ctx->pc = 0x17FC00u;
    SET_GPR_U32(ctx, 31, 0x17FC08u);
    ctx->pc = 0x17FC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC00u;
    // 0x17fc04: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x17FC00u, 0x17FC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC08u;
label_17fc08:
    // 0x17fc08: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x17fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_17fc0c:
    // 0x17fc0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17fc10:
    // 0x17fc10: 0x8c6447c4  lw          $a0, 0x47C4($v1)
    ctx->pc = 0x17fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18372)));
label_17fc14:
    // 0x17fc14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17fc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17fc18:
    // 0x17fc18: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x17fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_17fc1c:
    // 0x17fc1c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x17fc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_17fc20:
    // 0x17fc20: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17fc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17fc24:
    // 0x17fc24: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x17fc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17fc28:
    // 0x17fc28: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x17fc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17fc2c:
    // 0x17fc2c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x17fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17fc30:
    // 0x17fc30: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x17fc30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17fc34:
    // 0x17fc34: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x17fc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17fc38:
    // 0x17fc38: 0xc05e9a0  jal         func_17A680
label_17fc3c:
    if (ctx->pc == 0x17FC3Cu) {
        ctx->pc = 0x17FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC38u;
        // 0x17fc3c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FC40u;
        goto label_17fc40;
    }
    ctx->pc = 0x17FC38u;
    SET_GPR_U32(ctx, 31, 0x17FC40u);
    ctx->pc = 0x17FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC38u;
    // 0x17fc3c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A680u, 0x17FC38u, 0x17FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC40u;
label_17fc40:
    // 0x17fc40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17fc44:
    // 0x17fc44: 0x10430047  beq         $v0, $v1, . + 4 + (0x47 << 2)
label_17fc48:
    if (ctx->pc == 0x17FC48u) {
        ctx->pc = 0x17FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC44u;
        // 0x17fc48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FC4Cu;
        goto label_17fc4c;
    }
    ctx->pc = 0x17FC44u;
    {
        const bool branch_taken_0x17fc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x17FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC44u;
        // 0x17fc48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc44) {
            ctx->pc = 0x17FD64u;
            goto label_17fd64;
        }
    }
    ctx->pc = 0x17FC4Cu;
label_17fc4c:
    // 0x17fc4c: 0xc064a1c  jal         func_192870
label_17fc50:
    if (ctx->pc == 0x17FC50u) {
        ctx->pc = 0x17FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC4Cu;
        // 0x17fc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FC54u;
        goto label_17fc54;
    }
    ctx->pc = 0x17FC4Cu;
    SET_GPR_U32(ctx, 31, 0x17FC54u);
    ctx->pc = 0x17FC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC4Cu;
    // 0x17fc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192870u, 0x17FC4Cu, 0x17FC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC54u;
label_17fc54:
    // 0x17fc54: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x17fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_17fc58:
    // 0x17fc58: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x17fc58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_17fc5c:
    // 0x17fc5c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x17fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_17fc60:
    // 0x17fc60: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x17fc60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_17fc64:
    // 0x17fc64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17fc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17fc68:
    // 0x17fc68: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_17fc6c:
    if (ctx->pc == 0x17FC6Cu) {
        ctx->pc = 0x17FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC68u;
        // 0x17fc6c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FC70u;
        goto label_17fc70;
    }
    ctx->pc = 0x17FC68u;
    {
        const bool branch_taken_0x17fc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC68u;
        // 0x17fc6c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc68) {
            ctx->pc = 0x17FCECu;
            goto label_17fcec;
        }
    }
    ctx->pc = 0x17FC70u;
label_17fc70:
    // 0x17fc70: 0x8ca20124  lw          $v0, 0x124($a1)
    ctx->pc = 0x17fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 292)));
label_17fc74:
    // 0x17fc74: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_17fc78:
    if (ctx->pc == 0x17FC78u) {
        ctx->pc = 0x17FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC74u;
        // 0x17fc78: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FC7Cu;
        goto label_17fc7c;
    }
    ctx->pc = 0x17FC74u;
    {
        const bool branch_taken_0x17fc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC74u;
        // 0x17fc78: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc74) {
            ctx->pc = 0x17FCECu;
            goto label_17fcec;
        }
    }
    ctx->pc = 0x17FC7Cu;
label_17fc7c:
    // 0x17fc7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17fc80:
    // 0x17fc80: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x17fc80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_17fc84:
    // 0x17fc84: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x17fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_17fc88:
    // 0x17fc88: 0x40f809  jalr        $v0
label_17fc8c:
    if (ctx->pc == 0x17FC8Cu) {
        ctx->pc = 0x17FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC88u;
        // 0x17fc8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FC90u;
        goto label_17fc90;
    }
    ctx->pc = 0x17FC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FC90u);
        ctx->pc = 0x17FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC88u;
        // 0x17fc8c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FC88u, 0x17FC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FC90u;
label_17fc90:
    // 0x17fc90: 0x21683  sra         $v0, $v0, 26
    ctx->pc = 0x17fc90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 26));
label_17fc94:
    // 0x17fc94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17fc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17fc98:
    // 0x17fc98: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_17fc9c:
    if (ctx->pc == 0x17FC9Cu) {
        ctx->pc = 0x17FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC98u;
        // 0x17fc9c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FCA0u;
        goto label_17fca0;
    }
    ctx->pc = 0x17FC98u;
    {
        const bool branch_taken_0x17fc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC98u;
        // 0x17fc9c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc98) {
            ctx->pc = 0x17FCECu;
            goto label_17fcec;
        }
    }
    ctx->pc = 0x17FCA0u;
label_17fca0:
    // 0x17fca0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x17fca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_17fca4:
    // 0x17fca4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x17fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_17fca8:
    // 0x17fca8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x17fca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_17fcac:
    // 0x17fcac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_17fcb0:
    if (ctx->pc == 0x17FCB0u) {
        ctx->pc = 0x17FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCACu;
        // 0x17fcb0: 0xc4940134  lwc1        $f20, 0x134($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FCB4u;
        goto label_17fcb4;
    }
    ctx->pc = 0x17FCACu;
    {
        const bool branch_taken_0x17fcac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCACu;
        // 0x17fcb0: 0xc4940134  lwc1        $f20, 0x134($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcac) {
            ctx->pc = 0x17FCBCu;
            goto label_17fcbc;
        }
    }
    ctx->pc = 0x17FCB4u;
label_17fcb4:
    // 0x17fcb4: 0xc11a402  jal         func_469008
label_17fcb8:
    if (ctx->pc == 0x17FCB8u) {
        ctx->pc = 0x17FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCB4u;
        // 0x17fcb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FCBCu;
        goto label_17fcbc;
    }
    ctx->pc = 0x17FCB4u;
    SET_GPR_U32(ctx, 31, 0x17FCBCu);
    ctx->pc = 0x17FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCB4u;
    // 0x17fcb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469008u, 0x17FCB4u, 0x17FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FCBCu;
label_17fcbc:
    // 0x17fcbc: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x17fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17fcc0:
    // 0x17fcc0: 0x3c0139d1  lui         $at, 0x39D1
    ctx->pc = 0x17fcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14801 << 16));
label_17fcc4:
    // 0x17fcc4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x17fcc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
label_17fcc8:
    // 0x17fcc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17fcc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17fccc:
    // 0x17fccc: 0x0  nop
    ctx->pc = 0x17fcccu;
    // NOP
label_17fcd0:
    // 0x17fcd0: 0x0  nop
    ctx->pc = 0x17fcd0u;
    // NOP
label_17fcd4:
    // 0x17fcd4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x17fcd4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_17fcd8:
    // 0x17fcd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17fcd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17fcdc:
    // 0x17fcdc: 0x0  nop
    ctx->pc = 0x17fcdcu;
    // NOP
label_17fce0:
    // 0x17fce0: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_17fce4:
    if (ctx->pc == 0x17FCE4u) {
        ctx->pc = 0x17FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCE0u;
        // 0x17fce4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FCE8u;
        goto label_17fce8;
    }
    ctx->pc = 0x17FCE0u;
    {
        const bool branch_taken_0x17fce0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCE0u;
        // 0x17fce4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fce0) {
            ctx->pc = 0x17FD64u;
            goto label_17fd64;
        }
    }
    ctx->pc = 0x17FCE8u;
label_17fce8:
    // 0x17fce8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17fcec:
    // 0x17fcec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17fcecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17fcf0:
    // 0x17fcf0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x17fcf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17fcf4:
    // 0x17fcf4: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x17fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_17fcf8:
    // 0x17fcf8: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x17fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17fcfc:
    // 0x17fcfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17fcfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17fd00:
    // 0x17fd00: 0x0  nop
    ctx->pc = 0x17fd00u;
    // NOP
label_17fd04:
    // 0x17fd04: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_17fd08:
    if (ctx->pc == 0x17FD08u) {
        ctx->pc = 0x17FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD04u;
        // 0x17fd08: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD0Cu;
        goto label_17fd0c;
    }
    ctx->pc = 0x17FD04u;
    {
        const bool branch_taken_0x17fd04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17fd04) {
            ctx->pc = 0x17FD08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FD04u;
            // 0x17fd08: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FD28u;
            goto label_17fd28;
        }
    }
    ctx->pc = 0x17FD0Cu;
label_17fd0c:
    // 0x17fd0c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x17fd0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_17fd10:
    // 0x17fd10: 0xc4400134  lwc1        $f0, 0x134($v0)
    ctx->pc = 0x17fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17fd14:
    // 0x17fd14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17fd14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17fd18:
    // 0x17fd18: 0x0  nop
    ctx->pc = 0x17fd18u;
    // NOP
label_17fd1c:
    // 0x17fd1c: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_17fd20:
    if (ctx->pc == 0x17FD20u) {
        ctx->pc = 0x17FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD1Cu;
        // 0x17fd20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD24u;
        goto label_17fd24;
    }
    ctx->pc = 0x17FD1Cu;
    {
        const bool branch_taken_0x17fd1c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD1Cu;
        // 0x17fd20: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd1c) {
            ctx->pc = 0x17FD64u;
            goto label_17fd64;
        }
    }
    ctx->pc = 0x17FD24u;
label_17fd24:
    // 0x17fd24: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_17fd28:
    // 0x17fd28: 0x8c43cd4c  lw          $v1, -0x32B4($v0)
    ctx->pc = 0x17fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_17fd2c:
    // 0x17fd2c: 0x24640c84  addiu       $a0, $v1, 0xC84
    ctx->pc = 0x17fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 3204));
label_17fd30:
    // 0x17fd30: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x17fd30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17fd34:
    // 0x17fd34: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x17fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17fd38:
    // 0x17fd38: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_17fd3c:
    if (ctx->pc == 0x17FD3Cu) {
        ctx->pc = 0x17FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD38u;
        // 0x17fd3c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD40u;
        goto label_17fd40;
    }
    ctx->pc = 0x17FD38u;
    {
        const bool branch_taken_0x17fd38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD38u;
        // 0x17fd3c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd38) {
            ctx->pc = 0x17FD58u;
            goto label_17fd58;
        }
    }
    ctx->pc = 0x17FD40u;
label_17fd40:
    // 0x17fd40: 0x54a00001  bnel        $a1, $zero, . + 4 + (0x1 << 2)
label_17fd44:
    if (ctx->pc == 0x17FD44u) {
        ctx->pc = 0x17FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD40u;
        // 0x17fd44: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD48u;
        goto label_17fd48;
    }
    ctx->pc = 0x17FD40u;
    {
        const bool branch_taken_0x17fd40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fd40) {
            ctx->pc = 0x17FD44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FD40u;
            // 0x17fd44: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FD48u;
            goto label_17fd48;
        }
    }
    ctx->pc = 0x17FD48u;
label_17fd48:
    // 0x17fd48: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x17fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17fd4c:
    // 0x17fd4c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x17fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_17fd50:
    // 0x17fd50: 0x10000003  b           . + 4 + (0x3 << 2)
label_17fd54:
    if (ctx->pc == 0x17FD54u) {
        ctx->pc = 0x17FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD50u;
        // 0x17fd54: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD58u;
        goto label_17fd58;
    }
    ctx->pc = 0x17FD50u;
    {
        const bool branch_taken_0x17fd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD50u;
        // 0x17fd54: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd50) {
            ctx->pc = 0x17FD60u;
            goto label_17fd60;
        }
    }
    ctx->pc = 0x17FD58u;
label_17fd58:
    // 0x17fd58: 0xc137c08  jal         func_4DF020
label_17fd5c:
    if (ctx->pc == 0x17FD5Cu) {
        ctx->pc = 0x17FD60u;
        goto label_17fd60;
    }
    ctx->pc = 0x17FD58u;
    SET_GPR_U32(ctx, 31, 0x17FD60u);
    ctx->pc = 0x4DF020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DF020u, 0x17FD58u, 0x17FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD60u;
label_17fd60:
    // 0x17fd60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17fd60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fd64:
    // 0x17fd64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17fd64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17fd68:
    // 0x17fd68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17fd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17fd6c:
    // 0x17fd6c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x17fd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17fd70:
    // 0x17fd70: 0x3e00008  jr          $ra
label_17fd74:
    if (ctx->pc == 0x17FD74u) {
        ctx->pc = 0x17FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD70u;
        // 0x17fd74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FD78u;
        goto label_fallthrough_0x17fd70;
    }
    ctx->pc = 0x17FD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD70u;
        // 0x17fd74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17fd70:
    ctx->pc = 0x17FD78u;
}
