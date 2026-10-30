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

// Function: sub_003A2EA0
// Address: 0x3a2ea0 - 0x3a3000
void sub_003A2EA0_0x3a2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2EA0_0x3a2ea0");
#endif

    switch (ctx->pc) {
        case 0x3a2ea0u: goto label_3a2ea0;
        case 0x3a2ea4u: goto label_3a2ea4;
        case 0x3a2ea8u: goto label_3a2ea8;
        case 0x3a2eacu: goto label_3a2eac;
        case 0x3a2eb0u: goto label_3a2eb0;
        case 0x3a2eb4u: goto label_3a2eb4;
        case 0x3a2eb8u: goto label_3a2eb8;
        case 0x3a2ebcu: goto label_3a2ebc;
        case 0x3a2ec0u: goto label_3a2ec0;
        case 0x3a2ec4u: goto label_3a2ec4;
        case 0x3a2ec8u: goto label_3a2ec8;
        case 0x3a2eccu: goto label_3a2ecc;
        case 0x3a2ed0u: goto label_3a2ed0;
        case 0x3a2ed4u: goto label_3a2ed4;
        case 0x3a2ed8u: goto label_3a2ed8;
        case 0x3a2edcu: goto label_3a2edc;
        case 0x3a2ee0u: goto label_3a2ee0;
        case 0x3a2ee4u: goto label_3a2ee4;
        case 0x3a2ee8u: goto label_3a2ee8;
        case 0x3a2eecu: goto label_3a2eec;
        case 0x3a2ef0u: goto label_3a2ef0;
        case 0x3a2ef4u: goto label_3a2ef4;
        case 0x3a2ef8u: goto label_3a2ef8;
        case 0x3a2efcu: goto label_3a2efc;
        case 0x3a2f00u: goto label_3a2f00;
        case 0x3a2f04u: goto label_3a2f04;
        case 0x3a2f08u: goto label_3a2f08;
        case 0x3a2f0cu: goto label_3a2f0c;
        case 0x3a2f10u: goto label_3a2f10;
        case 0x3a2f14u: goto label_3a2f14;
        case 0x3a2f18u: goto label_3a2f18;
        case 0x3a2f1cu: goto label_3a2f1c;
        case 0x3a2f20u: goto label_3a2f20;
        case 0x3a2f24u: goto label_3a2f24;
        case 0x3a2f28u: goto label_3a2f28;
        case 0x3a2f2cu: goto label_3a2f2c;
        case 0x3a2f30u: goto label_3a2f30;
        case 0x3a2f34u: goto label_3a2f34;
        case 0x3a2f38u: goto label_3a2f38;
        case 0x3a2f3cu: goto label_3a2f3c;
        case 0x3a2f40u: goto label_3a2f40;
        case 0x3a2f44u: goto label_3a2f44;
        case 0x3a2f48u: goto label_3a2f48;
        case 0x3a2f4cu: goto label_3a2f4c;
        case 0x3a2f50u: goto label_3a2f50;
        case 0x3a2f54u: goto label_3a2f54;
        case 0x3a2f58u: goto label_3a2f58;
        case 0x3a2f5cu: goto label_3a2f5c;
        case 0x3a2f60u: goto label_3a2f60;
        case 0x3a2f64u: goto label_3a2f64;
        case 0x3a2f68u: goto label_3a2f68;
        case 0x3a2f6cu: goto label_3a2f6c;
        case 0x3a2f70u: goto label_3a2f70;
        case 0x3a2f74u: goto label_3a2f74;
        case 0x3a2f78u: goto label_3a2f78;
        case 0x3a2f7cu: goto label_3a2f7c;
        case 0x3a2f80u: goto label_3a2f80;
        case 0x3a2f84u: goto label_3a2f84;
        case 0x3a2f88u: goto label_3a2f88;
        case 0x3a2f8cu: goto label_3a2f8c;
        case 0x3a2f90u: goto label_3a2f90;
        case 0x3a2f94u: goto label_3a2f94;
        case 0x3a2f98u: goto label_3a2f98;
        case 0x3a2f9cu: goto label_3a2f9c;
        case 0x3a2fa0u: goto label_3a2fa0;
        case 0x3a2fa4u: goto label_3a2fa4;
        case 0x3a2fa8u: goto label_3a2fa8;
        case 0x3a2facu: goto label_3a2fac;
        case 0x3a2fb0u: goto label_3a2fb0;
        case 0x3a2fb4u: goto label_3a2fb4;
        case 0x3a2fb8u: goto label_3a2fb8;
        case 0x3a2fbcu: goto label_3a2fbc;
        case 0x3a2fc0u: goto label_3a2fc0;
        case 0x3a2fc4u: goto label_3a2fc4;
        case 0x3a2fc8u: goto label_3a2fc8;
        case 0x3a2fccu: goto label_3a2fcc;
        case 0x3a2fd0u: goto label_3a2fd0;
        case 0x3a2fd4u: goto label_3a2fd4;
        case 0x3a2fd8u: goto label_3a2fd8;
        case 0x3a2fdcu: goto label_3a2fdc;
        case 0x3a2fe0u: goto label_3a2fe0;
        case 0x3a2fe4u: goto label_3a2fe4;
        case 0x3a2fe8u: goto label_3a2fe8;
        case 0x3a2fecu: goto label_3a2fec;
        case 0x3a2ff0u: goto label_3a2ff0;
        case 0x3a2ff4u: goto label_3a2ff4;
        case 0x3a2ff8u: goto label_3a2ff8;
        case 0x3a2ffcu: goto label_3a2ffc;
        default: break;
    }

    ctx->pc = 0x3a2ea0u;

