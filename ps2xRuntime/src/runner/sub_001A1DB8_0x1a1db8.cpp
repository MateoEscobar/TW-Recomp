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

// Function: sub_001A1DB8
// Address: 0x1a1db8 - 0x1a1f10
void sub_001A1DB8_0x1a1db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1DB8_0x1a1db8");
#endif

    switch (ctx->pc) {
        case 0x1a1db8u: goto label_1a1db8;
        case 0x1a1dbcu: goto label_1a1dbc;
        case 0x1a1dc0u: goto label_1a1dc0;
        case 0x1a1dc4u: goto label_1a1dc4;
        case 0x1a1dc8u: goto label_1a1dc8;
        case 0x1a1dccu: goto label_1a1dcc;
        case 0x1a1dd0u: goto label_1a1dd0;
        case 0x1a1dd4u: goto label_1a1dd4;
        case 0x1a1dd8u: goto label_1a1dd8;
        case 0x1a1ddcu: goto label_1a1ddc;
        case 0x1a1de0u: goto label_1a1de0;
        case 0x1a1de4u: goto label_1a1de4;
        case 0x1a1de8u: goto label_1a1de8;
        case 0x1a1decu: goto label_1a1dec;
        case 0x1a1df0u: goto label_1a1df0;
        case 0x1a1df4u: goto label_1a1df4;
        case 0x1a1df8u: goto label_1a1df8;
        case 0x1a1dfcu: goto label_1a1dfc;
        case 0x1a1e00u: goto label_1a1e00;
        case 0x1a1e04u: goto label_1a1e04;
        case 0x1a1e08u: goto label_1a1e08;
        case 0x1a1e0cu: goto label_1a1e0c;
        case 0x1a1e10u: goto label_1a1e10;
        case 0x1a1e14u: goto label_1a1e14;
        case 0x1a1e18u: goto label_1a1e18;
        case 0x1a1e1cu: goto label_1a1e1c;
        case 0x1a1e20u: goto label_1a1e20;
        case 0x1a1e24u: goto label_1a1e24;
        case 0x1a1e28u: goto label_1a1e28;
        case 0x1a1e2cu: goto label_1a1e2c;
        case 0x1a1e30u: goto label_1a1e30;
        case 0x1a1e34u: goto label_1a1e34;
        case 0x1a1e38u: goto label_1a1e38;
        case 0x1a1e3cu: goto label_1a1e3c;
        case 0x1a1e40u: goto label_1a1e40;
        case 0x1a1e44u: goto label_1a1e44;
        case 0x1a1e48u: goto label_1a1e48;
        case 0x1a1e4cu: goto label_1a1e4c;
        case 0x1a1e50u: goto label_1a1e50;
        case 0x1a1e54u: goto label_1a1e54;
        case 0x1a1e58u: goto label_1a1e58;
        case 0x1a1e5cu: goto label_1a1e5c;
        case 0x1a1e60u: goto label_1a1e60;
        case 0x1a1e64u: goto label_1a1e64;
        case 0x1a1e68u: goto label_1a1e68;
        case 0x1a1e6cu: goto label_1a1e6c;
        case 0x1a1e70u: goto label_1a1e70;
        case 0x1a1e74u: goto label_1a1e74;
        case 0x1a1e78u: goto label_1a1e78;
        case 0x1a1e7cu: goto label_1a1e7c;
        case 0x1a1e80u: goto label_1a1e80;
        case 0x1a1e84u: goto label_1a1e84;
        case 0x1a1e88u: goto label_1a1e88;
        case 0x1a1e8cu: goto label_1a1e8c;
        case 0x1a1e90u: goto label_1a1e90;
        case 0x1a1e94u: goto label_1a1e94;
        case 0x1a1e98u: goto label_1a1e98;
        case 0x1a1e9cu: goto label_1a1e9c;
        case 0x1a1ea0u: goto label_1a1ea0;
        case 0x1a1ea4u: goto label_1a1ea4;
        case 0x1a1ea8u: goto label_1a1ea8;
        case 0x1a1eacu: goto label_1a1eac;
        case 0x1a1eb0u: goto label_1a1eb0;
        case 0x1a1eb4u: goto label_1a1eb4;
        case 0x1a1eb8u: goto label_1a1eb8;
        case 0x1a1ebcu: goto label_1a1ebc;
        case 0x1a1ec0u: goto label_1a1ec0;
        case 0x1a1ec4u: goto label_1a1ec4;
        case 0x1a1ec8u: goto label_1a1ec8;
        case 0x1a1eccu: goto label_1a1ecc;
        case 0x1a1ed0u: goto label_1a1ed0;
        case 0x1a1ed4u: goto label_1a1ed4;
        case 0x1a1ed8u: goto label_1a1ed8;
        case 0x1a1edcu: goto label_1a1edc;
        case 0x1a1ee0u: goto label_1a1ee0;
        case 0x1a1ee4u: goto label_1a1ee4;
        case 0x1a1ee8u: goto label_1a1ee8;
        case 0x1a1eecu: goto label_1a1eec;
        case 0x1a1ef0u: goto label_1a1ef0;
        case 0x1a1ef4u: goto label_1a1ef4;
        case 0x1a1ef8u: goto label_1a1ef8;
        case 0x1a1efcu: goto label_1a1efc;
        case 0x1a1f00u: goto label_1a1f00;
        case 0x1a1f04u: goto label_1a1f04;
        case 0x1a1f08u: goto label_1a1f08;
        case 0x1a1f0cu: goto label_1a1f0c;
        default: break;
    }

    ctx->pc = 0x1a1db8u;

