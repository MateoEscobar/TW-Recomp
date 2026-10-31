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

// Function: sub_00186E88
// Address: 0x186e88 - 0x186ff0
void sub_00186E88_0x186e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186E88_0x186e88");
#endif

    switch (ctx->pc) {
        case 0x186e88u: goto label_186e88;
        case 0x186e8cu: goto label_186e8c;
        case 0x186e90u: goto label_186e90;
        case 0x186e94u: goto label_186e94;
        case 0x186e98u: goto label_186e98;
        case 0x186e9cu: goto label_186e9c;
        case 0x186ea0u: goto label_186ea0;
        case 0x186ea4u: goto label_186ea4;
        case 0x186ea8u: goto label_186ea8;
        case 0x186eacu: goto label_186eac;
        case 0x186eb0u: goto label_186eb0;
        case 0x186eb4u: goto label_186eb4;
        case 0x186eb8u: goto label_186eb8;
        case 0x186ebcu: goto label_186ebc;
        case 0x186ec0u: goto label_186ec0;
        case 0x186ec4u: goto label_186ec4;
        case 0x186ec8u: goto label_186ec8;
        case 0x186eccu: goto label_186ecc;
        case 0x186ed0u: goto label_186ed0;
        case 0x186ed4u: goto label_186ed4;
        case 0x186ed8u: goto label_186ed8;
        case 0x186edcu: goto label_186edc;
        case 0x186ee0u: goto label_186ee0;
        case 0x186ee4u: goto label_186ee4;
        case 0x186ee8u: goto label_186ee8;
        case 0x186eecu: goto label_186eec;
        case 0x186ef0u: goto label_186ef0;
        case 0x186ef4u: goto label_186ef4;
        case 0x186ef8u: goto label_186ef8;
        case 0x186efcu: goto label_186efc;
        case 0x186f00u: goto label_186f00;
        case 0x186f04u: goto label_186f04;
        case 0x186f08u: goto label_186f08;
        case 0x186f0cu: goto label_186f0c;
        case 0x186f10u: goto label_186f10;
        case 0x186f14u: goto label_186f14;
        case 0x186f18u: goto label_186f18;
        case 0x186f1cu: goto label_186f1c;
        case 0x186f20u: goto label_186f20;
        case 0x186f24u: goto label_186f24;
        case 0x186f28u: goto label_186f28;
        case 0x186f2cu: goto label_186f2c;
        case 0x186f30u: goto label_186f30;
        case 0x186f34u: goto label_186f34;
        case 0x186f38u: goto label_186f38;
        case 0x186f3cu: goto label_186f3c;
        case 0x186f40u: goto label_186f40;
        case 0x186f44u: goto label_186f44;
        case 0x186f48u: goto label_186f48;
        case 0x186f4cu: goto label_186f4c;
        case 0x186f50u: goto label_186f50;
        case 0x186f54u: goto label_186f54;
        case 0x186f58u: goto label_186f58;
        case 0x186f5cu: goto label_186f5c;
        case 0x186f60u: goto label_186f60;
        case 0x186f64u: goto label_186f64;
        case 0x186f68u: goto label_186f68;
        case 0x186f6cu: goto label_186f6c;
        case 0x186f70u: goto label_186f70;
        case 0x186f74u: goto label_186f74;
        case 0x186f78u: goto label_186f78;
        case 0x186f7cu: goto label_186f7c;
        case 0x186f80u: goto label_186f80;
        case 0x186f84u: goto label_186f84;
        case 0x186f88u: goto label_186f88;
        case 0x186f8cu: goto label_186f8c;
        case 0x186f90u: goto label_186f90;
        case 0x186f94u: goto label_186f94;
        case 0x186f98u: goto label_186f98;
        case 0x186f9cu: goto label_186f9c;
        case 0x186fa0u: goto label_186fa0;
        case 0x186fa4u: goto label_186fa4;
        case 0x186fa8u: goto label_186fa8;
        case 0x186facu: goto label_186fac;
        case 0x186fb0u: goto label_186fb0;
        case 0x186fb4u: goto label_186fb4;
        case 0x186fb8u: goto label_186fb8;
        case 0x186fbcu: goto label_186fbc;
        case 0x186fc0u: goto label_186fc0;
        case 0x186fc4u: goto label_186fc4;
        case 0x186fc8u: goto label_186fc8;
        case 0x186fccu: goto label_186fcc;
        case 0x186fd0u: goto label_186fd0;
        case 0x186fd4u: goto label_186fd4;
        case 0x186fd8u: goto label_186fd8;
        case 0x186fdcu: goto label_186fdc;
        case 0x186fe0u: goto label_186fe0;
        case 0x186fe4u: goto label_186fe4;
        case 0x186fe8u: goto label_186fe8;
        case 0x186fecu: goto label_186fec;
        default: break;
    }

    ctx->pc = 0x186e88u;

