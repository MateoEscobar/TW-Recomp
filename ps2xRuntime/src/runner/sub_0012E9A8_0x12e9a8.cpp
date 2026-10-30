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

// Function: sub_0012E9A8
// Address: 0x12e9a8 - 0x12ec50
void sub_0012E9A8_0x12e9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E9A8_0x12e9a8");
#endif

    switch (ctx->pc) {
        case 0x12e9a8u: goto label_12e9a8;
        case 0x12e9acu: goto label_12e9ac;
        case 0x12e9b0u: goto label_12e9b0;
        case 0x12e9b4u: goto label_12e9b4;
        case 0x12e9b8u: goto label_12e9b8;
        case 0x12e9bcu: goto label_12e9bc;
        case 0x12e9c0u: goto label_12e9c0;
        case 0x12e9c4u: goto label_12e9c4;
        case 0x12e9c8u: goto label_12e9c8;
        case 0x12e9ccu: goto label_12e9cc;
        case 0x12e9d0u: goto label_12e9d0;
        case 0x12e9d4u: goto label_12e9d4;
        case 0x12e9d8u: goto label_12e9d8;
        case 0x12e9dcu: goto label_12e9dc;
        case 0x12e9e0u: goto label_12e9e0;
        case 0x12e9e4u: goto label_12e9e4;
        case 0x12e9e8u: goto label_12e9e8;
        case 0x12e9ecu: goto label_12e9ec;
        case 0x12e9f0u: goto label_12e9f0;
        case 0x12e9f4u: goto label_12e9f4;
        case 0x12e9f8u: goto label_12e9f8;
        case 0x12e9fcu: goto label_12e9fc;
        case 0x12ea00u: goto label_12ea00;
        case 0x12ea04u: goto label_12ea04;
        case 0x12ea08u: goto label_12ea08;
        case 0x12ea0cu: goto label_12ea0c;
        case 0x12ea10u: goto label_12ea10;
        case 0x12ea14u: goto label_12ea14;
        case 0x12ea18u: goto label_12ea18;
        case 0x12ea1cu: goto label_12ea1c;
        case 0x12ea20u: goto label_12ea20;
        case 0x12ea24u: goto label_12ea24;
        case 0x12ea28u: goto label_12ea28;
        case 0x12ea2cu: goto label_12ea2c;
        case 0x12ea30u: goto label_12ea30;
        case 0x12ea34u: goto label_12ea34;
        case 0x12ea38u: goto label_12ea38;
        case 0x12ea3cu: goto label_12ea3c;
        case 0x12ea40u: goto label_12ea40;
        case 0x12ea44u: goto label_12ea44;
        case 0x12ea48u: goto label_12ea48;
        case 0x12ea4cu: goto label_12ea4c;
        case 0x12ea50u: goto label_12ea50;
        case 0x12ea54u: goto label_12ea54;
        case 0x12ea58u: goto label_12ea58;
        case 0x12ea5cu: goto label_12ea5c;
        case 0x12ea60u: goto label_12ea60;
        case 0x12ea64u: goto label_12ea64;
        case 0x12ea68u: goto label_12ea68;
        case 0x12ea6cu: goto label_12ea6c;
        case 0x12ea70u: goto label_12ea70;
        case 0x12ea74u: goto label_12ea74;
        case 0x12ea78u: goto label_12ea78;
        case 0x12ea7cu: goto label_12ea7c;
        case 0x12ea80u: goto label_12ea80;
        case 0x12ea84u: goto label_12ea84;
        case 0x12ea88u: goto label_12ea88;
        case 0x12ea8cu: goto label_12ea8c;
        case 0x12ea90u: goto label_12ea90;
        case 0x12ea94u: goto label_12ea94;
        case 0x12ea98u: goto label_12ea98;
        case 0x12ea9cu: goto label_12ea9c;
        case 0x12eaa0u: goto label_12eaa0;
        case 0x12eaa4u: goto label_12eaa4;
        case 0x12eaa8u: goto label_12eaa8;
        case 0x12eaacu: goto label_12eaac;
        case 0x12eab0u: goto label_12eab0;
        case 0x12eab4u: goto label_12eab4;
        case 0x12eab8u: goto label_12eab8;
        case 0x12eabcu: goto label_12eabc;
        case 0x12eac0u: goto label_12eac0;
        case 0x12eac4u: goto label_12eac4;
        case 0x12eac8u: goto label_12eac8;
        case 0x12eaccu: goto label_12eacc;
        case 0x12ead0u: goto label_12ead0;
        case 0x12ead4u: goto label_12ead4;
        case 0x12ead8u: goto label_12ead8;
        case 0x12eadcu: goto label_12eadc;
        case 0x12eae0u: goto label_12eae0;
        case 0x12eae4u: goto label_12eae4;
        case 0x12eae8u: goto label_12eae8;
        case 0x12eaecu: goto label_12eaec;
        case 0x12eaf0u: goto label_12eaf0;
        case 0x12eaf4u: goto label_12eaf4;
        case 0x12eaf8u: goto label_12eaf8;
        case 0x12eafcu: goto label_12eafc;
        case 0x12eb00u: goto label_12eb00;
        case 0x12eb04u: goto label_12eb04;
        case 0x12eb08u: goto label_12eb08;
        case 0x12eb0cu: goto label_12eb0c;
        case 0x12eb10u: goto label_12eb10;
        case 0x12eb14u: goto label_12eb14;
        case 0x12eb18u: goto label_12eb18;
        case 0x12eb1cu: goto label_12eb1c;
        case 0x12eb20u: goto label_12eb20;
        case 0x12eb24u: goto label_12eb24;
        case 0x12eb28u: goto label_12eb28;
        case 0x12eb2cu: goto label_12eb2c;
        case 0x12eb30u: goto label_12eb30;
        case 0x12eb34u: goto label_12eb34;
        case 0x12eb38u: goto label_12eb38;
        case 0x12eb3cu: goto label_12eb3c;
        case 0x12eb40u: goto label_12eb40;
        case 0x12eb44u: goto label_12eb44;
        case 0x12eb48u: goto label_12eb48;
        case 0x12eb4cu: goto label_12eb4c;
        case 0x12eb50u: goto label_12eb50;
        case 0x12eb54u: goto label_12eb54;
        case 0x12eb58u: goto label_12eb58;
        case 0x12eb5cu: goto label_12eb5c;
        case 0x12eb60u: goto label_12eb60;
        case 0x12eb64u: goto label_12eb64;
        case 0x12eb68u: goto label_12eb68;
        case 0x12eb6cu: goto label_12eb6c;
        case 0x12eb70u: goto label_12eb70;
        case 0x12eb74u: goto label_12eb74;
        case 0x12eb78u: goto label_12eb78;
        case 0x12eb7cu: goto label_12eb7c;
        case 0x12eb80u: goto label_12eb80;
        case 0x12eb84u: goto label_12eb84;
        case 0x12eb88u: goto label_12eb88;
        case 0x12eb8cu: goto label_12eb8c;
        case 0x12eb90u: goto label_12eb90;
        case 0x12eb94u: goto label_12eb94;
        case 0x12eb98u: goto label_12eb98;
        case 0x12eb9cu: goto label_12eb9c;
        case 0x12eba0u: goto label_12eba0;
        case 0x12eba4u: goto label_12eba4;
        case 0x12eba8u: goto label_12eba8;
        case 0x12ebacu: goto label_12ebac;
        case 0x12ebb0u: goto label_12ebb0;
        case 0x12ebb4u: goto label_12ebb4;
        case 0x12ebb8u: goto label_12ebb8;
        case 0x12ebbcu: goto label_12ebbc;
        case 0x12ebc0u: goto label_12ebc0;
        case 0x12ebc4u: goto label_12ebc4;
        case 0x12ebc8u: goto label_12ebc8;
        case 0x12ebccu: goto label_12ebcc;
        case 0x12ebd0u: goto label_12ebd0;
        case 0x12ebd4u: goto label_12ebd4;
        case 0x12ebd8u: goto label_12ebd8;
        case 0x12ebdcu: goto label_12ebdc;
        case 0x12ebe0u: goto label_12ebe0;
        case 0x12ebe4u: goto label_12ebe4;
        case 0x12ebe8u: goto label_12ebe8;
        case 0x12ebecu: goto label_12ebec;
        case 0x12ebf0u: goto label_12ebf0;
        case 0x12ebf4u: goto label_12ebf4;
        case 0x12ebf8u: goto label_12ebf8;
        case 0x12ebfcu: goto label_12ebfc;
        case 0x12ec00u: goto label_12ec00;
        case 0x12ec04u: goto label_12ec04;
        case 0x12ec08u: goto label_12ec08;
        case 0x12ec0cu: goto label_12ec0c;
        case 0x12ec10u: goto label_12ec10;
        case 0x12ec14u: goto label_12ec14;
        case 0x12ec18u: goto label_12ec18;
        case 0x12ec1cu: goto label_12ec1c;
        case 0x12ec20u: goto label_12ec20;
        case 0x12ec24u: goto label_12ec24;
        case 0x12ec28u: goto label_12ec28;
        case 0x12ec2cu: goto label_12ec2c;
        case 0x12ec30u: goto label_12ec30;
        case 0x12ec34u: goto label_12ec34;
        case 0x12ec38u: goto label_12ec38;
        case 0x12ec3cu: goto label_12ec3c;
        case 0x12ec40u: goto label_12ec40;
        case 0x12ec44u: goto label_12ec44;
        case 0x12ec48u: goto label_12ec48;
        case 0x12ec4cu: goto label_12ec4c;
        default: break;
    }

    ctx->pc = 0x12e9a8u;

