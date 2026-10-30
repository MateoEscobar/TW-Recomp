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

// Function: sub_0010DB18
// Address: 0x10db18 - 0x10dbb0
void sub_0010DB18_0x10db18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DB18_0x10db18");
#endif

    switch (ctx->pc) {
        case 0x10db18u: goto label_10db18;
        case 0x10db1cu: goto label_10db1c;
        case 0x10db20u: goto label_10db20;
        case 0x10db24u: goto label_10db24;
        case 0x10db28u: goto label_10db28;
        case 0x10db2cu: goto label_10db2c;
        case 0x10db30u: goto label_10db30;
        case 0x10db34u: goto label_10db34;
        case 0x10db38u: goto label_10db38;
        case 0x10db3cu: goto label_10db3c;
        case 0x10db40u: goto label_10db40;
        case 0x10db44u: goto label_10db44;
        case 0x10db48u: goto label_10db48;
        case 0x10db4cu: goto label_10db4c;
        case 0x10db50u: goto label_10db50;
        case 0x10db54u: goto label_10db54;
        case 0x10db58u: goto label_10db58;
        case 0x10db5cu: goto label_10db5c;
        case 0x10db60u: goto label_10db60;
        case 0x10db64u: goto label_10db64;
        case 0x10db68u: goto label_10db68;
        case 0x10db6cu: goto label_10db6c;
        case 0x10db70u: goto label_10db70;
        case 0x10db74u: goto label_10db74;
        case 0x10db78u: goto label_10db78;
        case 0x10db7cu: goto label_10db7c;
        case 0x10db80u: goto label_10db80;
        case 0x10db84u: goto label_10db84;
        case 0x10db88u: goto label_10db88;
        case 0x10db8cu: goto label_10db8c;
        case 0x10db90u: goto label_10db90;
        case 0x10db94u: goto label_10db94;
        case 0x10db98u: goto label_10db98;
        case 0x10db9cu: goto label_10db9c;
        case 0x10dba0u: goto label_10dba0;
        case 0x10dba4u: goto label_10dba4;
        case 0x10dba8u: goto label_10dba8;
        case 0x10dbacu: goto label_10dbac;
        default: break;
    }

    ctx->pc = 0x10db18u;

label_10db18:
    // 0x10db18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10db18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10db1c:
    // 0x10db1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10db1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_10db20:
    // 0x10db20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10db20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_10db24:
    // 0x10db24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10db24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10db28:
    // 0x10db28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10db28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_10db2c:
    // 0x10db2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10db2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10db30:
    // 0x10db30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10db30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10db34:
    // 0x10db34: 0xc046dd4  jal         func_11B750
label_10db38:
    if (ctx->pc == 0x10DB38u) {
        ctx->pc = 0x10DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB34u;
        // 0x10db38: 0x82050008  lb          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB3Cu;
        goto label_10db3c;
    }
    ctx->pc = 0x10DB34u;
    SET_GPR_U32(ctx, 31, 0x10DB3Cu);
    ctx->pc = 0x10DB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB34u;
    // 0x10db38: 0x82050008  lb          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B750u, 0x10DB34u, 0x10DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB3Cu;
label_10db3c:
    // 0x10db3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10db3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10db40:
    // 0x10db40: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x10db40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_10db44:
    // 0x10db44: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_10db48:
    if (ctx->pc == 0x10DB48u) {
        ctx->pc = 0x10DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB44u;
        // 0x10db48: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB4Cu;
        goto label_10db4c;
    }
    ctx->pc = 0x10DB44u;
    {
        const bool branch_taken_0x10db44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10db44) {
            ctx->pc = 0x10DB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DB44u;
            // 0x10db48: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DB5Cu;
            goto label_10db5c;
        }
    }
    ctx->pc = 0x10DB4Cu;
label_10db4c:
    // 0x10db4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10db4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_10db50:
    // 0x10db50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10db50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10db54:
    // 0x10db54: 0x0  nop
    ctx->pc = 0x10db54u;
    // NOP
label_10db58:
    // 0x10db58: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x10db58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_10db5c:
    // 0x10db5c: 0xc043956  jal         func_10E558
label_10db60:
    if (ctx->pc == 0x10DB60u) {
        ctx->pc = 0x10DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB5Cu;
        // 0x10db60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB64u;
        goto label_10db64;
    }
    ctx->pc = 0x10DB5Cu;
    SET_GPR_U32(ctx, 31, 0x10DB64u);
    ctx->pc = 0x10DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB5Cu;
    // 0x10db60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E558u, 0x10DB5Cu, 0x10DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB64u;
label_10db64:
    // 0x10db64: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10db64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_10db68:
    // 0x10db68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10db68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10db6c:
    // 0x10db6c: 0x8c66bce4  lw          $a2, -0x431C($v1)
    ctx->pc = 0x10db6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950116)));
label_10db70:
    // 0x10db70: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x10db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10db74:
    // 0x10db74: 0x84440130  lh          $a0, 0x130($v0)
    ctx->pc = 0x10db74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 304)));
label_10db78:
    // 0x10db78: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x10db78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_10db7c:
    // 0x10db7c: 0x60f809  jalr        $v1
label_10db80:
    if (ctx->pc == 0x10DB80u) {
        ctx->pc = 0x10DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB7Cu;
        // 0x10db80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB84u;
        goto label_10db84;
    }
    ctx->pc = 0x10DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10DB84u);
        ctx->pc = 0x10DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB7Cu;
        // 0x10db80: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DB7Cu, 0x10DB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DB84u;
label_10db84:
    // 0x10db84: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10db84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10db88:
    // 0x10db88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10db88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10db8c:
    // 0x10db8c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x10db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_10db90:
    // 0x10db90: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10db90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10db94:
    // 0x10db94: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x10db94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_10db98:
    // 0x10db98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10db98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10db9c:
    // 0x10db9c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x10db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_10dba0:
    // 0x10dba0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10dba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10dba4:
    // 0x10dba4: 0x3e00008  jr          $ra
label_10dba8:
    if (ctx->pc == 0x10DBA8u) {
        ctx->pc = 0x10DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBA4u;
        // 0x10dba8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DBACu;
        goto label_10dbac;
    }
    ctx->pc = 0x10DBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBA4u;
        // 0x10dba8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DBACu;
label_10dbac:
    // 0x10dbac: 0x0  nop
    ctx->pc = 0x10dbacu;
    // NOP
    ctx->pc = 0x10dbb0u;
}
