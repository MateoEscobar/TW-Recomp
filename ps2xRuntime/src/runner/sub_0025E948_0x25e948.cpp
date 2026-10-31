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

// Function: sub_0025E948
// Address: 0x25e948 - 0x25eb00
void sub_0025E948_0x25e948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E948_0x25e948");
#endif

    switch (ctx->pc) {
        case 0x25e948u: goto label_25e948;
        case 0x25e94cu: goto label_25e94c;
        case 0x25e950u: goto label_25e950;
        case 0x25e954u: goto label_25e954;
        case 0x25e958u: goto label_25e958;
        case 0x25e95cu: goto label_25e95c;
        case 0x25e960u: goto label_25e960;
        case 0x25e964u: goto label_25e964;
        case 0x25e968u: goto label_25e968;
        case 0x25e96cu: goto label_25e96c;
        case 0x25e970u: goto label_25e970;
        case 0x25e974u: goto label_25e974;
        case 0x25e978u: goto label_25e978;
        case 0x25e97cu: goto label_25e97c;
        case 0x25e980u: goto label_25e980;
        case 0x25e984u: goto label_25e984;
        case 0x25e988u: goto label_25e988;
        case 0x25e98cu: goto label_25e98c;
        case 0x25e990u: goto label_25e990;
        case 0x25e994u: goto label_25e994;
        case 0x25e998u: goto label_25e998;
        case 0x25e99cu: goto label_25e99c;
        case 0x25e9a0u: goto label_25e9a0;
        case 0x25e9a4u: goto label_25e9a4;
        case 0x25e9a8u: goto label_25e9a8;
        case 0x25e9acu: goto label_25e9ac;
        case 0x25e9b0u: goto label_25e9b0;
        case 0x25e9b4u: goto label_25e9b4;
        case 0x25e9b8u: goto label_25e9b8;
        case 0x25e9bcu: goto label_25e9bc;
        case 0x25e9c0u: goto label_25e9c0;
        case 0x25e9c4u: goto label_25e9c4;
        case 0x25e9c8u: goto label_25e9c8;
        case 0x25e9ccu: goto label_25e9cc;
        case 0x25e9d0u: goto label_25e9d0;
        case 0x25e9d4u: goto label_25e9d4;
        case 0x25e9d8u: goto label_25e9d8;
        case 0x25e9dcu: goto label_25e9dc;
        case 0x25e9e0u: goto label_25e9e0;
        case 0x25e9e4u: goto label_25e9e4;
        case 0x25e9e8u: goto label_25e9e8;
        case 0x25e9ecu: goto label_25e9ec;
        case 0x25e9f0u: goto label_25e9f0;
        case 0x25e9f4u: goto label_25e9f4;
        case 0x25e9f8u: goto label_25e9f8;
        case 0x25e9fcu: goto label_25e9fc;
        case 0x25ea00u: goto label_25ea00;
        case 0x25ea04u: goto label_25ea04;
        case 0x25ea08u: goto label_25ea08;
        case 0x25ea0cu: goto label_25ea0c;
        case 0x25ea10u: goto label_25ea10;
        case 0x25ea14u: goto label_25ea14;
        case 0x25ea18u: goto label_25ea18;
        case 0x25ea1cu: goto label_25ea1c;
        case 0x25ea20u: goto label_25ea20;
        case 0x25ea24u: goto label_25ea24;
        case 0x25ea28u: goto label_25ea28;
        case 0x25ea2cu: goto label_25ea2c;
        case 0x25ea30u: goto label_25ea30;
        case 0x25ea34u: goto label_25ea34;
        case 0x25ea38u: goto label_25ea38;
        case 0x25ea3cu: goto label_25ea3c;
        case 0x25ea40u: goto label_25ea40;
        case 0x25ea44u: goto label_25ea44;
        case 0x25ea48u: goto label_25ea48;
        case 0x25ea4cu: goto label_25ea4c;
        case 0x25ea50u: goto label_25ea50;
        case 0x25ea54u: goto label_25ea54;
        case 0x25ea58u: goto label_25ea58;
        case 0x25ea5cu: goto label_25ea5c;
        case 0x25ea60u: goto label_25ea60;
        case 0x25ea64u: goto label_25ea64;
        case 0x25ea68u: goto label_25ea68;
        case 0x25ea6cu: goto label_25ea6c;
        case 0x25ea70u: goto label_25ea70;
        case 0x25ea74u: goto label_25ea74;
        case 0x25ea78u: goto label_25ea78;
        case 0x25ea7cu: goto label_25ea7c;
        case 0x25ea80u: goto label_25ea80;
        case 0x25ea84u: goto label_25ea84;
        case 0x25ea88u: goto label_25ea88;
        case 0x25ea8cu: goto label_25ea8c;
        case 0x25ea90u: goto label_25ea90;
        case 0x25ea94u: goto label_25ea94;
        case 0x25ea98u: goto label_25ea98;
        case 0x25ea9cu: goto label_25ea9c;
        case 0x25eaa0u: goto label_25eaa0;
        case 0x25eaa4u: goto label_25eaa4;
        case 0x25eaa8u: goto label_25eaa8;
        case 0x25eaacu: goto label_25eaac;
        case 0x25eab0u: goto label_25eab0;
        case 0x25eab4u: goto label_25eab4;
        case 0x25eab8u: goto label_25eab8;
        case 0x25eabcu: goto label_25eabc;
        case 0x25eac0u: goto label_25eac0;
        case 0x25eac4u: goto label_25eac4;
        case 0x25eac8u: goto label_25eac8;
        case 0x25eaccu: goto label_25eacc;
        case 0x25ead0u: goto label_25ead0;
        case 0x25ead4u: goto label_25ead4;
        case 0x25ead8u: goto label_25ead8;
        case 0x25eadcu: goto label_25eadc;
        case 0x25eae0u: goto label_25eae0;
        case 0x25eae4u: goto label_25eae4;
        case 0x25eae8u: goto label_25eae8;
        case 0x25eaecu: goto label_25eaec;
        case 0x25eaf0u: goto label_25eaf0;
        case 0x25eaf4u: goto label_25eaf4;
        case 0x25eaf8u: goto label_25eaf8;
        case 0x25eafcu: goto label_25eafc;
        default: break;
    }

    ctx->pc = 0x25e948u;