label_12e9a8:
    // 0x12e9a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x12e9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_12e9ac:
    // 0x12e9ac: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x12e9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_12e9b0:
    // 0x12e9b0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x12e9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_12e9b4:
    // 0x12e9b4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12e9b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12e9b8:
    // 0x12e9b8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x12e9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_12e9bc:
    // 0x12e9bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12e9bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12e9c0:
    // 0x12e9c0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x12e9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_12e9c4:
    // 0x12e9c4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x12e9c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_12e9c8:
    // 0x12e9c8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x12e9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_12e9cc:
    // 0x12e9cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x12e9ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12e9d0:
    // 0x12e9d0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_12e9d4:
    // 0x12e9d4: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x12e9d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_12e9d8:
    // 0x12e9d8: 0x9243045b  lbu         $v1, 0x45B($s2)
    ctx->pc = 0x12e9d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1115)));
label_12e9dc:
    // 0x12e9dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_12e9e0:
    if (ctx->pc == 0x12E9E0u) {
        ctx->pc = 0x12E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9DCu;
        // 0x12e9e0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E9E4u;
        goto label_12e9e4;
    }
    ctx->pc = 0x12E9DCu;
    {
        const bool branch_taken_0x12e9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9DCu;
        // 0x12e9e0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9dc) {
            ctx->pc = 0x12E9ECu;
            goto label_12e9ec;
        }
    }
    ctx->pc = 0x12E9E4u;