label_3a2ea0:
    // 0x3a2ea0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3a2ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3a2ea4:
    // 0x3a2ea4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3a2ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3a2ea8:
    // 0x3a2ea8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3a2ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3a2eac:
    // 0x3a2eac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3a2eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3a2eb0:
    // 0x3a2eb0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3a2eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3a2eb4:
    // 0x3a2eb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3a2eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a2eb8:
    // 0x3a2eb8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3a2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3a2ebc:
    // 0x3a2ebc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a2ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3a2ec0:
    // 0x3a2ec0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3a2ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3a2ec4:
    // 0x3a2ec4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3a2ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3a2ec8:
    // 0x3a2ec8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3a2ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_3a2ecc:
    // 0x3a2ecc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a2ed0:
    // 0x3a2ed0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3a2ed0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3a2ed4:
    // 0x3a2ed4: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x3a2ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
label_3a2ed8:
    // 0x3a2ed8: 0x8e62082c  lw          $v0, 0x82C($s3)
    ctx->pc = 0x3a2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2092)));
label_3a2edc:
    // 0x3a2edc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a2ee0:
    // 0x3a2ee0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3a2ee4:
    // 0x3a2ee4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3a2ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3a2ee8:
    // 0x3a2ee8: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x3a2ee8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_3a2eec:
    // 0x3a2eec: 0xdc500008  ld          $s0, 0x8($v0)
    ctx->pc = 0x3a2eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_3a2ef0:
    // 0x3a2ef0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3a2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3a2ef4:
    // 0x3a2ef4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x3a2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_3a2ef8:
    // 0x3a2ef8: 0x40f809  jalr        $v0
label_3a2efc:
    if (ctx->pc == 0x3A2EFCu) {
        ctx->pc = 0x3A2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2EF8u;
        // 0x3a2efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2F00u;
        goto label_3a2f00;
    }
    ctx->pc = 0x3A2EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2F00u);
        ctx->pc = 0x3A2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2EF8u;
        // 0x3a2efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2EF8u, 0x3A2F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2F00u;
label_3a2f00:
    // 0x3a2f00: 0xc104dca  jal         func_413728
label_3a2f04:
    if (ctx->pc == 0x3A2F04u) {
        ctx->pc = 0x3A2F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F00u;
        // 0x3a2f04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2F08u;
        goto label_3a2f08;
    }
    ctx->pc = 0x3A2F00u;
    SET_GPR_U32(ctx, 31, 0x3A2F08u);
    ctx->pc = 0x3A2F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F00u;
    // 0x3a2f04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413728u, 0x3A2F00u, 0x3A2F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F08u;