label_25e948:
    // 0x25e948: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25e948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25e94c:
    // 0x25e94c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x25e94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_25e950:
    // 0x25e950: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25e950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_25e954:
    // 0x25e954: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25e954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_25e958:
    // 0x25e958: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x25e958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25e95c:
    // 0x25e95c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25e95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25e960:
    // 0x25e960: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x25e960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25e964:
    // 0x25e964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25e968:
    // 0x25e968: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x25e968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_25e96c:
    // 0x25e96c: 0x8e3300d8  lw          $s3, 0xD8($s1)
    ctx->pc = 0x25e96cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25e970:
    // 0x25e970: 0xc05dc0e  jal         func_177038
label_25e974:
    if (ctx->pc == 0x25E974u) {
        ctx->pc = 0x25E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E970u;
        // 0x25e974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E978u;
        goto label_25e978;
    }
    ctx->pc = 0x25E970u;
    SET_GPR_U32(ctx, 31, 0x25E978u);
    ctx->pc = 0x25E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E970u;
    // 0x25e974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177038u, 0x25E970u, 0x25E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E978u;
label_25e978:
    // 0x25e978: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x25e978u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_25e97c:
    // 0x25e97c: 0x2610d9f0  addiu       $s0, $s0, -0x2610
    ctx->pc = 0x25e97cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957552));
label_25e980:
    // 0x25e980: 0xc041532  jal         func_1054C8
label_25e984:
    if (ctx->pc == 0x25E984u) {
        ctx->pc = 0x25E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E980u;
        // 0x25e984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E988u;
        goto label_25e988;
    }
    ctx->pc = 0x25E980u;
    SET_GPR_U32(ctx, 31, 0x25E988u);
    ctx->pc = 0x25E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E980u;
    // 0x25e984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E980u, 0x25E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E988u;
label_25e988:
    // 0x25e988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e98c:
    // 0x25e98c: 0xc041532  jal         func_1054C8
label_25e990:
    if (ctx->pc == 0x25E990u) {
        ctx->pc = 0x25E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E98Cu;
        // 0x25e990: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E994u;
        goto label_25e994;
    }
    ctx->pc = 0x25E98Cu;
    SET_GPR_U32(ctx, 31, 0x25E994u);
    ctx->pc = 0x25E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E98Cu;
    // 0x25e990: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E98Cu, 0x25E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E994u;