label_12e9e4:
    // 0x12e9e4: 0x7a4201e0  lq          $v0, 0x1E0($s2)
    ctx->pc = 0x12e9e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 480)));
label_12e9e8:
    // 0x12e9e8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_12e9ec:
    // 0x12e9ec: 0xc08a608  jal         func_229820
label_12e9f0:
    if (ctx->pc == 0x12E9F0u) {
        ctx->pc = 0x12E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9ECu;
        // 0x12e9f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12E9F4u;
        goto label_12e9f4;
    }
    ctx->pc = 0x12E9ECu;
    SET_GPR_U32(ctx, 31, 0x12E9F4u);
    ctx->pc = 0x12E9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9ECu;
    // 0x12e9f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229820u, 0x12E9ECu, 0x12E9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9F4u;
label_12e9f4:
    // 0x12e9f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12e9f8:
    // 0x12e9f8: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_12e9fc:
    if (ctx->pc == 0x12E9FCu) {
        ctx->pc = 0x12E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9F8u;
        // 0x12e9fc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA00u;
        goto label_12ea00;
    }
    ctx->pc = 0x12E9F8u;
    {
        const bool branch_taken_0x12e9f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E9F8u;
        // 0x12e9fc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e9f8) {
            ctx->pc = 0x12EA50u;
            goto label_12ea50;
        }
    }
    ctx->pc = 0x12EA00u;
label_12ea00:
    // 0x12ea00: 0x84b00092  lh          $s0, 0x92($a1)
    ctx->pc = 0x12ea00u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
