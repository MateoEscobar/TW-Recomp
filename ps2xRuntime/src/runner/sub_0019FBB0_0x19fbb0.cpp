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

// Function: sub_0019FBB0
// Address: 0x19fbb0 - 0x19fd00
void sub_0019FBB0_0x19fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FBB0_0x19fbb0");
#endif

    switch (ctx->pc) {
        case 0x19fbb0u: goto label_19fbb0;
        case 0x19fbb4u: goto label_19fbb4;
        case 0x19fbb8u: goto label_19fbb8;
        case 0x19fbbcu: goto label_19fbbc;
        case 0x19fbc0u: goto label_19fbc0;
        case 0x19fbc4u: goto label_19fbc4;
        case 0x19fbc8u: goto label_19fbc8;
        case 0x19fbccu: goto label_19fbcc;
        case 0x19fbd0u: goto label_19fbd0;
        case 0x19fbd4u: goto label_19fbd4;
        case 0x19fbd8u: goto label_19fbd8;
        case 0x19fbdcu: goto label_19fbdc;
        case 0x19fbe0u: goto label_19fbe0;
        case 0x19fbe4u: goto label_19fbe4;
        case 0x19fbe8u: goto label_19fbe8;
        case 0x19fbecu: goto label_19fbec;
        case 0x19fbf0u: goto label_19fbf0;
        case 0x19fbf4u: goto label_19fbf4;
        case 0x19fbf8u: goto label_19fbf8;
        case 0x19fbfcu: goto label_19fbfc;
        case 0x19fc00u: goto label_19fc00;
        case 0x19fc04u: goto label_19fc04;
        case 0x19fc08u: goto label_19fc08;
        case 0x19fc0cu: goto label_19fc0c;
        case 0x19fc10u: goto label_19fc10;
        case 0x19fc14u: goto label_19fc14;
        case 0x19fc18u: goto label_19fc18;
        case 0x19fc1cu: goto label_19fc1c;
        case 0x19fc20u: goto label_19fc20;
        case 0x19fc24u: goto label_19fc24;
        case 0x19fc28u: goto label_19fc28;
        case 0x19fc2cu: goto label_19fc2c;
        case 0x19fc30u: goto label_19fc30;
        case 0x19fc34u: goto label_19fc34;
        case 0x19fc38u: goto label_19fc38;
        case 0x19fc3cu: goto label_19fc3c;
        case 0x19fc40u: goto label_19fc40;
        case 0x19fc44u: goto label_19fc44;
        case 0x19fc48u: goto label_19fc48;
        case 0x19fc4cu: goto label_19fc4c;
        case 0x19fc50u: goto label_19fc50;
        case 0x19fc54u: goto label_19fc54;
        case 0x19fc58u: goto label_19fc58;
        case 0x19fc5cu: goto label_19fc5c;
        case 0x19fc60u: goto label_19fc60;
        case 0x19fc64u: goto label_19fc64;
        case 0x19fc68u: goto label_19fc68;
        case 0x19fc6cu: goto label_19fc6c;
        case 0x19fc70u: goto label_19fc70;
        case 0x19fc74u: goto label_19fc74;
        case 0x19fc78u: goto label_19fc78;
        case 0x19fc7cu: goto label_19fc7c;
        case 0x19fc80u: goto label_19fc80;
        case 0x19fc84u: goto label_19fc84;
        case 0x19fc88u: goto label_19fc88;
        case 0x19fc8cu: goto label_19fc8c;
        case 0x19fc90u: goto label_19fc90;
        case 0x19fc94u: goto label_19fc94;
        case 0x19fc98u: goto label_19fc98;
        case 0x19fc9cu: goto label_19fc9c;
        case 0x19fca0u: goto label_19fca0;
        case 0x19fca4u: goto label_19fca4;
        case 0x19fca8u: goto label_19fca8;
        case 0x19fcacu: goto label_19fcac;
        case 0x19fcb0u: goto label_19fcb0;
        case 0x19fcb4u: goto label_19fcb4;
        case 0x19fcb8u: goto label_19fcb8;
        case 0x19fcbcu: goto label_19fcbc;
        case 0x19fcc0u: goto label_19fcc0;
        case 0x19fcc4u: goto label_19fcc4;
        case 0x19fcc8u: goto label_19fcc8;
        case 0x19fcccu: goto label_19fccc;
        case 0x19fcd0u: goto label_19fcd0;
        case 0x19fcd4u: goto label_19fcd4;
        case 0x19fcd8u: goto label_19fcd8;
        case 0x19fcdcu: goto label_19fcdc;
        case 0x19fce0u: goto label_19fce0;
        case 0x19fce4u: goto label_19fce4;
        case 0x19fce8u: goto label_19fce8;
        case 0x19fcecu: goto label_19fcec;
        case 0x19fcf0u: goto label_19fcf0;
        case 0x19fcf4u: goto label_19fcf4;
        case 0x19fcf8u: goto label_19fcf8;
        case 0x19fcfcu: goto label_19fcfc;
        default: break;
    }

    ctx->pc = 0x19fbb0u;