label_3a2f08:
    // 0x3a2f08: 0x3c020095  lui         $v0, 0x95
    ctx->pc = 0x3a2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)149 << 16));
label_3a2f0c:
    // 0x3a2f0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a2f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3a2f10:
    // 0x3a2f10: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3a2f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3a2f14:
    // 0x3a2f14: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3a2f18:
    if (ctx->pc == 0x3A2F18u) {
        ctx->pc = 0x3A2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F14u;
        // 0x3a2f18: 0x3c160059  lui         $s6, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2F1Cu;
        goto label_3a2f1c;
    }
    ctx->pc = 0x3A2F14u;
    {
        const bool branch_taken_0x3a2f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F14u;
        // 0x3a2f18: 0x3c160059  lui         $s6, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f14) {
            ctx->pc = 0x3A2FACu;
            goto label_3a2fac;
        }
    }
    ctx->pc = 0x3A2F1Cu;
label_3a2f1c:
    // 0x3a2f1c: 0x3c013169  lui         $at, 0x3169
    ctx->pc = 0x3a2f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12649 << 16));
label_3a2f20:
    // 0x3a2f20: 0x34210453  ori         $at, $at, 0x453
    ctx->pc = 0x3a2f20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1107);
label_3a2f24:
    // 0x3a2f24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a2f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a2f28:
    // 0x3a2f28: 0x3c15ffb5  lui         $s5, 0xFFB5
    ctx->pc = 0x3a2f28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65461 << 16));
label_3a2f2c:
    // 0x3a2f2c: 0x3c14004b  lui         $s4, 0x4B
    ctx->pc = 0x3a2f2cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)75 << 16));
label_3a2f30:
    // 0x3a2f30: 0x3c170095  lui         $s7, 0x95
    ctx->pc = 0x3a2f30u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)149 << 16));
label_3a2f34:
    // 0x3a2f34: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x3a2f34u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
label_3a2f38:
    // 0x3a2f38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a2f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2f3c:
    // 0x3a2f3c: 0x0  nop
    ctx->pc = 0x3a2f3cu;
    // NOP
label_3a2f40:
    // 0x3a2f40: 0x214802d  daddu       $s0, $s0, $s4
    ctx->pc = 0x3a2f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 20));
label_3a2f44:
    // 0x3a2f44: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
label_3a2f48:
    if (ctx->pc == 0x3A2F48u) {
        ctx->pc = 0x3A2F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F44u;
        // 0x3a2f48: 0x235882d  daddu       $s1, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2F4Cu;
        goto label_3a2f4c;
    }
    ctx->pc = 0x3A2F44u;
    {
        const bool branch_taken_0x3a2f44 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3A2F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F44u;
        // 0x3a2f48: 0x235882d  daddu       $s1, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f44) {
            ctx->pc = 0x3A2F5Cu;
            goto label_3a2f5c;
        }
    }
    ctx->pc = 0x3A2F4Cu;
label_3a2f4c:
    // 0x3a2f4c: 0xc10ac74  jal         func_42B1D0
label_3a2f50:
    if (ctx->pc == 0x3A2F50u) {
        ctx->pc = 0x3A2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F4Cu;
        // 0x3a2f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2F54u;
        goto label_3a2f54;
    }
    ctx->pc = 0x3A2F4Cu;
    SET_GPR_U32(ctx, 31, 0x3A2F54u);
    ctx->pc = 0x3A2F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F4Cu;
    // 0x3a2f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x3A2F4Cu, 0x3A2F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F54u;
label_3a2f54:
    // 0x3a2f54: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a2f58:
    if (ctx->pc == 0x3A2F58u) {
        ctx->pc = 0x3A2F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F54u;
        // 0x3a2f58: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2F5Cu;
        goto label_3a2f5c;
    }
    ctx->pc = 0x3A2F54u;
    {
        const bool branch_taken_0x3a2f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F54u;
        // 0x3a2f58: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2f54) {
            ctx->pc = 0x3A2F74u;
            goto label_3a2f74;
        }
    }
    ctx->pc = 0x3A2F5Cu;