label_12ea04:
    // 0x12ea04: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x12ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_12ea08:
    // 0x12ea08: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12ea08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12ea0c:
    // 0x12ea0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12ea0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12ea10:
    // 0x12ea10: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x12ea10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_12ea14:
    // 0x12ea14: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12ea18:
    // 0x12ea18: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12ea18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_12ea1c:
    // 0x12ea1c: 0xc136b24  jal         func_4DAC90
label_12ea20:
    if (ctx->pc == 0x12EA20u) {
        ctx->pc = 0x12EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA1Cu;
        // 0x12ea20: 0x24a504e0  addiu       $a1, $a1, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA24u;
        goto label_12ea24;
    }
    ctx->pc = 0x12EA1Cu;
    SET_GPR_U32(ctx, 31, 0x12EA24u);
    ctx->pc = 0x12EA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA1Cu;
    // 0x12ea20: 0x24a504e0  addiu       $a1, $a1, 0x4E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x12EA1Cu, 0x12EA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA24u;
label_12ea24:
    // 0x12ea24: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12ea24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12ea28:
    // 0x12ea28: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12ea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12ea2c:
    // 0x12ea2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ea2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ea30:
    // 0x12ea30: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12ea30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12ea34:
    // 0x12ea34: 0xc136b18  jal         func_4DAC60
label_12ea38:
    if (ctx->pc == 0x12EA38u) {
        ctx->pc = 0x12EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA34u;
        // 0x12ea38: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA3Cu;
        goto label_12ea3c;
    }
    ctx->pc = 0x12EA34u;
    SET_GPR_U32(ctx, 31, 0x12EA3Cu);
    ctx->pc = 0x12EA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA34u;
    // 0x12ea38: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x12EA34u, 0x12EA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EA3Cu;
label_12ea3c:
    // 0x12ea3c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12ea3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12ea40:
    // 0x12ea40: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x12ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12ea44:
    // 0x12ea44: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12ea44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_12ea48:
    // 0x12ea48: 0x10000010  b           . + 4 + (0x10 << 2)
label_12ea4c:
    if (ctx->pc == 0x12EA4Cu) {
        ctx->pc = 0x12EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA48u;
        // 0x12ea4c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA50u;
        goto label_12ea50;
    }
    ctx->pc = 0x12EA48u;
    {
        const bool branch_taken_0x12ea48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA48u;
        // 0x12ea4c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea48) {
            ctx->pc = 0x12EA8Cu;
            goto label_12ea8c;
        }
    }
    ctx->pc = 0x12EA50u;
label_12ea50:
    // 0x12ea50: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12ea54:
    // 0x12ea54: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x12ea54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12ea58:
    // 0x12ea58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ea5c:
    // 0x12ea5c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x12ea5cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_12ea60:
    // 0x12ea60: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_12ea64:
    // 0x12ea64: 0x60f809  jalr        $v1
label_12ea68:
    if (ctx->pc == 0x12EA68u) {
        ctx->pc = 0x12EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA64u;
        // 0x12ea68: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EA6Cu;
        goto label_12ea6c;
    }
    ctx->pc = 0x12EA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12EA6Cu);
        ctx->pc = 0x12EA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA64u;
        // 0x12ea68: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EA64u, 0x12EA6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12EA6Cu;
label_12ea6c:
    // 0x12ea6c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12ea6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12ea70:
    // 0x12ea70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ea70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ea74:
    // 0x12ea74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12ea74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12ea78:
    // 0x12ea78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12ea78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12ea7c:
    // 0x12ea7c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_12ea80:
    // 0x12ea80: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x12ea80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ea84:
    // 0x12ea84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12ea84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12ea88:
    // 0x12ea88: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x12ea88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_12ea8c:
    // 0x12ea8c: 0x26500180  addiu       $s0, $s2, 0x180
    ctx->pc = 0x12ea8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
label_12ea90:
    // 0x12ea90: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x12ea90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_12ea94:
    // 0x12ea94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12ea94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ea98:
    // 0x12ea98: 0xc0cdb6a  jal         func_336DA8
label_12ea9c:
    if (ctx->pc == 0x12EA9Cu) {
        ctx->pc = 0x12EA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA98u;
        // 0x12ea9c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EAA0u;
        goto label_12eaa0;
    }
    ctx->pc = 0x12EA98u;
    SET_GPR_U32(ctx, 31, 0x12EAA0u);
    ctx->pc = 0x12EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EA98u;
    // 0x12ea9c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DA8u, 0x12EA98u, 0x12EAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EAA0u;