label_19fbb0:
    // 0x19fbb0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_19fbb4:
    // 0x19fbb4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19fbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_19fbb8:
    // 0x19fbb8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19fbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_19fbbc:
    // 0x19fbbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19fbbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19fbc0:
    // 0x19fbc0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_19fbc4:
    // 0x19fbc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19fbc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19fbc8:
    // 0x19fbc8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_19fbcc:
    // 0x19fbcc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x19fbccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19fbd0:
    // 0x19fbd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19fbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19fbd4:
    // 0x19fbd4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x19fbd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_19fbd8:
    // 0x19fbd8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x19fbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_19fbdc:
    // 0x19fbdc: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x19fbdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_19fbe0:
    // 0x19fbe0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19fbe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19fbe4:
    // 0x19fbe4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19fbe4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19fbe8:
    // 0x19fbe8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x19fbe8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_19fbec:
    // 0x19fbec: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x19fbecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_19fbf0:
    // 0x19fbf0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x19fbf0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_19fbf4:
    // 0x19fbf4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19fbf4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_19fbf8:
    // 0x19fbf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fbfc:
    // 0x19fbfc: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x19fbfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_19fc00:
    // 0x19fc00: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x19fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_19fc04:
    // 0x19fc04: 0x60f809  jalr        $v1
label_19fc08:
    if (ctx->pc == 0x19FC08u) {
        ctx->pc = 0x19FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC04u;
        // 0x19fc08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC0Cu;
        goto label_19fc0c;
    }
    ctx->pc = 0x19FC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19FC0Cu);
        ctx->pc = 0x19FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC04u;
        // 0x19fc08: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC04u, 0x19FC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FC0Cu;
label_19fc0c:
    // 0x19fc0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fc10:
    // 0x19fc10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19fc10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fc14:
    // 0x19fc14: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19fc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19fc18:
    // 0x19fc18: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x19fc18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_19fc1c:
    // 0x19fc1c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19fc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19fc20:
    // 0x19fc20: 0x60f809  jalr        $v1
label_19fc24:
    if (ctx->pc == 0x19FC24u) {
        ctx->pc = 0x19FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC20u;
        // 0x19fc24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC28u;
        goto label_19fc28;
    }
    ctx->pc = 0x19FC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19FC28u);
        ctx->pc = 0x19FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC20u;
        // 0x19fc24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC20u, 0x19FC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FC28u;
label_19fc28:
    // 0x19fc28: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x19fc28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_19fc2c:
    // 0x19fc2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fc30:
    // 0x19fc30: 0xe6141300  swc1        $f20, 0x1300($s0)
    ctx->pc = 0x19fc30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4864), bits); }
label_19fc34:
    // 0x19fc34: 0xe6151304  swc1        $f21, 0x1304($s0)
    ctx->pc = 0x19fc34u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4868), bits); }
label_19fc38:
    // 0x19fc38: 0x7e0212f0  sq          $v0, 0x12F0($s0)
    ctx->pc = 0x19fc38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4848), GPR_VEC(ctx, 2));
label_19fc3c:
    // 0x19fc3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fc40:
    // 0x19fc40: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x19fc40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_19fc44:
    // 0x19fc44: 0xae131320  sw          $s3, 0x1320($s0)
    ctx->pc = 0x19fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4896), GPR_U32(ctx, 19));
label_19fc48:
    // 0x19fc48: 0xae141324  sw          $s4, 0x1324($s0)
    ctx->pc = 0x19fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4900), GPR_U32(ctx, 20));
label_19fc4c:
    // 0x19fc4c: 0x7e021310  sq          $v0, 0x1310($s0)
    ctx->pc = 0x19fc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4880), GPR_VEC(ctx, 2));