label_3a2f5c:
    // 0x3a2f5c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3a2f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_3a2f60:
    // 0x3a2f60: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x3a2f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
label_3a2f64:
    // 0x3a2f64: 0xc10ac74  jal         func_42B1D0
label_3a2f68:
    if (ctx->pc == 0x3A2F68u) {
        ctx->pc = 0x3A2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F64u;
        // 0x3a2f68: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2F6Cu;
        goto label_3a2f6c;
    }
    ctx->pc = 0x3A2F64u;
    SET_GPR_U32(ctx, 31, 0x3A2F6Cu);
    ctx->pc = 0x3A2F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F64u;
    // 0x3a2f68: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B1D0u, 0x3A2F64u, 0x3A2F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F6Cu;
label_3a2f6c:
    // 0x3a2f6c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3a2f6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3a2f70:
    // 0x3a2f70: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x3a2f70u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3a2f74:
    // 0x3a2f74: 0xc0e8560  jal         func_3A1580
label_3a2f78:
    if (ctx->pc == 0x3A2F78u) {
        ctx->pc = 0x3A2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F74u;
        // 0x3a2f78: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2F7Cu;
        goto label_3a2f7c;
    }
    ctx->pc = 0x3A2F74u;
    SET_GPR_U32(ctx, 31, 0x3A2F7Cu);
    ctx->pc = 0x3A2F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F74u;
    // 0x3a2f78: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1580u, 0x3A2F74u, 0x3A2F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F7Cu;
label_3a2f7c:
    // 0x3a2f7c: 0xc092442  jal         func_249108
label_3a2f80:
    if (ctx->pc == 0x3A2F80u) {
        ctx->pc = 0x3A2F84u;
        goto label_3a2f84;
    }
    ctx->pc = 0x3A2F7Cu;
    SET_GPR_U32(ctx, 31, 0x3A2F84u);
    ctx->pc = 0x249108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249108u, 0x3A2F7Cu, 0x3A2F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F84u;
label_3a2f84:
    // 0x3a2f84: 0xc0e8d62  jal         func_3A3588
label_3a2f88:
    if (ctx->pc == 0x3A2F88u) {
        ctx->pc = 0x3A2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F84u;
        // 0x3a2f88: 0x8e640830  lw          $a0, 0x830($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2096)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2F8Cu;
        goto label_3a2f8c;
    }
    ctx->pc = 0x3A2F84u;
    SET_GPR_U32(ctx, 31, 0x3A2F8Cu);
    ctx->pc = 0x3A2F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F84u;
    // 0x3a2f88: 0x8e640830  lw          $a0, 0x830($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3588u, 0x3A2F84u, 0x3A2F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F8Cu;
label_3a2f8c:
    // 0x3a2f8c: 0xc0d0246  jal         func_340918
label_3a2f90:
    if (ctx->pc == 0x3A2F90u) {
        ctx->pc = 0x3A2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F8Cu;
        // 0x3a2f90: 0x8ec47198  lw          $a0, 0x7198($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2F94u;
        goto label_3a2f94;
    }
    ctx->pc = 0x3A2F8Cu;
    SET_GPR_U32(ctx, 31, 0x3A2F94u);
    ctx->pc = 0x3A2F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2F8Cu;
    // 0x3a2f90: 0x8ec47198  lw          $a0, 0x7198($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340918u, 0x3A2F8Cu, 0x3A2F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2F94u;