label_1a1db8:
    // 0x1a1db8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a1db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a1dbc:
    // 0x1a1dbc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a1dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1a1dc0:
    // 0x1a1dc0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1a1dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1a1dc4:
    // 0x1a1dc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1dc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1dc8:
    // 0x1a1dc8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1a1dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1a1dcc:
    // 0x1a1dcc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a1dccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a1dd0:
    // 0x1a1dd0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a1dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1a1dd4:
    // 0x1a1dd4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1a1dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a1dd8:
    // 0x1a1dd8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a1dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1a1ddc:
    // 0x1a1ddc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a1de0:
    // 0x1a1de0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a1de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1a1de4:
    // 0x1a1de4: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1a1de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a1de8:
    // 0x1a1de8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1a1de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1a1dec:
    // 0x1a1dec: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1a1decu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1a1df0:
    // 0x1a1df0: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x1a1df0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_1a1df4:
    // 0x1a1df4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1a1df4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1a1df8:
    // 0x1a1df8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x1a1df8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1a1dfc:
    // 0x1a1dfc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1a1dfcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1a1e00:
    // 0x1a1e00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a1e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a1e04:
    // 0x1a1e04: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1a1e04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_1a1e08:
    // 0x1a1e08: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1a1e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1a1e0c:
    // 0x1a1e0c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1a1e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_1a1e10:
    // 0x1a1e10: 0xa20200f9  sb          $v0, 0xF9($s0)
    ctx->pc = 0x1a1e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 249), (uint8_t)GPR_U32(ctx, 2));
label_1a1e14:
    // 0x1a1e14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a1e18:
    if (ctx->pc == 0x1A1E18u) {
        ctx->pc = 0x1A1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E14u;
        // 0x1a1e18: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E1Cu;
        goto label_1a1e1c;
    }
    ctx->pc = 0x1A1E14u;
    {
        const bool branch_taken_0x1a1e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E14u;
        // 0x1a1e18: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e14) {
            ctx->pc = 0x1A1E28u;
            goto label_1a1e28;
        }
    }
    ctx->pc = 0x1A1E1Cu;
label_1a1e1c:
    // 0x1a1e1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1e20:
    // 0x1a1e20: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a1e24:
    if (ctx->pc == 0x1A1E24u) {
        ctx->pc = 0x1A1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E20u;
        // 0x1a1e24: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E28u;
        goto label_1a1e28;
    }
    ctx->pc = 0x1A1E20u;
    {
        const bool branch_taken_0x1a1e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E20u;
        // 0x1a1e24: 0xae0200fc  sw          $v0, 0xFC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e20) {
            ctx->pc = 0x1A1E2Cu;
            goto label_1a1e2c;
        }
    }
    ctx->pc = 0x1A1E28u;
label_1a1e28:
    // 0x1a1e28: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x1a1e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_1a1e2c:
    // 0x1a1e2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1e30:
    // 0x1a1e30: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1a1e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1a1e34:
    // 0x1a1e34: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1a1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1a1e38:
    // 0x1a1e38: 0x60f809  jalr        $v1
label_1a1e3c:
    if (ctx->pc == 0x1A1E3Cu) {
        ctx->pc = 0x1A1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E38u;
        // 0x1a1e3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E40u;
        goto label_1a1e40;
    }
    ctx->pc = 0x1A1E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1E40u);
        ctx->pc = 0x1A1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E38u;
        // 0x1a1e3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E38u, 0x1A1E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E40u;
label_1a1e40:
    // 0x1a1e40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1e44:
    // 0x1a1e44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e48:
    // 0x1a1e48: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a1e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a1e4c:
    // 0x1a1e4c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a1e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a1e50:
    // 0x1a1e50: 0x60f809  jalr        $v1
label_1a1e54:
    if (ctx->pc == 0x1A1E54u) {
        ctx->pc = 0x1A1E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E50u;
        // 0x1a1e54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E58u;
        goto label_1a1e58;
    }
    ctx->pc = 0x1A1E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1E58u);
        ctx->pc = 0x1A1E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E50u;
        // 0x1a1e54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E50u, 0x1A1E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E58u;
label_1a1e58:
    // 0x1a1e58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a1e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e5c:
    // 0x1a1e5c: 0xc068a44  jal         func_1A2910
label_1a1e60:
    if (ctx->pc == 0x1A1E60u) {
        ctx->pc = 0x1A1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E5Cu;
        // 0x1a1e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E64u;
        goto label_1a1e64;
    }
    ctx->pc = 0x1A1E5Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E64u);
    ctx->pc = 0x1A1E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E5Cu;
    // 0x1a1e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1A1E5Cu, 0x1A1E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E64u;