label_19fc50:
    // 0x19fc50: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x19fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_19fc54:
    // 0x19fc54: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19fc54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_19fc58:
    // 0x19fc58: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x19fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19fc5c:
    // 0x19fc5c: 0x40f809  jalr        $v0
label_19fc60:
    if (ctx->pc == 0x19FC60u) {
        ctx->pc = 0x19FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC5Cu;
        // 0x19fc60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC64u;
        goto label_19fc64;
    }
    ctx->pc = 0x19FC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19FC64u);
        ctx->pc = 0x19FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC5Cu;
        // 0x19fc60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC5Cu, 0x19FC64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FC64u;
label_19fc64:
    // 0x19fc64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19fc68:
    // 0x19fc68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19fc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fc6c:
    // 0x19fc6c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x19fc6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_19fc70:
    // 0x19fc70: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x19fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_19fc74:
    // 0x19fc74: 0x40f809  jalr        $v0
label_19fc78:
    if (ctx->pc == 0x19FC78u) {
        ctx->pc = 0x19FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC74u;
        // 0x19fc78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC7Cu;
        goto label_19fc7c;
    }
    ctx->pc = 0x19FC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19FC7Cu);
        ctx->pc = 0x19FC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC74u;
        // 0x19fc78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC74u, 0x19FC7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FC7Cu;
label_19fc7c:
    // 0x19fc7c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x19fc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_19fc80:
    // 0x19fc80: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x19fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19fc84:
    // 0x19fc84: 0xa3a60010  sb          $a2, 0x10($sp)
    ctx->pc = 0x19fc84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 6));
label_19fc88:
    // 0x19fc88: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x19fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_19fc8c:
    // 0x19fc8c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x19fc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_19fc90:
    // 0x19fc90: 0x260413b0  addiu       $a0, $s0, 0x13B0
    ctx->pc = 0x19fc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5040));
label_19fc94:
    // 0x19fc94: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x19fc94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
label_19fc98:
    // 0x19fc98: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19fc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19fc9c:
    // 0x19fc9c: 0xa0660001  sb          $a2, 0x1($v1)
    ctx->pc = 0x19fc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 6));
label_19fca0:
    // 0x19fca0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19fca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fca4:
    // 0x19fca4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x19fca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_19fca8:
    // 0x19fca8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19fca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19fcac:
    // 0x19fcac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19fcacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19fcb0:
    // 0x19fcb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19fcb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fcb4:
    // 0x19fcb4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x19fcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_19fcb8:
    // 0x19fcb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19fcb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fcbc:
    // 0x19fcbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19fcbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19fcc0:
    // 0x19fcc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19fcc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19fcc4:
    // 0x19fcc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19fcc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fcc8:
    // 0x19fcc8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_19fccc:
    // 0x19fccc: 0xc06e424  jal         func_1B9090
label_19fcd0:
    if (ctx->pc == 0x19FCD0u) {
        ctx->pc = 0x19FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCCCu;
        // 0x19fcd0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FCD4u;
        goto label_19fcd4;
    }
    ctx->pc = 0x19FCCCu;
    SET_GPR_U32(ctx, 31, 0x19FCD4u);
    ctx->pc = 0x19FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FCCCu;
    // 0x19fcd0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9090u, 0x19FCCCu, 0x19FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FCD4u;
label_19fcd4:
    // 0x19fcd4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19fcd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19fcd8:
    // 0x19fcd8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19fcd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19fcdc:
    // 0x19fcdc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19fcdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19fce0:
    // 0x19fce0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19fce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19fce4:
    // 0x19fce4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19fce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19fce8:
    // 0x19fce8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x19fce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19fcec:
    // 0x19fcec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19fcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19fcf0:
    // 0x19fcf0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x19fcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19fcf4:
    // 0x19fcf4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x19fcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19fcf8:
    // 0x19fcf8: 0x3e00008  jr          $ra
label_19fcfc:
    if (ctx->pc == 0x19FCFCu) {
        ctx->pc = 0x19FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCF8u;
        // 0x19fcfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FD00u;
        goto label_fallthrough_0x19fcf8;
    }
    ctx->pc = 0x19FCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCF8u;
        // 0x19fcfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19fcf8:
    ctx->pc = 0x19FD00u;
}