label_25e994:
    // 0x25e994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e998:
    // 0x25e998: 0xc041532  jal         func_1054C8
label_25e99c:
    if (ctx->pc == 0x25E99Cu) {
        ctx->pc = 0x25E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E998u;
        // 0x25e99c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9A0u;
        goto label_25e9a0;
    }
    ctx->pc = 0x25E998u;
    SET_GPR_U32(ctx, 31, 0x25E9A0u);
    ctx->pc = 0x25E99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E998u;
    // 0x25e99c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25E998u, 0x25E9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9A0u;
label_25e9a0:
    // 0x25e9a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25e9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25e9a4:
    // 0x25e9a4: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_25e9a8:
    if (ctx->pc == 0x25E9A8u) {
        ctx->pc = 0x25E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9A4u;
        // 0x25e9a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9ACu;
        goto label_25e9ac;
    }
    ctx->pc = 0x25E9A4u;
    {
        const bool branch_taken_0x25e9a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9A4u;
        // 0x25e9a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9a4) {
            ctx->pc = 0x25E9CCu;
            goto label_25e9cc;
        }
    }
    ctx->pc = 0x25E9ACu;
label_25e9ac:
    // 0x25e9ac: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x25e9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_25e9b0:
    // 0x25e9b0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25e9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25e9b4:
    // 0x25e9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25e9b8:
    // 0x25e9b8: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x25e9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_25e9bc:
    // 0x25e9bc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x25e9bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_25e9c0:
    // 0x25e9c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25e9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25e9c4:
    // 0x25e9c4: 0xc041b20  jal         func_106C80
label_25e9c8:
    if (ctx->pc == 0x25E9C8u) {
        ctx->pc = 0x25E9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9C4u;
        // 0x25e9c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9CCu;
        goto label_25e9cc;
    }
    ctx->pc = 0x25E9C4u;
    SET_GPR_U32(ctx, 31, 0x25E9CCu);
    ctx->pc = 0x25E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E9C4u;
    // 0x25e9c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x25E9C4u, 0x25E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9CCu;
label_25e9cc:
    // 0x25e9cc: 0xc05d484  jal         func_175210
label_25e9d0:
    if (ctx->pc == 0x25E9D0u) {
        ctx->pc = 0x25E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9CCu;
        // 0x25e9d0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9D4u;
        goto label_25e9d4;
    }
    ctx->pc = 0x25E9CCu;
    SET_GPR_U32(ctx, 31, 0x25E9D4u);
    ctx->pc = 0x25E9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E9CCu;
    // 0x25e9d0: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x25E9CCu, 0x25E9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9D4u;
label_25e9d4:
    // 0x25e9d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e9d8:
    // 0x25e9d8: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x25e9d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_25e9dc:
    // 0x25e9dc: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x25e9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_25e9e0:
    // 0x25e9e0: 0xa0f809  jalr        $a1
label_25e9e4:
    if (ctx->pc == 0x25E9E4u) {
        ctx->pc = 0x25E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9E0u;
        // 0x25e9e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9E8u;
        goto label_25e9e8;
    }
    ctx->pc = 0x25E9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x25E9E8u);
        ctx->pc = 0x25E9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9E0u;
        // 0x25e9e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E9E0u, 0x25E9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25E9E8u;
label_25e9e8:
    // 0x25e9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25e9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25e9ec:
    // 0x25e9ec: 0xc087016  jal         func_21C058
label_25e9f0:
    if (ctx->pc == 0x25E9F0u) {
        ctx->pc = 0x25E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9ECu;
        // 0x25e9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9F4u;
        goto label_25e9f4;
    }
    ctx->pc = 0x25E9ECu;
    SET_GPR_U32(ctx, 31, 0x25E9F4u);
    ctx->pc = 0x25E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E9ECu;
    // 0x25e9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x25E9ECu, 0x25E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E9F4u;
label_25e9f4:
    // 0x25e9f4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_25e9f8:
    if (ctx->pc == 0x25E9F8u) {
        ctx->pc = 0x25E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9F4u;
        // 0x25e9f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25E9FCu;
        goto label_25e9fc;
    }
    ctx->pc = 0x25E9F4u;
    {
        const bool branch_taken_0x25e9f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E9F4u;
        // 0x25e9f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e9f4) {
            ctx->pc = 0x25EA18u;
            goto label_25ea18;
        }
    }
    ctx->pc = 0x25E9FCu;