label_186e88:
    // 0x186e88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x186e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_186e8c:
    // 0x186e8c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x186e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_186e90:
    // 0x186e90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x186e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_186e94:
    // 0x186e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186e98:
    // 0x186e98: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x186e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_186e9c:
    // 0x186e9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x186e9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_186ea0:
    // 0x186ea0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x186ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_186ea4:
    // 0x186ea4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x186ea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_186ea8:
    // 0x186ea8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x186ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_186eac:
    // 0x186eac: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x186eacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_186eb0:
    // 0x186eb0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x186eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_186eb4:
    // 0x186eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x186eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_186eb8:
    // 0x186eb8: 0xc061e6e  jal         func_1879B8
label_186ebc:
    if (ctx->pc == 0x186EBCu) {
        ctx->pc = 0x186EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EB8u;
        // 0x186ebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186EC0u;
        goto label_186ec0;
    }
    ctx->pc = 0x186EB8u;
    SET_GPR_U32(ctx, 31, 0x186EC0u);
    ctx->pc = 0x186EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186EB8u;
    // 0x186ebc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x186EB8u, 0x186EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186EC0u;
label_186ec0:
    // 0x186ec0: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x186ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_186ec4:
    // 0x186ec4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x186ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_186ec8:
    // 0x186ec8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x186ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_186ecc:
    // 0x186ecc: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x186eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_186ed0:
    // 0x186ed0: 0x8c65b9b8  lw          $a1, -0x4648($v1)
    ctx->pc = 0x186ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949304)));
label_186ed4:
    // 0x186ed4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x186ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186ed8:
    // 0x186ed8: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x186ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_186edc:
    // 0x186edc: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x186edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_186ee0:
    // 0x186ee0: 0x60f809  jalr        $v1
label_186ee4:
    if (ctx->pc == 0x186EE4u) {
        ctx->pc = 0x186EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EE0u;
        // 0x186ee4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186EE8u;
        goto label_186ee8;
    }
    ctx->pc = 0x186EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186EE8u);
        ctx->pc = 0x186EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EE0u;
        // 0x186ee4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186EE0u, 0x186EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186EE8u;
label_186ee8:
    // 0x186ee8: 0x8e4b27e4  lw          $t3, 0x27E4($s2)
    ctx->pc = 0x186ee8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_186eec:
    // 0x186eec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x186eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_186ef0:
    // 0x186ef0: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x186ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_186ef4:
    // 0x186ef4: 0x24a529e8  addiu       $a1, $a1, 0x29E8
    ctx->pc = 0x186ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10728));
label_186ef8:
    // 0x186ef8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x186ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_186efc:
    // 0x186efc: 0x25082b28  addiu       $t0, $t0, 0x2B28
    ctx->pc = 0x186efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11048));
label_186f00:
    // 0x186f00: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x186f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_186f04:
    // 0x186f04: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x186f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_186f08:
    // 0x186f08: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x186f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_186f0c:
    // 0x186f0c: 0x24090521  addiu       $t1, $zero, 0x521
    ctx->pc = 0x186f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1313));
label_186f10:
    // 0x186f10: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x186f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_186f14:
    // 0x186f14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x186f14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186f18:
    // 0x186f18: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x186f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_186f1c:
    // 0x186f1c: 0x40f809  jalr        $v0
label_186f20:
    if (ctx->pc == 0x186F20u) {
        ctx->pc = 0x186F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F1Cu;
        // 0x186f20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F24u;
        goto label_186f24;
    }
    ctx->pc = 0x186F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186F24u);
        ctx->pc = 0x186F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F1Cu;
        // 0x186f20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186F1Cu, 0x186F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186F24u;
label_186f24:
    // 0x186f24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x186f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186f28:
    // 0x186f28: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_186f2c:
    if (ctx->pc == 0x186F2Cu) {
        ctx->pc = 0x186F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F28u;
        // 0x186f2c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F30u;
        goto label_186f30;
    }
    ctx->pc = 0x186F28u;
    {
        const bool branch_taken_0x186f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x186F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F28u;
        // 0x186f2c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186f28) {
            ctx->pc = 0x186F38u;
            goto label_186f38;
        }
    }
    ctx->pc = 0x186F30u;
label_186f30:
    // 0x186f30: 0x24424370  addiu       $v0, $v0, 0x4370
    ctx->pc = 0x186f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17264));
label_186f34:
    // 0x186f34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x186f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_186f38:
    // 0x186f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186f3c:
    // 0x186f3c: 0xc061e6e  jal         func_1879B8
