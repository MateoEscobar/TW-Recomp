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

// Function: sub_004B6E38
// Address: 0x4b6e38 - 0x4b6f10
void sub_004B6E38_0x4b6e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B6E38_0x4b6e38");
#endif

    switch (ctx->pc) {
        case 0x4b6e38u: goto label_4b6e38;
        case 0x4b6e3cu: goto label_4b6e3c;
        case 0x4b6e40u: goto label_4b6e40;
        case 0x4b6e44u: goto label_4b6e44;
        case 0x4b6e48u: goto label_4b6e48;
        case 0x4b6e4cu: goto label_4b6e4c;
        case 0x4b6e50u: goto label_4b6e50;
        case 0x4b6e54u: goto label_4b6e54;
        case 0x4b6e58u: goto label_4b6e58;
        case 0x4b6e5cu: goto label_4b6e5c;
        case 0x4b6e60u: goto label_4b6e60;
        case 0x4b6e64u: goto label_4b6e64;
        case 0x4b6e68u: goto label_4b6e68;
        case 0x4b6e6cu: goto label_4b6e6c;
        case 0x4b6e70u: goto label_4b6e70;
        case 0x4b6e74u: goto label_4b6e74;
        case 0x4b6e78u: goto label_4b6e78;
        case 0x4b6e7cu: goto label_4b6e7c;
        case 0x4b6e80u: goto label_4b6e80;
        case 0x4b6e84u: goto label_4b6e84;
        case 0x4b6e88u: goto label_4b6e88;
        case 0x4b6e8cu: goto label_4b6e8c;
        case 0x4b6e90u: goto label_4b6e90;
        case 0x4b6e94u: goto label_4b6e94;
        case 0x4b6e98u: goto label_4b6e98;
        case 0x4b6e9cu: goto label_4b6e9c;
        case 0x4b6ea0u: goto label_4b6ea0;
        case 0x4b6ea4u: goto label_4b6ea4;
        case 0x4b6ea8u: goto label_4b6ea8;
        case 0x4b6eacu: goto label_4b6eac;
        case 0x4b6eb0u: goto label_4b6eb0;
        case 0x4b6eb4u: goto label_4b6eb4;
        case 0x4b6eb8u: goto label_4b6eb8;
        case 0x4b6ebcu: goto label_4b6ebc;
        case 0x4b6ec0u: goto label_4b6ec0;
        case 0x4b6ec4u: goto label_4b6ec4;
        case 0x4b6ec8u: goto label_4b6ec8;
        case 0x4b6eccu: goto label_4b6ecc;
        case 0x4b6ed0u: goto label_4b6ed0;
        case 0x4b6ed4u: goto label_4b6ed4;
        case 0x4b6ed8u: goto label_4b6ed8;
        case 0x4b6edcu: goto label_4b6edc;
        case 0x4b6ee0u: goto label_4b6ee0;
        case 0x4b6ee4u: goto label_4b6ee4;
        case 0x4b6ee8u: goto label_4b6ee8;
        case 0x4b6eecu: goto label_4b6eec;
        case 0x4b6ef0u: goto label_4b6ef0;
        case 0x4b6ef4u: goto label_4b6ef4;
        case 0x4b6ef8u: goto label_4b6ef8;
        case 0x4b6efcu: goto label_4b6efc;
        case 0x4b6f00u: goto label_4b6f00;
        case 0x4b6f04u: goto label_4b6f04;
        case 0x4b6f08u: goto label_4b6f08;
        case 0x4b6f0cu: goto label_4b6f0c;
        default: break;
    }

    ctx->pc = 0x4b6e38u;

label_4b6e38:
    // 0x4b6e38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b6e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4b6e3c:
    // 0x4b6e3c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b6e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4b6e40:
    // 0x4b6e40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b6e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4b6e44:
    // 0x4b6e44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4b6e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b6e48:
    // 0x4b6e48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b6e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b6e4c:
    // 0x4b6e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b6e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b6e50:
    // 0x4b6e50: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x4b6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_4b6e54:
    // 0x4b6e54: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_4b6e58:
    if (ctx->pc == 0x4B6E58u) {
        ctx->pc = 0x4B6E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6E54u;
        // 0x4b6e58: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6E5Cu;
        goto label_4b6e5c;
    }
    ctx->pc = 0x4B6E54u;
    {
        const bool branch_taken_0x4b6e54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4b6e54) {
            ctx->pc = 0x4B6E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6E54u;
            // 0x4b6e58: 0x8e450010  lw          $a1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6E64u;
            goto label_4b6e64;
        }
    }
    ctx->pc = 0x4B6E5Cu;
label_4b6e5c:
    // 0x4b6e5c: 0x10000023  b           . + 4 + (0x23 << 2)
label_4b6e60:
    if (ctx->pc == 0x4B6E60u) {
        ctx->pc = 0x4B6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6E5Cu;
        // 0x4b6e60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6E64u;
        goto label_4b6e64;
    }
    ctx->pc = 0x4B6E5Cu;
    {
        const bool branch_taken_0x4b6e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6E5Cu;
        // 0x4b6e60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6e5c) {
            ctx->pc = 0x4B6EECu;
            goto label_4b6eec;
        }
    }
    ctx->pc = 0x4B6E64u;
label_4b6e64:
    // 0x4b6e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b6e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b6e68:
    // 0x4b6e68: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x4b6e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_4b6e6c:
    // 0x4b6e6c: 0xc12dc58  jal         func_4B7160