label_25e9fc:
    // 0x25e9fc: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x25e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25ea00:
    // 0x25ea00: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x25ea00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_25ea04:
    // 0x25ea04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25ea04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25ea08:
    // 0x25ea08: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x25ea08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_25ea0c:
    // 0x25ea0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x25ea0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ea10:
    // 0x25ea10: 0xc04159e  jal         func_105678
label_25ea14:
    if (ctx->pc == 0x25EA14u) {
        ctx->pc = 0x25EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA10u;
        // 0x25ea14: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA18u;
        goto label_25ea18;
    }
    ctx->pc = 0x25EA10u;
    SET_GPR_U32(ctx, 31, 0x25EA18u);
    ctx->pc = 0x25EA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA10u;
    // 0x25ea14: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x25EA10u, 0x25EA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA18u;
label_25ea18:
    // 0x25ea18: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x25ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_25ea1c:
    // 0x25ea1c: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
label_25ea20:
    if (ctx->pc == 0x25EA20u) {
        ctx->pc = 0x25EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA1Cu;
        // 0x25ea20: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA24u;
        goto label_25ea24;
    }
    ctx->pc = 0x25EA1Cu;
    {
        const bool branch_taken_0x25ea1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA1Cu;
        // 0x25ea20: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea1c) {
            ctx->pc = 0x25EA68u;
            goto label_25ea68;
        }
    }
    ctx->pc = 0x25EA24u;
label_25ea24:
    // 0x25ea24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25ea28:
    // 0x25ea28: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25ea28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25ea2c:
    // 0x25ea2c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25ea30:
    // 0x25ea30: 0x40f809  jalr        $v0
label_25ea34:
    if (ctx->pc == 0x25EA34u) {
        ctx->pc = 0x25EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA30u;
        // 0x25ea34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA38u;
        goto label_25ea38;
    }
    ctx->pc = 0x25EA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25EA38u);
        ctx->pc = 0x25EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA30u;
        // 0x25ea34: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EA30u, 0x25EA38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EA38u;
label_25ea38:
    // 0x25ea38: 0x3c0a0026  lui         $t2, 0x26
    ctx->pc = 0x25ea38u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)38 << 16));
label_25ea3c:
    // 0x25ea3c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x25ea3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_25ea40:
    // 0x25ea40: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x25ea40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_25ea44:
    // 0x25ea44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25ea44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ea48:
    // 0x25ea48: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x25ea48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25ea4c:
    // 0x25ea4c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25ea4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25ea50:
    // 0x25ea50: 0x254ae900  addiu       $t2, $t2, -0x1700
    ctx->pc = 0x25ea50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961408));
label_25ea54:
    // 0x25ea54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25ea54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ea58:
    // 0x25ea58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25ea58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ea5c:
    // 0x25ea5c: 0x2406029a  addiu       $a2, $zero, 0x29A
    ctx->pc = 0x25ea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
label_25ea60:
    // 0x25ea60: 0xc041664  jal         func_105990
label_25ea64:
    if (ctx->pc == 0x25EA64u) {
        ctx->pc = 0x25EA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA60u;
        // 0x25ea64: 0x24084000  addiu       $t0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA68u;
        goto label_25ea68;
    }
    ctx->pc = 0x25EA60u;
    SET_GPR_U32(ctx, 31, 0x25EA68u);
    ctx->pc = 0x25EA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA60u;
    // 0x25ea64: 0x24084000  addiu       $t0, $zero, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x25EA60u, 0x25EA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA68u;
label_25ea68:
    // 0x25ea68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25ea68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25ea6c:
    // 0x25ea6c: 0xc05d53a  jal         func_1754E8
label_25ea70:
    if (ctx->pc == 0x25EA70u) {
        ctx->pc = 0x25EA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA6Cu;
        // 0x25ea70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA74u;
        goto label_25ea74;
    }
    ctx->pc = 0x25EA6Cu;
    SET_GPR_U32(ctx, 31, 0x25EA74u);
    ctx->pc = 0x25EA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA6Cu;
    // 0x25ea70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x25EA6Cu, 0x25EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA74u;
label_25ea74:
    // 0x25ea74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25ea74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25ea78:
    // 0x25ea78: 0xc05d4f6  jal         func_1753D8
