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

// Function: sub_0032DA68
// Address: 0x32da68 - 0x32dc20
void sub_0032DA68_0x32da68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DA68_0x32da68");
#endif

    switch (ctx->pc) {
        case 0x32dab8u: goto label_32dab8;
        case 0x32dabcu: goto label_32dabc;
        case 0x32db20u: goto label_32db20;
        case 0x32db30u: goto label_32db30;
        case 0x32db38u: goto label_32db38;
        case 0x32db44u: goto label_32db44;
        case 0x32db54u: goto label_32db54;
        case 0x32db64u: goto label_32db64;
        case 0x32db70u: goto label_32db70;
        case 0x32db7cu: goto label_32db7c;
        case 0x32db8cu: goto label_32db8c;
        case 0x32db94u: goto label_32db94;
        case 0x32dba8u: goto label_32dba8;
        case 0x32dbb8u: goto label_32dbb8;
        case 0x32dbd4u: goto label_32dbd4;
        case 0x32dbe4u: goto label_32dbe4;
        default: break;
    }

    ctx->pc = 0x32da68u;

    // 0x32da68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x32da68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x32da6c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x32da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x32da70: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x32da70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x32da74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32da74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da78: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x32da78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x32da7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32da7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32da80: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x32da80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x32da84: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x32da84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32da88: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x32da88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x32da8c: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x32da8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32da90: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x32da90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x32da94: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x32da94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32da98: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x32da98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x32da9c: 0x2416011b  addiu       $s6, $zero, 0x11B
    ctx->pc = 0x32da9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
    // 0x32daa0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x32daa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x32daa4: 0x2417005b  addiu       $s7, $zero, 0x5B
    ctx->pc = 0x32daa4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x32daa8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x32daa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x32daac: 0x241e007b  addiu       $fp, $zero, 0x7B
    ctx->pc = 0x32daacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x32dab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32dab4: 0x0  nop
    ctx->pc = 0x32dab4u;
    // NOP
label_32dab8:
    // 0x32dab8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x32dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_32dabc:
    // 0x32dabc: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x32dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x32dac0: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x32DAC0u;
    {
        const bool branch_taken_0x32dac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAC0u;
        // 0x32dac4: 0x2862003b  slti        $v0, $v1, 0x3B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)59) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dac0) {
            ctx->pc = 0x32DB84u;
            goto label_32db84;
        }
    }
    ctx->pc = 0x32DAC8u;
    // 0x32dac8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32DAC8u;
    {
        const bool branch_taken_0x32dac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAC8u;
        // 0x32dacc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dac8) {
            ctx->pc = 0x32DAE8u;
            goto label_32dae8;
        }
    }
    ctx->pc = 0x32DAD0u;
    // 0x32dad0: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x32DAD0u;
    {
        const bool branch_taken_0x32dad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAD0u;
        // 0x32dad4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dad0) {
            ctx->pc = 0x32DBC4u;
            goto label_32dbc4;
        }
    }
    ctx->pc = 0x32DAD8u;
    // 0x32dad8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x32DAD8u;
    {
        const bool branch_taken_0x32dad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAD8u;
        // 0x32dadc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dad8) {
            ctx->pc = 0x32DB18u;
            goto label_32db18;
        }
    }
    ctx->pc = 0x32DAE0u;
    // 0x32dae0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x32DAE0u;
    {
        const bool branch_taken_0x32dae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAE0u;
        // 0x32dae4: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dae0) {
            ctx->pc = 0x32DBF4u;
            goto label_32dbf4;
        }
    }
    ctx->pc = 0x32DAE8u;