label_12eaa0:
    // 0x12eaa0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12eaa4:
    // 0x12eaa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12eaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12eaa8:
    // 0x12eaa8: 0xc0cdb6a  jal         func_336DA8
label_12eaac:
    if (ctx->pc == 0x12EAACu) {
        ctx->pc = 0x12EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAA8u;
        // 0x12eaac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EAB0u;
        goto label_12eab0;
    }
    ctx->pc = 0x12EAA8u;
    SET_GPR_U32(ctx, 31, 0x12EAB0u);
    ctx->pc = 0x12EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EAA8u;
    // 0x12eaac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336DA8u, 0x12EAA8u, 0x12EAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EAB0u;
label_12eab0:
    // 0x12eab0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x12eab0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12eab4:
    // 0x12eab4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x12eab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_12eab8:
    // 0x12eab8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x12eab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_12eabc:
    // 0x12eabc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12eabcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_12eac0:
    // 0x12eac0: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x12eac0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12eac4:
    // 0x12eac4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x12eac4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_12eac8:
    // 0x12eac8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x12eac8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_12eacc:
    // 0x12eacc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12eaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12ead0:
    // 0x12ead0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12ead0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12ead4:
    // 0x12ead4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x12ead4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12ead8:
    // 0x12ead8: 0x0  nop
    ctx->pc = 0x12ead8u;
    // NOP
label_12eadc:
    // 0x12eadc: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x12eadcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12eae0:
    // 0x12eae0: 0x0  nop
    ctx->pc = 0x12eae0u;
    // NOP
label_12eae4:
    // 0x12eae4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_12eae8:
    if (ctx->pc == 0x12EAE8u) {
        ctx->pc = 0x12EAECu;
        goto label_12eaec;
    }
    ctx->pc = 0x12EAE4u;
    {
        const bool branch_taken_0x12eae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12eae4) {
            ctx->pc = 0x12EAF8u;
            goto label_12eaf8;
        }
    }
    ctx->pc = 0x12EAECu;
label_12eaec:
    // 0x12eaec: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x12eaecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_12eaf0:
    // 0x12eaf0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_12eaf4:
    if (ctx->pc == 0x12EAF4u) {
        ctx->pc = 0x12EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAF0u;
        // 0x12eaf4: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EAF8u;
        goto label_12eaf8;
    }
    ctx->pc = 0x12EAF0u;
    {
        const bool branch_taken_0x12eaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EAF0u;
        // 0x12eaf4: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eaf0) {
            ctx->pc = 0x12EB64u;
            goto label_12eb64;
        }
    }
    ctx->pc = 0x12EAF8u;
label_12eaf8:
    // 0x12eaf8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x12eaf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_12eafc:
    // 0x12eafc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12eafcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12eb00:
    // 0x12eb00: 0x0  nop
    ctx->pc = 0x12eb00u;
    // NOP
label_12eb04:
    // 0x12eb04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12eb04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12eb08:
    // 0x12eb08: 0x0  nop
    ctx->pc = 0x12eb08u;
    // NOP
label_12eb0c:
    // 0x12eb0c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_12eb10:
    if (ctx->pc == 0x12EB10u) {
        ctx->pc = 0x12EB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB0Cu;
        // 0x12eb10: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB14u;
        goto label_12eb14;
    }
    ctx->pc = 0x12EB0Cu;
    {
        const bool branch_taken_0x12eb0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12eb0c) {
            ctx->pc = 0x12EB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EB0Cu;
            // 0x12eb10: 0x46010b02  mul.s       $f12, $f1, $f1 (Delay Slot)
            ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EB28u;
            goto label_12eb28;
        }
    }
    ctx->pc = 0x12EB14u;
label_12eb14:
    // 0x12eb14: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12eb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_12eb18:
    // 0x12eb18: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12eb18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12eb1c:
    // 0x12eb1c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x12eb1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_12eb20:
    // 0x12eb20: 0x10000010  b           . + 4 + (0x10 << 2)