label_3a2f94:
    // 0x3a2f94: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x3a2f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3a2f98:
    // 0x3a2f98: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_3a2f9c:
    if (ctx->pc == 0x3A2F9Cu) {
        ctx->pc = 0x3A2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2F98u;
        // 0x3a2f9c: 0x214802d  daddu       $s0, $s0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2FA0u;
        goto label_3a2fa0;
    }
    ctx->pc = 0x3A2F98u;
    {
        const bool branch_taken_0x3a2f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2f98) {
            ctx->pc = 0x3A2F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2F98u;
            // 0x3a2f9c: 0x214802d  daddu       $s0, $s0, $s4 (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2F44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2f44;
        }
    }
    ctx->pc = 0x3A2FA0u;
label_3a2fa0:
    // 0x3a2fa0: 0x2f1102b  sltu        $v0, $s7, $s1
    ctx->pc = 0x3a2fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3a2fa4:
    // 0x3a2fa4: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_3a2fa8:
    if (ctx->pc == 0x3A2FA8u) {
        ctx->pc = 0x3A2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FA4u;
        // 0x3a2fa8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2FACu;
        goto label_3a2fac;
    }
    ctx->pc = 0x3A2FA4u;
    {
        const bool branch_taken_0x3a2fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FA4u;
        // 0x3a2fa8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2fa4) {
            ctx->pc = 0x3A2F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2f40;
        }
    }
    ctx->pc = 0x3A2FACu;
label_3a2fac:
    // 0x3a2fac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a2facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a2fb0:
    // 0x3a2fb0: 0xc1068dc  jal         func_41A370
label_3a2fb4:
    if (ctx->pc == 0x3A2FB4u) {
        ctx->pc = 0x3A2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FB0u;
        // 0x3a2fb4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2FB8u;
        goto label_3a2fb8;
    }
    ctx->pc = 0x3A2FB0u;
    SET_GPR_U32(ctx, 31, 0x3A2FB8u);
    ctx->pc = 0x3A2FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2FB0u;
    // 0x3a2fb4: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A370u, 0x3A2FB0u, 0x3A2FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2FB8u;
label_3a2fb8:
    // 0x3a2fb8: 0xc0e6762  jal         func_399D88
label_3a2fbc:
    if (ctx->pc == 0x3A2FBCu) {
        ctx->pc = 0x3A2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FB8u;
        // 0x3a2fbc: 0x8e640840  lw          $a0, 0x840($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2FC0u;
        goto label_3a2fc0;
    }
    ctx->pc = 0x3A2FB8u;
    SET_GPR_U32(ctx, 31, 0x3A2FC0u);
    ctx->pc = 0x3A2FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2FB8u;
    // 0x3a2fbc: 0x8e640840  lw          $a0, 0x840($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D88u, 0x3A2FB8u, 0x3A2FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2FC0u;
label_3a2fc0:
    // 0x3a2fc0: 0x8e62082c  lw          $v0, 0x82C($s3)
    ctx->pc = 0x3a2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2092)));
label_3a2fc4:
    // 0x3a2fc4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3a2fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a2fc8:
    // 0x3a2fc8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3a2fcc:
    // 0x3a2fcc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3a2fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a2fd0:
    // 0x3a2fd0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3a2fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3a2fd4:
    // 0x3a2fd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a2fd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a2fd8:
    // 0x3a2fd8: 0xfc500008  sd          $s0, 0x8($v0)
    ctx->pc = 0x3a2fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 16));
label_3a2fdc:
    // 0x3a2fdc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3a2fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a2fe0:
    // 0x3a2fe0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3a2fe0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a2fe4:
    // 0x3a2fe4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3a2fe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a2fe8:
    // 0x3a2fe8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3a2fe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a2fec:
    // 0x3a2fec: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3a2fecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a2ff0:
    // 0x3a2ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a2ff4:
    // 0x3a2ff4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3a2ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a2ff8:
    // 0x3a2ff8: 0x3e00008  jr          $ra
label_3a2ffc:
    if (ctx->pc == 0x3A2FFCu) {
        ctx->pc = 0x3A2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FF8u;
        // 0x3a2ffc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3000u;
        goto label_fallthrough_0x3a2ff8;
    }
    ctx->pc = 0x3A2FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2FF8u;
        // 0x3a2ffc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a2ff8:
    ctx->pc = 0x3A3000u;
}