label_32dae8:
    // 0x32dae8: 0x107e0036  beq         $v1, $fp, . + 4 + (0x36 << 2)
    ctx->pc = 0x32DAE8u;
    {
        const bool branch_taken_0x32dae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 30));
        ctx->pc = 0x32DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAE8u;
        // 0x32daec: 0x2862007c  slti        $v0, $v1, 0x7C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)124) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dae8) {
            ctx->pc = 0x32DBC4u;
            goto label_32dbc4;
        }
    }
    ctx->pc = 0x32DAF0u;
    // 0x32daf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32DAF0u;
    {
        const bool branch_taken_0x32daf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32daf0) {
            ctx->pc = 0x32DB08u;
            goto label_32db08;
        }
    }
    ctx->pc = 0x32DAF8u;
    // 0x32daf8: 0x10770014  beq         $v1, $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x32DAF8u;
    {
        const bool branch_taken_0x32daf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x32DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DAF8u;
        // 0x32dafc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32daf8) {
            ctx->pc = 0x32DB4Cu;
            goto label_32db4c;
        }
    }
    ctx->pc = 0x32DB00u;
    // 0x32db00: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x32DB00u;
    {
        const bool branch_taken_0x32db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB00u;
        // 0x32db04: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db00) {
            ctx->pc = 0x32DBF4u;
            goto label_32dbf4;
        }
    }
    ctx->pc = 0x32DB08u;
label_32db08:
    // 0x32db08: 0x1076002e  beq         $v1, $s6, . + 4 + (0x2E << 2)
    ctx->pc = 0x32DB08u;
    {
        const bool branch_taken_0x32db08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        ctx->pc = 0x32DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB08u;
        // 0x32db0c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db08) {
            ctx->pc = 0x32DBC4u;
            goto label_32dbc4;
        }
    }
    ctx->pc = 0x32DB10u;
    // 0x32db10: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x32DB10u;
    {
        const bool branch_taken_0x32db10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB10u;
        // 0x32db14: 0x7bb10080  lq          $s1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db10) {
            ctx->pc = 0x32DBF4u;
            goto label_32dbf4;
        }
    }
    ctx->pc = 0x32DB18u;
label_32db18:
    // 0x32db18: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32DB18u;
    SET_GPR_U32(ctx, 31, 0x32DB20u);
    ctx->pc = 0x32DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB18u;
    // 0x32db1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32DB18u, 0x32DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB20u;
label_32db20:
    // 0x32db20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32db20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32db24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32db24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32db28: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x32DB28u;
    SET_GPR_U32(ctx, 31, 0x32DB30u);
    ctx->pc = 0x32DB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB28u;
    // 0x32db2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x32DB28u, 0x32DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB30u;
label_32db30:
    // 0x32db30: 0xc0cb3d0  jal         func_32CF40
    ctx->pc = 0x32DB30u;
    SET_GPR_U32(ctx, 31, 0x32DB38u);
    ctx->pc = 0x32DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB30u;
    // 0x32db34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CF40u, 0x32DB30u, 0x32DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB38u;
label_32db38:
    // 0x32db38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x32db38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32db3c: 0xc0c99fe  jal         func_3267F8
    ctx->pc = 0x32DB3Cu;
    SET_GPR_U32(ctx, 31, 0x32DB44u);
    ctx->pc = 0x32DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB3Cu;
    // 0x32db40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3267F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3267F8u, 0x32DB3Cu, 0x32DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB44u;
label_32db44:
    // 0x32db44: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x32DB44u;
    {
        const bool branch_taken_0x32db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB44u;
        // 0x32db48: 0xae550000  sw          $s5, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db44) {
            ctx->pc = 0x32DAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32dab8;
        }
    }
    ctx->pc = 0x32DB4Cu;
label_32db4c:
    // 0x32db4c: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32DB4Cu;
    SET_GPR_U32(ctx, 31, 0x32DB54u);
    ctx->pc = 0x32DB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB4Cu;
    // 0x32db50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32DB4Cu, 0x32DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB54u;
label_32db54:
    // 0x32db54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32db54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32db58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32db58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32db5c: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x32DB5Cu;
    SET_GPR_U32(ctx, 31, 0x32DB64u);
    ctx->pc = 0x32DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB5Cu;
    // 0x32db60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x32DB5Cu, 0x32DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB64u;
label_32db64:
    // 0x32db64: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x32db64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x32db68: 0xc0cb8bc  jal         func_32E2F0
    ctx->pc = 0x32DB68u;
    SET_GPR_U32(ctx, 31, 0x32DB70u);
    ctx->pc = 0x32DB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB68u;
    // 0x32db6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E2F0u, 0x32DB68u, 0x32DB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB70u;