label_12eb24:
    if (ctx->pc == 0x12EB24u) {
        ctx->pc = 0x12EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB20u;
        // 0x12eb24: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB28u;
        goto label_12eb28;
    }
    ctx->pc = 0x12EB20u;
    {
        const bool branch_taken_0x12eb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB20u;
        // 0x12eb24: 0xc7a10030  lwc1        $f1, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb20) {
            ctx->pc = 0x12EB64u;
            goto label_12eb64;
        }
    }
    ctx->pc = 0x12EB28u;
label_12eb28:
    // 0x12eb28: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x12eb28u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_12eb2c:
    // 0x12eb2c: 0x0  nop
    ctx->pc = 0x12eb2cu;
    // NOP
label_12eb30:
    // 0x12eb30: 0x0  nop
    ctx->pc = 0x12eb30u;
    // NOP
label_12eb34:
    // 0x12eb34: 0x460c0304  c1          0xC0304
    ctx->pc = 0x12eb34u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_12eb38:
    // 0x12eb38: 0x0  nop
    ctx->pc = 0x12eb38u;
    // NOP
label_12eb3c:
    // 0x12eb3c: 0x0  nop
    ctx->pc = 0x12eb3cu;
    // NOP
label_12eb40:
    // 0x12eb40: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x12eb40u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
label_12eb44:
    // 0x12eb44: 0xc0cd5a8  jal         func_3356A0
label_12eb48:
    if (ctx->pc == 0x12EB48u) {
        ctx->pc = 0x12EB4Cu;
        goto label_12eb4c;
    }
    ctx->pc = 0x12EB44u;
    SET_GPR_U32(ctx, 31, 0x12EB4Cu);
    ctx->pc = 0x3356A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356A0u, 0x12EB44u, 0x12EB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EB4Cu;
label_12eb4c:
    // 0x12eb4c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x12eb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_12eb50:
    // 0x12eb50: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12eb50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_12eb54:
    // 0x12eb54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12eb54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12eb58:
    // 0x12eb58: 0x0  nop
    ctx->pc = 0x12eb58u;
    // NOP
label_12eb5c:
    // 0x12eb5c: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x12eb5cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12eb60:
    // 0x12eb60: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x12eb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12eb64:
    // 0x12eb64: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x12eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12eb68:
    // 0x12eb68: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x12eb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12eb6c:
    // 0x12eb6c: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x12eb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12eb70:
    // 0x12eb70: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12eb70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_12eb74:
    // 0x12eb74: 0x3c013f01  lui         $at, 0x3F01
    ctx->pc = 0x12eb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16129 << 16));
label_12eb78:
    // 0x12eb78: 0x342192c1  ori         $at, $at, 0x92C1
    ctx->pc = 0x12eb78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37569);
label_12eb7c:
    // 0x12eb7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12eb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12eb80:
    // 0x12eb80: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12eb80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_12eb84:
    // 0x12eb84: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x12eb84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12eb88:
    // 0x12eb88: 0x0  nop
    ctx->pc = 0x12eb88u;
    // NOP
label_12eb8c:
    // 0x12eb8c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_12eb90:
    if (ctx->pc == 0x12EB90u) {
        ctx->pc = 0x12EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB8Cu;
        // 0x12eb90: 0x46000981  sub.s       $f6, $f1, $f0 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EB94u;
        goto label_12eb94;
    }
    ctx->pc = 0x12EB8Cu;
    {
        const bool branch_taken_0x12eb8c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB8Cu;
        // 0x12eb90: 0x46000981  sub.s       $f6, $f1, $f0 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb8c) {
            ctx->pc = 0x12EBB4u;
            goto label_12ebb4;
        }
    }
    ctx->pc = 0x12EB94u;
label_12eb94:
    // 0x12eb94: 0x3c013edf  lui         $at, 0x3EDF
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16095 << 16));
label_12eb98:
    // 0x12eb98: 0x342166f4  ori         $at, $at, 0x66F4
    ctx->pc = 0x12eb98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26356);
label_12eb9c:
    // 0x12eb9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12eb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12eba0:
    // 0x12eba0: 0x0  nop
    ctx->pc = 0x12eba0u;
    // NOP
label_12eba4:
    // 0x12eba4: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x12eba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12eba8:
    // 0x12eba8: 0x0  nop
    ctx->pc = 0x12eba8u;
    // NOP