label_4b6e70:
    if (ctx->pc == 0x4B6E70u) {
        ctx->pc = 0x4B6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6E6Cu;
        // 0x4b6e70: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6E74u;
        goto label_4b6e74;
    }
    ctx->pc = 0x4B6E6Cu;
    SET_GPR_U32(ctx, 31, 0x4B6E74u);
    ctx->pc = 0x4B6E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6E6Cu;
    // 0x4b6e70: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7160u, 0x4B6E6Cu, 0x4B6E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6E74u;
label_4b6e74:
    // 0x4b6e74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b6e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6e78:
    // 0x4b6e78: 0xc12c608  jal         func_4B1820
label_4b6e7c:
    if (ctx->pc == 0x4B6E7Cu) {
        ctx->pc = 0x4B6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6E78u;
        // 0x4b6e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6E80u;
        goto label_4b6e80;
    }
    ctx->pc = 0x4B6E78u;
    SET_GPR_U32(ctx, 31, 0x4B6E80u);
    ctx->pc = 0x4B6E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6E78u;
    // 0x4b6e7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B1820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B1820u, 0x4B6E78u, 0x4B6E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6E80u;
label_4b6e80:
    // 0x4b6e80: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x4b6e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_4b6e84:
    // 0x4b6e84: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x4b6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4b6e88:
    // 0x4b6e88: 0x40f809  jalr        $v0
label_4b6e8c:
    if (ctx->pc == 0x4B6E8Cu) {
        ctx->pc = 0x4B6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6E88u;
        // 0x4b6e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6E90u;
        goto label_4b6e90;
    }
    ctx->pc = 0x4B6E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B6E90u);
        ctx->pc = 0x4B6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6E88u;
        // 0x4b6e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6E88u, 0x4B6E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B6E90u;
label_4b6e90:
    // 0x4b6e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b6e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6e94:
    // 0x4b6e94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b6e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b6e98:
    // 0x4b6e98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b6e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b6e9c:
    // 0x4b6e9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b6e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b6ea0:
    // 0x4b6ea0: 0xc12c392  jal         func_4B0E48
label_4b6ea4:
    if (ctx->pc == 0x4B6EA4u) {
        ctx->pc = 0x4B6EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6EA0u;
        // 0x4b6ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6EA8u;
        goto label_4b6ea8;
    }
    ctx->pc = 0x4B6EA0u;
    SET_GPR_U32(ctx, 31, 0x4B6EA8u);
    ctx->pc = 0x4B6EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6EA0u;
    // 0x4b6ea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0E48u, 0x4B6EA0u, 0x4B6EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6EA8u;
label_4b6ea8:
    // 0x4b6ea8: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x4b6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_4b6eac:
    // 0x4b6eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b6eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b6eb0:
    // 0x4b6eb0: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x4b6eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_4b6eb4:
    // 0x4b6eb4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x4b6eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_4b6eb8:
    // 0x4b6eb8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x4b6eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_4b6ebc:
    // 0x4b6ebc: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x4b6ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_4b6ec0:
    // 0x4b6ec0: 0xc12c222  jal         func_4B0888
label_4b6ec4:
    if (ctx->pc == 0x4B6EC4u) {
        ctx->pc = 0x4B6EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6EC0u;
        // 0x4b6ec4: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6EC8u;
        goto label_4b6ec8;
    }
    ctx->pc = 0x4B6EC0u;
    SET_GPR_U32(ctx, 31, 0x4B6EC8u);
    ctx->pc = 0x4B6EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6EC0u;
    // 0x4b6ec4: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0888u, 0x4B6EC0u, 0x4B6EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6EC8u;
label_4b6ec8:
    // 0x4b6ec8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b6ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b6ecc:
    // 0x4b6ecc: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x4b6eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
label_4b6ed0:
    // 0x4b6ed0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x4b6ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b6ed4:
    // 0x4b6ed4: 0x3463240c  ori         $v1, $v1, 0x240C
    ctx->pc = 0x4b6ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9228);
label_4b6ed8:
    // 0x4b6ed8: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x4b6ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_4b6edc:
    // 0x4b6edc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b6edcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b6ee0:
    // 0x4b6ee0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4b6ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4b6ee4:
    // 0x4b6ee4: 0xae440038  sw          $a0, 0x38($s2)
    ctx->pc = 0x4b6ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 4));
label_4b6ee8:
    // 0x4b6ee8: 0x210100b  movn        $v0, $s0, $s0
    ctx->pc = 0x4b6ee8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_4b6eec:
    // 0x4b6eec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b6eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b6ef0:
    // 0x4b6ef0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b6ef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b6ef4:
    // 0x4b6ef4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b6ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6ef8:
    // 0x4b6ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b6ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b6efc:
    // 0x4b6efc: 0x3e00008  jr          $ra
label_4b6f00:
    if (ctx->pc == 0x4B6F00u) {
        ctx->pc = 0x4B6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6EFCu;
        // 0x4b6f00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B6F04u;
        goto label_4b6f04;
    }
    ctx->pc = 0x4B6EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6EFCu;
        // 0x4b6f00: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B6F04u;
label_4b6f04:
    // 0x4b6f04: 0x0  nop
    ctx->pc = 0x4b6f04u;
    // NOP
label_4b6f08:
    // 0x4b6f08: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4b6f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4b6f0c:
    // 0x4b6f0c: 0x0  nop
    ctx->pc = 0x4b6f0cu;
    // NOP
    ctx->pc = 0x4b6f10u;
}