label_32db70:
    // 0x32db70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32db70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32db74: 0xc0cb334  jal         func_32CCD0
    ctx->pc = 0x32DB74u;
    SET_GPR_U32(ctx, 31, 0x32DB7Cu);
    ctx->pc = 0x32DB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB74u;
    // 0x32db78: 0x2405005d  addiu       $a1, $zero, 0x5D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CCD0u, 0x32DB74u, 0x32DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB7Cu;
label_32db7c:
    // 0x32db7c: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x32DB7Cu;
    {
        const bool branch_taken_0x32db7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DB7Cu;
        // 0x32db80: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32db7c) {
            ctx->pc = 0x32DABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32dabc;
        }
    }
    ctx->pc = 0x32DB84u;
label_32db84:
    // 0x32db84: 0xc0cb2fa  jal         func_32CBE8
    ctx->pc = 0x32DB84u;
    SET_GPR_U32(ctx, 31, 0x32DB8Cu);
    ctx->pc = 0x32DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB84u;
    // 0x32db88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBE8u, 0x32DB84u, 0x32DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB8Cu;
label_32db8c:
    // 0x32db8c: 0xc0cb3d0  jal         func_32CF40
    ctx->pc = 0x32DB8Cu;
    SET_GPR_U32(ctx, 31, 0x32DB94u);
    ctx->pc = 0x32DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DB8Cu;
    // 0x32db90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CF40u, 0x32DB8Cu, 0x32DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DB94u;
label_32db94:
    // 0x32db94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32db94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32db98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32db98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32db9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32db9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dba0: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x32DBA0u;
    SET_GPR_U32(ctx, 31, 0x32DBA8u);
    ctx->pc = 0x32DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DBA0u;
    // 0x32dba4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x32DBA0u, 0x32DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBA8u;
label_32dba8:
    // 0x32dba8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x32dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x32dbac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x32dbacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dbb0: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x32DBB0u;
    SET_GPR_U32(ctx, 31, 0x32DBB8u);
    ctx->pc = 0x32DBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DBB0u;
    // 0x32dbb4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x32DBB0u, 0x32DBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBB8u;
label_32dbb8:
    // 0x32dbb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32dbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dbbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32DBBCu;
    {
        const bool branch_taken_0x32dbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBBCu;
        // 0x32dbc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dbbc) {
            ctx->pc = 0x32DBDCu;
            goto label_32dbdc;
        }
    }
    ctx->pc = 0x32DBC4u;
label_32dbc4:
    // 0x32dbc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32dbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dbc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x32dbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dbcc: 0xc0c9c34  jal         func_3270D0
    ctx->pc = 0x32DBCCu;
    SET_GPR_U32(ctx, 31, 0x32DBD4u);
    ctx->pc = 0x32DBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DBCCu;
    // 0x32dbd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3270D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3270D0u, 0x32DBCCu, 0x32DBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBD4u;
label_32dbd4:
    // 0x32dbd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32dbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32dbd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32dbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32dbdc:
    // 0x32dbdc: 0xc0cb656  jal         func_32D958
    ctx->pc = 0x32DBDCu;
    SET_GPR_U32(ctx, 31, 0x32DBE4u);
    ctx->pc = 0x32D958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D958u, 0x32DBDCu, 0x32DBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DBE4u;
label_32dbe4:
    // 0x32dbe4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x32dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
    // 0x32dbe8: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x32dbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
    // 0x32dbec: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x32DBECu;
    {
        const bool branch_taken_0x32dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DBECu;
        // 0x32dbf0: 0xae530004  sw          $s3, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32dbec) {
            ctx->pc = 0x32DAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32dab8;
        }
    }
    ctx->pc = 0x32DBF4u;
label_32dbf4:
    // 0x32dbf4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x32dbf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32dbf8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x32dbf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32dbfc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x32dbfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32dc00: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x32dc00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32dc04: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x32dc04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32dc08: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x32dc08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32dc0c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x32dc0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32dc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32dc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32dc14: 0x3e00008  jr          $ra
    ctx->pc = 0x32DC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DC14u;
        // 0x32dc18: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DC1Cu;
    // 0x32dc1c: 0x0  nop
    ctx->pc = 0x32dc1cu;
    // NOP
    ctx->pc = 0x32dc20u;
}