label_12ebac:
    // 0x12ebac: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_12ebb0:
    if (ctx->pc == 0x12EBB0u) {
        ctx->pc = 0x12EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBACu;
        // 0x12ebb0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EBB4u;
        goto label_12ebb4;
    }
    ctx->pc = 0x12EBACu;
    {
        const bool branch_taken_0x12ebac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBACu;
        // 0x12ebb0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebac) {
            ctx->pc = 0x12EC30u;
            goto label_12ec30;
        }
    }
    ctx->pc = 0x12EBB4u;
label_12ebb4:
    // 0x12ebb4: 0x3c013ef1  lui         $at, 0x3EF1
    ctx->pc = 0x12ebb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16113 << 16));
label_12ebb8:
    // 0x12ebb8: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x12ebb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
label_12ebbc:
    // 0x12ebbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12ebbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12ebc0:
    // 0x12ebc0: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x12ebc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
label_12ebc4:
    // 0x12ebc4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12ebc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_12ebc8:
    // 0x12ebc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12ebc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_12ebcc:
    // 0x12ebcc: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x12ebccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
label_12ebd0:
    // 0x12ebd0: 0x3c014132  lui         $at, 0x4132
    ctx->pc = 0x12ebd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16690 << 16));
label_12ebd4:
    // 0x12ebd4: 0x3421b8c3  ori         $at, $at, 0xB8C3
    ctx->pc = 0x12ebd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47299);
label_12ebd8:
    // 0x12ebd8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12ebd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_12ebdc:
    // 0x12ebdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12ebdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12ebe0:
    // 0x12ebe0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x12ebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_12ebe4:
    // 0x12ebe4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12ebe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_12ebe8:
    // 0x12ebe8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12ebe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_12ebec:
    // 0x12ebec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x12ebecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_12ebf0:
    // 0x12ebf0: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x12ebf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12ebf4:
    // 0x12ebf4: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x12ebf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_12ebf8:
    // 0x12ebf8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12ebf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_12ebfc:
    // 0x12ebfc: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x12ebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ec00:
    // 0x12ec00: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x12ec00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_12ec04:
    // 0x12ec04: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x12ec04u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
label_12ec08:
    // 0x12ec08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_12ec0c:
    if (ctx->pc == 0x12EC0Cu) {
        ctx->pc = 0x12EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC08u;
        // 0x12ec0c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC10u;
        goto label_12ec10;
    }
    ctx->pc = 0x12EC08u;
    {
        const bool branch_taken_0x12ec08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC08u;
        // 0x12ec0c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec08) {
            ctx->pc = 0x12EC18u;
            goto label_12ec18;
        }
    }
    ctx->pc = 0x12EC10u;
label_12ec10:
    // 0x12ec10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x12ec10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_12ec14:
    // 0x12ec14: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x12ec14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_12ec18:
    // 0x12ec18: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x12ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_12ec1c:
    // 0x12ec1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ec1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ec20:
    // 0x12ec20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x12ec20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12ec24:
    // 0x12ec24: 0xc04b5a2  jal         func_12D688
label_12ec28:
    if (ctx->pc == 0x12EC28u) {
        ctx->pc = 0x12EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC24u;
        // 0x12ec28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC2Cu;
        goto label_12ec2c;
    }
    ctx->pc = 0x12EC24u;
    SET_GPR_U32(ctx, 31, 0x12EC2Cu);
    ctx->pc = 0x12EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC24u;
    // 0x12ec28: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D688u, 0x12EC24u, 0x12EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC2Cu;
label_12ec2c:
    // 0x12ec2c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x12ec2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_12ec30:
    // 0x12ec30: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x12ec30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_12ec34:
    // 0x12ec34: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x12ec34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_12ec38:
    // 0x12ec38: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x12ec38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_12ec3c:
    // 0x12ec3c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x12ec3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_12ec40:
    // 0x12ec40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12ec40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_12ec44:
    // 0x12ec44: 0x3e00008  jr          $ra
label_12ec48:
    if (ctx->pc == 0x12EC48u) {
        ctx->pc = 0x12EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC44u;
        // 0x12ec48: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12EC4Cu;
        goto label_12ec4c;
    }
    ctx->pc = 0x12EC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC44u;
        // 0x12ec48: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EC4Cu;
label_12ec4c:
    // 0x12ec4c: 0x0  nop
    ctx->pc = 0x12ec4cu;
    // NOP
    ctx->pc = 0x12ec50u;
}