label_1a1e64:
    // 0x1a1e64: 0xe61400e4  swc1        $f20, 0xE4($s0)
    ctx->pc = 0x1a1e64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1a1e68:
    // 0x1a1e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e6c:
    // 0x1a1e6c: 0xc068a46  jal         func_1A2918
label_1a1e70:
    if (ctx->pc == 0x1A1E70u) {
        ctx->pc = 0x1A1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E6Cu;
        // 0x1a1e70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E74u;
        goto label_1a1e74;
    }
    ctx->pc = 0x1A1E6Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E74u);
    ctx->pc = 0x1A1E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E6Cu;
    // 0x1a1e70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2918u, 0x1A1E6Cu, 0x1A1E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E74u;
label_1a1e74:
    // 0x1a1e74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1e78:
    // 0x1a1e78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a1e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e7c:
    // 0x1a1e7c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a1e7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1a1e80:
    // 0x1a1e80: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a1e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a1e84:
    // 0x1a1e84: 0x60f809  jalr        $v1
label_1a1e88:
    if (ctx->pc == 0x1A1E88u) {
        ctx->pc = 0x1A1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E84u;
        // 0x1a1e88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E8Cu;
        goto label_1a1e8c;
    }
    ctx->pc = 0x1A1E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1E8Cu);
        ctx->pc = 0x1A1E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E84u;
        // 0x1a1e88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E84u, 0x1A1E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E8Cu;
label_1a1e8c:
    // 0x1a1e8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1e90:
    // 0x1a1e90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a1e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1e94:
    // 0x1a1e94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1a1e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e98:
    // 0x1a1e98: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a1e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a1e9c:
    // 0x1a1e9c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a1ea0:
    // 0x1a1ea0: 0x60f809  jalr        $v1
label_1a1ea4:
    if (ctx->pc == 0x1A1EA4u) {
        ctx->pc = 0x1A1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EA0u;
        // 0x1a1ea4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1EA8u;
        goto label_1a1ea8;
    }
    ctx->pc = 0x1A1EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1EA8u);
        ctx->pc = 0x1A1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EA0u;
        // 0x1a1ea4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1EA0u, 0x1A1EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1EA8u;
label_1a1ea8:
    // 0x1a1ea8: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x1a1ea8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1a1eac:
    // 0x1a1eac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1a1eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1a1eb0:
    // 0x1a1eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1eb4:
    // 0x1a1eb4: 0xc068846  jal         func_1A2118
label_1a1eb8:
    if (ctx->pc == 0x1A1EB8u) {
        ctx->pc = 0x1A1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EB4u;
        // 0x1a1eb8: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1EBCu;
        goto label_1a1ebc;
    }
    ctx->pc = 0x1A1EB4u;
    SET_GPR_U32(ctx, 31, 0x1A1EBCu);
    ctx->pc = 0x1A1EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EB4u;
    // 0x1a1eb8: 0x7e020030  sq          $v0, 0x30($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2118u, 0x1A1EB4u, 0x1A1EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1EBCu;
label_1a1ebc:
    // 0x1a1ebc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1a1ebcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a1ec0:
    // 0x1a1ec0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1a1ec0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1a1ec4:
    // 0x1a1ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ec8:
    // 0x1a1ec8: 0xc068848  jal         func_1A2120
label_1a1ecc:
    if (ctx->pc == 0x1A1ECCu) {
        ctx->pc = 0x1A1ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EC8u;
        // 0x1a1ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1ED0u;
        goto label_1a1ed0;
    }
    ctx->pc = 0x1A1EC8u;
    SET_GPR_U32(ctx, 31, 0x1A1ED0u);
    ctx->pc = 0x1A1ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EC8u;
    // 0x1a1ecc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x1A1EC8u, 0x1A1ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1ED0u;
label_1a1ed0:
    // 0x1a1ed0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1a1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1a1ed4:
    // 0x1a1ed4: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x1a1ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
label_1a1ed8:
    // 0x1a1ed8: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x1a1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_1a1edc:
    // 0x1a1edc: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1a1edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_1a1ee0:
    // 0x1a1ee0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a1ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a1ee4:
    // 0x1a1ee4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a1ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a1ee8:
    // 0x1a1ee8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a1ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a1eec:
    // 0x1a1eec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a1eecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a1ef0:
    // 0x1a1ef0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1a1ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a1ef4:
    // 0x1a1ef4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1a1ef4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a1ef8:
    // 0x1a1ef8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a1ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1efc:
    // 0x1a1efc: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x1a1efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1a1f00:
    // 0x1a1f00: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x1a1f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a1f04:
    // 0x1a1f04: 0x3e00008  jr          $ra
label_1a1f08:
    if (ctx->pc == 0x1A1F08u) {
        ctx->pc = 0x1A1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F04u;
        // 0x1a1f08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F0Cu;
        goto label_1a1f0c;
    }
    ctx->pc = 0x1A1F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F04u;
        // 0x1a1f08: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1F0Cu;
label_1a1f0c:
    // 0x1a1f0c: 0x0  nop
    ctx->pc = 0x1a1f0cu;
    // NOP
    ctx->pc = 0x1a1f10u;
}