label_186f40:
    if (ctx->pc == 0x186F40u) {
        ctx->pc = 0x186F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F3Cu;
        // 0x186f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F44u;
        goto label_186f44;
    }
    ctx->pc = 0x186F3Cu;
    SET_GPR_U32(ctx, 31, 0x186F44u);
    ctx->pc = 0x186F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F3Cu;
    // 0x186f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879B8u, 0x186F3Cu, 0x186F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F44u;
label_186f44:
    // 0x186f44: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x186f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_186f48:
    // 0x186f48: 0x8e660030  lw          $a2, 0x30($s3)
    ctx->pc = 0x186f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_186f4c:
    // 0x186f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x186f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186f50:
    // 0x186f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x186f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186f54:
    // 0x186f54: 0xc0ce108  jal         func_338420
label_186f58:
    if (ctx->pc == 0x186F58u) {
        ctx->pc = 0x186F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F54u;
        // 0x186f58: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F5Cu;
        goto label_186f5c;
    }
    ctx->pc = 0x186F54u;
    SET_GPR_U32(ctx, 31, 0x186F5Cu);
    ctx->pc = 0x186F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F54u;
    // 0x186f58: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338420u, 0x186F54u, 0x186F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186F5Cu;
label_186f5c:
    // 0x186f5c: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x186f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_186f60:
    // 0x186f60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x186f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186f64:
    // 0x186f64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x186f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186f68:
    // 0x186f68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186f68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186f6c:
    // 0x186f6c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x186f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_186f70:
    // 0x186f70: 0x846400d8  lh          $a0, 0xD8($v1)
    ctx->pc = 0x186f70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 216)));
label_186f74:
    // 0x186f74: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x186f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_186f78:
    // 0x186f78: 0x40f809  jalr        $v0
label_186f7c:
    if (ctx->pc == 0x186F7Cu) {
        ctx->pc = 0x186F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F78u;
        // 0x186f7c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186F80u;
        goto label_186f80;
    }
    ctx->pc = 0x186F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186F80u);
        ctx->pc = 0x186F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F78u;
        // 0x186f7c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186F78u, 0x186F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186F80u;
label_186f80:
    // 0x186f80: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x186f80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_186f84:
    // 0x186f84: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x186f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186f88:
    // 0x186f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x186f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186f8c:
    // 0x186f8c: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x186f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_186f90:
    // 0x186f90: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x186f90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_186f94:
    // 0x186f94: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x186f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_186f98:
    // 0x186f98: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x186f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_186f9c:
    // 0x186f9c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x186f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_186fa0:
    // 0x186fa0: 0x60f809  jalr        $v1
label_186fa4:
    if (ctx->pc == 0x186FA4u) {
        ctx->pc = 0x186FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FA0u;
        // 0x186fa4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186FA8u;
        goto label_186fa8;
    }
    ctx->pc = 0x186FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186FA8u);
        ctx->pc = 0x186FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FA0u;
        // 0x186fa4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186FA0u, 0x186FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186FA8u;
label_186fa8:
    // 0x186fa8: 0x8e4627e4  lw          $a2, 0x27E4($s2)
    ctx->pc = 0x186fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_186fac:
    // 0x186fac: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x186facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_186fb0:
    // 0x186fb0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x186fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_186fb4:
    // 0x186fb4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x186fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_186fb8:
    // 0x186fb8: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x186fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_186fbc:
    // 0x186fbc: 0x60f809  jalr        $v1
label_186fc0:
    if (ctx->pc == 0x186FC0u) {
        ctx->pc = 0x186FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FBCu;
        // 0x186fc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186FC4u;
        goto label_186fc4;
    }
    ctx->pc = 0x186FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x186FC4u);
        ctx->pc = 0x186FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FBCu;
        // 0x186fc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186FBCu, 0x186FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186FC4u;
label_186fc4:
    // 0x186fc4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x186fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_186fc8:
    // 0x186fc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x186fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_186fcc:
    // 0x186fcc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x186fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_186fd0:
    // 0x186fd0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x186fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_186fd4:
    // 0x186fd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x186fd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_186fd8:
    // 0x186fd8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x186fd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_186fdc:
    // 0x186fdc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x186fdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_186fe0:
    // 0x186fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x186fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186fe4:
    // 0x186fe4: 0x3e00008  jr          $ra
label_186fe8:
    if (ctx->pc == 0x186FE8u) {
        ctx->pc = 0x186FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FE4u;
        // 0x186fe8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186FECu;
        goto label_186fec;
    }
    ctx->pc = 0x186FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186FE4u;
        // 0x186fe8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186FECu;
label_186fec:
    // 0x186fec: 0x0  nop
    ctx->pc = 0x186fecu;
    // NOP
    ctx->pc = 0x186ff0u;
}