label_25ea7c:
    if (ctx->pc == 0x25EA7Cu) {
        ctx->pc = 0x25EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA78u;
        // 0x25ea7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EA80u;
        goto label_25ea80;
    }
    ctx->pc = 0x25EA78u;
    SET_GPR_U32(ctx, 31, 0x25EA80u);
    ctx->pc = 0x25EA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EA78u;
    // 0x25ea7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25EA78u, 0x25EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EA80u;
label_25ea80:
    // 0x25ea80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25ea84:
    // 0x25ea84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x25ea84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_25ea88:
    // 0x25ea88: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x25ea88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_25ea8c:
    // 0x25ea8c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x25ea8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_25ea90:
    // 0x25ea90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25ea90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25ea94:
    // 0x25ea94: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x25ea94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_25ea98:
    // 0x25ea98: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x25ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_25ea9c:
    // 0x25ea9c: 0x60f809  jalr        $v1
label_25eaa0:
    if (ctx->pc == 0x25EAA0u) {
        ctx->pc = 0x25EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA9Cu;
        // 0x25eaa0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAA4u;
        goto label_25eaa4;
    }
    ctx->pc = 0x25EA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x25EAA4u);
        ctx->pc = 0x25EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA9Cu;
        // 0x25eaa0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EA9Cu, 0x25EAA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25EAA4u;
label_25eaa4:
    // 0x25eaa4: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x25eaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_25eaa8:
    // 0x25eaa8: 0xc089990  jal         func_226640
label_25eaac:
    if (ctx->pc == 0x25EAACu) {
        ctx->pc = 0x25EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAA8u;
        // 0x25eaac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAB0u;
        goto label_25eab0;
    }
    ctx->pc = 0x25EAA8u;
    SET_GPR_U32(ctx, 31, 0x25EAB0u);
    ctx->pc = 0x25EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EAA8u;
    // 0x25eaac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25EAA8u, 0x25EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAB0u;
label_25eab0:
    // 0x25eab0: 0xc089c18  jal         func_227060
label_25eab4:
    if (ctx->pc == 0x25EAB4u) {
        ctx->pc = 0x25EAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAB0u;
        // 0x25eab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAB8u;
        goto label_25eab8;
    }
    ctx->pc = 0x25EAB0u;
    SET_GPR_U32(ctx, 31, 0x25EAB8u);
    ctx->pc = 0x25EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EAB0u;
    // 0x25eab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x25EAB0u, 0x25EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAB8u;
label_25eab8:
    // 0x25eab8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x25eab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_25eabc:
    // 0x25eabc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25eabcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25eac0:
    // 0x25eac0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25eac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25eac4:
    // 0x25eac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25eac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25eac8:
    // 0x25eac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25eac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25eacc:
    // 0x25eacc: 0xc09d872  jal         func_2761C8
label_25ead0:
    if (ctx->pc == 0x25EAD0u) {
        ctx->pc = 0x25EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EACCu;
        // 0x25ead0: 0x2406029a  addiu       $a2, $zero, 0x29A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAD4u;
        goto label_25ead4;
    }
    ctx->pc = 0x25EACCu;
    SET_GPR_U32(ctx, 31, 0x25EAD4u);
    ctx->pc = 0x25EAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EACCu;
    // 0x25ead0: 0x2406029a  addiu       $a2, $zero, 0x29A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x25EACCu, 0x25EAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25EAD4u;
label_25ead4:
    // 0x25ead4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x25ead4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25ead8:
    // 0x25ead8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x25ead8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25eadc:
    // 0x25eadc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x25eadcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25eae0:
    // 0x25eae0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x25eae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25eae4:
    // 0x25eae4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25eae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25eae8:
    // 0x25eae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25eae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25eaec:
    // 0x25eaec: 0x3e00008  jr          $ra
label_25eaf0:
    if (ctx->pc == 0x25EAF0u) {
        ctx->pc = 0x25EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAECu;
        // 0x25eaf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25EAF4u;
        goto label_25eaf4;
    }
    ctx->pc = 0x25EAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAECu;
        // 0x25eaf0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EAF4u;
label_25eaf4:
    // 0x25eaf4: 0x0  nop
    ctx->pc = 0x25eaf4u;
    // NOP
label_25eaf8:
    // 0x25eaf8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x25eaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_25eafc:
    // 0x25eafc: 0x0  nop
    ctx->pc = 0x25eafcu;
    // NOP
    ctx->pc = 0x25eb00u;
}
