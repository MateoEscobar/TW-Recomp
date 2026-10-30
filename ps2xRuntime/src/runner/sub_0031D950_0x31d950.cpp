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

// Function: sub_0031D950
// Address: 0x31d950 - 0x31dc28
void sub_0031D950_0x31d950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031D950_0x31d950");
#endif

    switch (ctx->pc) {
        case 0x31d950u: goto label_31d950;
        case 0x31d954u: goto label_31d954;
        case 0x31d958u: goto label_31d958;
        case 0x31d95cu: goto label_31d95c;
        case 0x31d960u: goto label_31d960;
        case 0x31d964u: goto label_31d964;
        case 0x31d968u: goto label_31d968;
        case 0x31d96cu: goto label_31d96c;
        case 0x31d970u: goto label_31d970;
        case 0x31d974u: goto label_31d974;
        case 0x31d978u: goto label_31d978;
        case 0x31d97cu: goto label_31d97c;
        case 0x31d980u: goto label_31d980;
        case 0x31d984u: goto label_31d984;
        case 0x31d988u: goto label_31d988;
        case 0x31d98cu: goto label_31d98c;
        case 0x31d990u: goto label_31d990;
        case 0x31d994u: goto label_31d994;
        case 0x31d998u: goto label_31d998;
        case 0x31d99cu: goto label_31d99c;
        case 0x31d9a0u: goto label_31d9a0;
        case 0x31d9a4u: goto label_31d9a4;
        case 0x31d9a8u: goto label_31d9a8;
        case 0x31d9acu: goto label_31d9ac;
        case 0x31d9b0u: goto label_31d9b0;
        case 0x31d9b4u: goto label_31d9b4;
        case 0x31d9b8u: goto label_31d9b8;
        case 0x31d9bcu: goto label_31d9bc;
        case 0x31d9c0u: goto label_31d9c0;
        case 0x31d9c4u: goto label_31d9c4;
        case 0x31d9c8u: goto label_31d9c8;
        case 0x31d9ccu: goto label_31d9cc;
        case 0x31d9d0u: goto label_31d9d0;
        case 0x31d9d4u: goto label_31d9d4;
        case 0x31d9d8u: goto label_31d9d8;
        case 0x31d9dcu: goto label_31d9dc;
        case 0x31d9e0u: goto label_31d9e0;
        case 0x31d9e4u: goto label_31d9e4;
        case 0x31d9e8u: goto label_31d9e8;
        case 0x31d9ecu: goto label_31d9ec;
        case 0x31d9f0u: goto label_31d9f0;
        case 0x31d9f4u: goto label_31d9f4;
        case 0x31d9f8u: goto label_31d9f8;
        case 0x31d9fcu: goto label_31d9fc;
        case 0x31da00u: goto label_31da00;
        case 0x31da04u: goto label_31da04;
        case 0x31da08u: goto label_31da08;
        case 0x31da0cu: goto label_31da0c;
        case 0x31da10u: goto label_31da10;
        case 0x31da14u: goto label_31da14;
        case 0x31da18u: goto label_31da18;
        case 0x31da1cu: goto label_31da1c;
        case 0x31da20u: goto label_31da20;
        case 0x31da24u: goto label_31da24;
        case 0x31da28u: goto label_31da28;
        case 0x31da2cu: goto label_31da2c;
        case 0x31da30u: goto label_31da30;
        case 0x31da34u: goto label_31da34;
        case 0x31da38u: goto label_31da38;
        case 0x31da3cu: goto label_31da3c;
        case 0x31da40u: goto label_31da40;
        case 0x31da44u: goto label_31da44;
        case 0x31da48u: goto label_31da48;
        case 0x31da4cu: goto label_31da4c;
        case 0x31da50u: goto label_31da50;
        case 0x31da54u: goto label_31da54;
        case 0x31da58u: goto label_31da58;
        case 0x31da5cu: goto label_31da5c;
        case 0x31da60u: goto label_31da60;
        case 0x31da64u: goto label_31da64;
        case 0x31da68u: goto label_31da68;
        case 0x31da6cu: goto label_31da6c;
        case 0x31da70u: goto label_31da70;
        case 0x31da74u: goto label_31da74;
        case 0x31da78u: goto label_31da78;
        case 0x31da7cu: goto label_31da7c;
        case 0x31da80u: goto label_31da80;
        case 0x31da84u: goto label_31da84;
        case 0x31da88u: goto label_31da88;
        case 0x31da8cu: goto label_31da8c;
        case 0x31da90u: goto label_31da90;
        case 0x31da94u: goto label_31da94;
        case 0x31da98u: goto label_31da98;
        case 0x31da9cu: goto label_31da9c;
        case 0x31daa0u: goto label_31daa0;
        case 0x31daa4u: goto label_31daa4;
        case 0x31daa8u: goto label_31daa8;
        case 0x31daacu: goto label_31daac;
        case 0x31dab0u: goto label_31dab0;
        case 0x31dab4u: goto label_31dab4;
        case 0x31dab8u: goto label_31dab8;
        case 0x31dabcu: goto label_31dabc;
        case 0x31dac0u: goto label_31dac0;
        case 0x31dac4u: goto label_31dac4;
        case 0x31dac8u: goto label_31dac8;
        case 0x31daccu: goto label_31dacc;
        case 0x31dad0u: goto label_31dad0;
        case 0x31dad4u: goto label_31dad4;
        case 0x31dad8u: goto label_31dad8;
        case 0x31dadcu: goto label_31dadc;
        case 0x31dae0u: goto label_31dae0;
        case 0x31dae4u: goto label_31dae4;
        case 0x31dae8u: goto label_31dae8;
        case 0x31daecu: goto label_31daec;
        case 0x31daf0u: goto label_31daf0;
        case 0x31daf4u: goto label_31daf4;
        case 0x31daf8u: goto label_31daf8;
        case 0x31dafcu: goto label_31dafc;
        case 0x31db00u: goto label_31db00;
        case 0x31db04u: goto label_31db04;
        case 0x31db08u: goto label_31db08;
        case 0x31db0cu: goto label_31db0c;
        case 0x31db10u: goto label_31db10;
        case 0x31db14u: goto label_31db14;
        case 0x31db18u: goto label_31db18;
        case 0x31db1cu: goto label_31db1c;
        case 0x31db20u: goto label_31db20;
        case 0x31db24u: goto label_31db24;
        case 0x31db28u: goto label_31db28;
        case 0x31db2cu: goto label_31db2c;
        case 0x31db30u: goto label_31db30;
        case 0x31db34u: goto label_31db34;
        case 0x31db38u: goto label_31db38;
        case 0x31db3cu: goto label_31db3c;
        case 0x31db40u: goto label_31db40;
        case 0x31db44u: goto label_31db44;
        case 0x31db48u: goto label_31db48;
        case 0x31db4cu: goto label_31db4c;
        case 0x31db50u: goto label_31db50;
        case 0x31db54u: goto label_31db54;
        case 0x31db58u: goto label_31db58;
        case 0x31db5cu: goto label_31db5c;
        case 0x31db60u: goto label_31db60;
        case 0x31db64u: goto label_31db64;
        case 0x31db68u: goto label_31db68;
        case 0x31db6cu: goto label_31db6c;
        case 0x31db70u: goto label_31db70;
        case 0x31db74u: goto label_31db74;
        case 0x31db78u: goto label_31db78;
        case 0x31db7cu: goto label_31db7c;
        case 0x31db80u: goto label_31db80;
        case 0x31db84u: goto label_31db84;
        case 0x31db88u: goto label_31db88;
        case 0x31db8cu: goto label_31db8c;
        case 0x31db90u: goto label_31db90;
        case 0x31db94u: goto label_31db94;
        case 0x31db98u: goto label_31db98;
        case 0x31db9cu: goto label_31db9c;
        case 0x31dba0u: goto label_31dba0;
        case 0x31dba4u: goto label_31dba4;
        case 0x31dba8u: goto label_31dba8;
        case 0x31dbacu: goto label_31dbac;
        case 0x31dbb0u: goto label_31dbb0;
        case 0x31dbb4u: goto label_31dbb4;
        case 0x31dbb8u: goto label_31dbb8;
        case 0x31dbbcu: goto label_31dbbc;
        case 0x31dbc0u: goto label_31dbc0;
        case 0x31dbc4u: goto label_31dbc4;
        case 0x31dbc8u: goto label_31dbc8;
        case 0x31dbccu: goto label_31dbcc;
        case 0x31dbd0u: goto label_31dbd0;
        case 0x31dbd4u: goto label_31dbd4;
        case 0x31dbd8u: goto label_31dbd8;
        case 0x31dbdcu: goto label_31dbdc;
        case 0x31dbe0u: goto label_31dbe0;
        case 0x31dbe4u: goto label_31dbe4;
        case 0x31dbe8u: goto label_31dbe8;
        case 0x31dbecu: goto label_31dbec;
        case 0x31dbf0u: goto label_31dbf0;
        case 0x31dbf4u: goto label_31dbf4;
        case 0x31dbf8u: goto label_31dbf8;
        case 0x31dbfcu: goto label_31dbfc;
        case 0x31dc00u: goto label_31dc00;
        case 0x31dc04u: goto label_31dc04;
        case 0x31dc08u: goto label_31dc08;
        case 0x31dc0cu: goto label_31dc0c;
        case 0x31dc10u: goto label_31dc10;
        case 0x31dc14u: goto label_31dc14;
        case 0x31dc18u: goto label_31dc18;
        case 0x31dc1cu: goto label_31dc1c;
        case 0x31dc20u: goto label_31dc20;
        case 0x31dc24u: goto label_31dc24;
        default: break;
    }

    ctx->pc = 0x31d950u;

label_31d950:
    // 0x31d950: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x31d950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_31d954:
    // 0x31d954: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x31d954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_31d958:
    // 0x31d958: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x31d958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_31d95c:
    // 0x31d95c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31d95cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31d960:
    // 0x31d960: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x31d960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_31d964:
    // 0x31d964: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31d968:
    // 0x31d968: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x31d968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_31d96c:
    // 0x31d96c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x31d96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_31d970:
    // 0x31d970: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x31d970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_31d974:
    // 0x31d974: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31d974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_31d978:
    // 0x31d978: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x31d978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_31d97c:
    // 0x31d97c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x31d97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_31d980:
    // 0x31d980: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31d980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31d984:
    // 0x31d984: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x31d984u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_31d988:
    // 0x31d988: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x31d988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_31d98c:
    // 0x31d98c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x31d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_31d990:
    // 0x31d990: 0xc0e40a2  jal         func_390288
label_31d994:
    if (ctx->pc == 0x31D994u) {
        ctx->pc = 0x31D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D990u;
        // 0x31d994: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D998u;
        goto label_31d998;
    }
    ctx->pc = 0x31D990u;
    SET_GPR_U32(ctx, 31, 0x31D998u);
    ctx->pc = 0x31D994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D990u;
    // 0x31d994: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x31D990u, 0x31D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D998u;
label_31d998:
    // 0x31d998: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x31d998u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d99c:
    // 0x31d99c: 0x12c00094  beqz        $s6, . + 4 + (0x94 << 2)
label_31d9a0:
    if (ctx->pc == 0x31D9A0u) {
        ctx->pc = 0x31D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D99Cu;
        // 0x31d9a0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9A4u;
        goto label_31d9a4;
    }
    ctx->pc = 0x31D99Cu;
    {
        const bool branch_taken_0x31d99c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D99Cu;
        // 0x31d9a0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d99c) {
            ctx->pc = 0x31DBF0u;
            goto label_31dbf0;
        }
    }
    ctx->pc = 0x31D9A4u;
label_31d9a4:
    // 0x31d9a4: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x31d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31d9a8:
    // 0x31d9a8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x31d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_31d9ac:
    // 0x31d9ac: 0x24574b00  addiu       $s7, $v0, 0x4B00
    ctx->pc = 0x31d9acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_31d9b0:
    // 0x31d9b0: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x31d9b0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_31d9b4:
    // 0x31d9b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x31d9b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31d9b8:
    // 0x31d9b8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x31d9b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_31d9bc:
    // 0x31d9bc: 0x247e0048  addiu       $fp, $v1, 0x48
    ctx->pc = 0x31d9bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_31d9c0:
    // 0x31d9c0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x31d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_31d9c4:
    // 0x31d9c4: 0x0  nop
    ctx->pc = 0x31d9c4u;
    // NOP
label_31d9c8:
    // 0x31d9c8: 0xc137826  jal         func_4DE098
label_31d9cc:
    if (ctx->pc == 0x31D9CCu) {
        ctx->pc = 0x31D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9C8u;
        // 0x31d9cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9D0u;
        goto label_31d9d0;
    }
    ctx->pc = 0x31D9C8u;
    SET_GPR_U32(ctx, 31, 0x31D9D0u);
    ctx->pc = 0x31D9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D9C8u;
    // 0x31d9cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31D9C8u, 0x31D9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9D0u;
label_31d9d0:
    // 0x31d9d0: 0xc0e409a  jal         func_390268
label_31d9d4:
    if (ctx->pc == 0x31D9D4u) {
        ctx->pc = 0x31D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9D0u;
        // 0x31d9d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9D8u;
        goto label_31d9d8;
    }
    ctx->pc = 0x31D9D0u;
    SET_GPR_U32(ctx, 31, 0x31D9D8u);
    ctx->pc = 0x31D9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D9D0u;
    // 0x31d9d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31D9D0u, 0x31D9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9D8u;
label_31d9d8:
    // 0x31d9d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x31d9d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31d9dc:
    // 0x31d9dc: 0x52400081  beql        $s2, $zero, . + 4 + (0x81 << 2)
label_31d9e0:
    if (ctx->pc == 0x31D9E0u) {
        ctx->pc = 0x31D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9DCu;
        // 0x31d9e0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9E4u;
        goto label_31d9e4;
    }
    ctx->pc = 0x31D9DCu;
    {
        const bool branch_taken_0x31d9dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d9dc) {
            ctx->pc = 0x31D9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D9DCu;
            // 0x31d9e0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31D9E4u;
label_31d9e4:
    // 0x31d9e4: 0xc089f98  jal         func_227E60
label_31d9e8:
    if (ctx->pc == 0x31D9E8u) {
        ctx->pc = 0x31D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9E4u;
        // 0x31d9e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9ECu;
        goto label_31d9ec;
    }
    ctx->pc = 0x31D9E4u;
    SET_GPR_U32(ctx, 31, 0x31D9ECu);
    ctx->pc = 0x31D9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D9E4u;
    // 0x31d9e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x31D9E4u, 0x31D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D9ECu;
label_31d9ec:
    // 0x31d9ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31d9f0:
    // 0x31d9f0: 0x5043007c  beql        $v0, $v1, . + 4 + (0x7C << 2)
label_31d9f4:
    if (ctx->pc == 0x31D9F4u) {
        ctx->pc = 0x31D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9F0u;
        // 0x31d9f4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31D9F8u;
        goto label_31d9f8;
    }
    ctx->pc = 0x31D9F0u;
    {
        const bool branch_taken_0x31d9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31d9f0) {
            ctx->pc = 0x31D9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31D9F0u;
            // 0x31d9f4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31D9F8u;
label_31d9f8:
    // 0x31d9f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31d9fc:
    // 0x31d9fc: 0xc087502  jal         func_21D408
label_31da00:
    if (ctx->pc == 0x31DA00u) {
        ctx->pc = 0x31DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D9FCu;
        // 0x31da00: 0x26500090  addiu       $s0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA04u;
        goto label_31da04;
    }
    ctx->pc = 0x31D9FCu;
    SET_GPR_U32(ctx, 31, 0x31DA04u);
    ctx->pc = 0x31DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D9FCu;
    // 0x31da00: 0x26500090  addiu       $s0, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31D9FCu, 0x31DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA04u;
label_31da04:
    // 0x31da04: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x31da04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31da08:
    // 0x31da08: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31da08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_31da0c:
    // 0x31da0c: 0xc10587a  jal         func_4161E8
label_31da10:
    if (ctx->pc == 0x31DA10u) {
        ctx->pc = 0x31DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA0Cu;
        // 0x31da10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA14u;
        goto label_31da14;
    }
    ctx->pc = 0x31DA0Cu;
    SET_GPR_U32(ctx, 31, 0x31DA14u);
    ctx->pc = 0x31DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DA0Cu;
    // 0x31da10: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x31DA0Cu, 0x31DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA14u;
label_31da14:
    // 0x31da14: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x31da14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_31da18:
    // 0x31da18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31da18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31da1c:
    // 0x31da1c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31da1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31da20:
    // 0x31da20: 0xc0cdb38  jal         func_336CE0
label_31da24:
    if (ctx->pc == 0x31DA24u) {
        ctx->pc = 0x31DA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA20u;
        // 0x31da24: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA28u;
        goto label_31da28;
    }
    ctx->pc = 0x31DA20u;
    SET_GPR_U32(ctx, 31, 0x31DA28u);
    ctx->pc = 0x31DA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DA20u;
    // 0x31da24: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31DA20u, 0x31DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA28u;
label_31da28:
    // 0x31da28: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31da28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31da2c:
    // 0x31da2c: 0x0  nop
    ctx->pc = 0x31da2cu;
    // NOP
label_31da30:
    // 0x31da30: 0x45000023  bc1f        . + 4 + (0x23 << 2)
label_31da34:
    if (ctx->pc == 0x31DA34u) {
        ctx->pc = 0x31DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA30u;
        // 0x31da34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA38u;
        goto label_31da38;
    }
    ctx->pc = 0x31DA30u;
    {
        const bool branch_taken_0x31da30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA30u;
        // 0x31da34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da30) {
            ctx->pc = 0x31DAC0u;
            goto label_31dac0;
        }
    }
    ctx->pc = 0x31DA38u;
label_31da38:
    // 0x31da38: 0xc0a3658  jal         func_28D960
label_31da3c:
    if (ctx->pc == 0x31DA3Cu) {
        ctx->pc = 0x31DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA38u;
        // 0x31da3c: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA40u;
        goto label_31da40;
    }
    ctx->pc = 0x31DA38u;
    SET_GPR_U32(ctx, 31, 0x31DA40u);
    ctx->pc = 0x31DA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DA38u;
    // 0x31da3c: 0x2405005e  addiu       $a1, $zero, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31DA38u, 0x31DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA40u;
label_31da40:
    // 0x31da40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31da40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31da44:
    // 0x31da44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31da44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31da48:
    // 0x31da48: 0x1602001d  bne         $s0, $v0, . + 4 + (0x1D << 2)
label_31da4c:
    if (ctx->pc == 0x31DA4Cu) {
        ctx->pc = 0x31DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA48u;
        // 0x31da4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA50u;
        goto label_31da50;
    }
    ctx->pc = 0x31DA48u;
    {
        const bool branch_taken_0x31da48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x31DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA48u;
        // 0x31da4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da48) {
            ctx->pc = 0x31DAC0u;
            goto label_31dac0;
        }
    }
    ctx->pc = 0x31DA50u;
label_31da50:
    // 0x31da50: 0xc0a3658  jal         func_28D960
label_31da54:
    if (ctx->pc == 0x31DA54u) {
        ctx->pc = 0x31DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA50u;
        // 0x31da54: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA58u;
        goto label_31da58;
    }
    ctx->pc = 0x31DA50u;
    SET_GPR_U32(ctx, 31, 0x31DA58u);
    ctx->pc = 0x31DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DA50u;
    // 0x31da54: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31DA50u, 0x31DA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA58u;
label_31da58:
    // 0x31da58: 0x14500019  bne         $v0, $s0, . + 4 + (0x19 << 2)
label_31da5c:
    if (ctx->pc == 0x31DA5Cu) {
        ctx->pc = 0x31DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA58u;
        // 0x31da5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA60u;
        goto label_31da60;
    }
    ctx->pc = 0x31DA58u;
    {
        const bool branch_taken_0x31da58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x31DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA58u;
        // 0x31da5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da58) {
            ctx->pc = 0x31DAC0u;
            goto label_31dac0;
        }
    }
    ctx->pc = 0x31DA60u;
label_31da60:
    // 0x31da60: 0xc0a3658  jal         func_28D960
label_31da64:
    if (ctx->pc == 0x31DA64u) {
        ctx->pc = 0x31DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA60u;
        // 0x31da64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA68u;
        goto label_31da68;
    }
    ctx->pc = 0x31DA60u;
    SET_GPR_U32(ctx, 31, 0x31DA68u);
    ctx->pc = 0x31DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DA60u;
    // 0x31da64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31DA60u, 0x31DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DA68u;
label_31da68:
    // 0x31da68: 0x8223002d  lb          $v1, 0x2D($s1)
    ctx->pc = 0x31da68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
label_31da6c:
    // 0x31da6c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x31da6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31da70:
    // 0x31da70: 0x5460005c  bnel        $v1, $zero, . + 4 + (0x5C << 2)
label_31da74:
    if (ctx->pc == 0x31DA74u) {
        ctx->pc = 0x31DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA70u;
        // 0x31da74: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA78u;
        goto label_31da78;
    }
    ctx->pc = 0x31DA70u;
    {
        const bool branch_taken_0x31da70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31da70) {
            ctx->pc = 0x31DA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DA70u;
            // 0x31da74: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DA78u;
label_31da78:
    // 0x31da78: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x31da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31da7c:
    // 0x31da7c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31da7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31da80:
    // 0x31da80: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31da84:
    // 0x31da84: 0x40f809  jalr        $v0
label_31da88:
    if (ctx->pc == 0x31DA88u) {
        ctx->pc = 0x31DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA84u;
        // 0x31da88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA8Cu;
        goto label_31da8c;
    }
    ctx->pc = 0x31DA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31DA8Cu);
        ctx->pc = 0x31DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA84u;
        // 0x31da88: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA84u, 0x31DA8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31DA8Cu;
label_31da8c:
    // 0x31da8c: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x31da8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_31da90:
    // 0x31da90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31da90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31da94:
    // 0x31da94: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x31da94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_31da98:
    // 0x31da98: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x31da98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_31da9c:
    // 0x31da9c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x31da9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31daa0:
    // 0x31daa0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x31daa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_31daa4:
    // 0x31daa4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x31daa4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_31daa8:
    // 0x31daa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31daa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31daac:
    // 0x31daac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31daacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dab0:
    // 0x31dab0: 0xc0b68b0  jal         func_2DA2C0
label_31dab4:
    if (ctx->pc == 0x31DAB4u) {
        ctx->pc = 0x31DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAB0u;
        // 0x31dab4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DAB8u;
        goto label_31dab8;
    }
    ctx->pc = 0x31DAB0u;
    SET_GPR_U32(ctx, 31, 0x31DAB8u);
    ctx->pc = 0x31DAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DAB0u;
    // 0x31dab4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA2C0u, 0x31DAB0u, 0x31DAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DAB8u;
label_31dab8:
    // 0x31dab8: 0x1000004a  b           . + 4 + (0x4A << 2)
label_31dabc:
    if (ctx->pc == 0x31DABCu) {
        ctx->pc = 0x31DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAB8u;
        // 0x31dabc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DAC0u;
        goto label_31dac0;
    }
    ctx->pc = 0x31DAB8u;
    {
        const bool branch_taken_0x31dab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAB8u;
        // 0x31dabc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dab8) {
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DAC0u;
label_31dac0:
    // 0x31dac0: 0xc0a3658  jal         func_28D960
label_31dac4:
    if (ctx->pc == 0x31DAC4u) {
        ctx->pc = 0x31DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAC0u;
        // 0x31dac4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DAC8u;
        goto label_31dac8;
    }
    ctx->pc = 0x31DAC0u;
    SET_GPR_U32(ctx, 31, 0x31DAC8u);
    ctx->pc = 0x31DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DAC0u;
    // 0x31dac4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x31DAC0u, 0x31DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DAC8u;
label_31dac8:
    // 0x31dac8: 0x8223002d  lb          $v1, 0x2D($s1)
    ctx->pc = 0x31dac8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 45)));
label_31dacc:
    // 0x31dacc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x31daccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_31dad0:
    // 0x31dad0: 0x54600044  bnel        $v1, $zero, . + 4 + (0x44 << 2)
label_31dad4:
    if (ctx->pc == 0x31DAD4u) {
        ctx->pc = 0x31DAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAD0u;
        // 0x31dad4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DAD8u;
        goto label_31dad8;
    }
    ctx->pc = 0x31DAD0u;
    {
        const bool branch_taken_0x31dad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dad0) {
            ctx->pc = 0x31DAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DAD0u;
            // 0x31dad4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DAD8u;
label_31dad8:
    // 0x31dad8: 0x86650002  lh          $a1, 0x2($s3)
    ctx->pc = 0x31dad8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_31dadc:
    // 0x31dadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31dadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31dae0:
    // 0x31dae0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31dae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31dae4:
    // 0x31dae4: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x31dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_31dae8:
    // 0x31dae8: 0xc105db6  jal         func_4176D8
label_31daec:
    if (ctx->pc == 0x31DAECu) {
        ctx->pc = 0x31DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAE8u;
        // 0x31daec: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DAF0u;
        goto label_31daf0;
    }
    ctx->pc = 0x31DAE8u;
    SET_GPR_U32(ctx, 31, 0x31DAF0u);
    ctx->pc = 0x31DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DAE8u;
    // 0x31daec: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4176D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4176D8u, 0x31DAE8u, 0x31DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DAF0u;
label_31daf0:
    // 0x31daf0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31daf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31daf4:
    // 0x31daf4: 0x5260003b  beql        $s3, $zero, . + 4 + (0x3B << 2)
label_31daf8:
    if (ctx->pc == 0x31DAF8u) {
        ctx->pc = 0x31DAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAF4u;
        // 0x31daf8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DAFCu;
        goto label_31dafc;
    }
    ctx->pc = 0x31DAF4u;
    {
        const bool branch_taken_0x31daf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x31daf4) {
            ctx->pc = 0x31DAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DAF4u;
            // 0x31daf8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DAFCu;
label_31dafc:
    // 0x31dafc: 0xc10587a  jal         func_4161E8
label_31db00:
    if (ctx->pc == 0x31DB00u) {
        ctx->pc = 0x31DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAFCu;
        // 0x31db00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB04u;
        goto label_31db04;
    }
    ctx->pc = 0x31DAFCu;
    SET_GPR_U32(ctx, 31, 0x31DB04u);
    ctx->pc = 0x31DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DAFCu;
    // 0x31db00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x31DAFCu, 0x31DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB04u;
label_31db04:
    // 0x31db04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31db04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31db08:
    // 0x31db08: 0xc10587a  jal         func_4161E8
label_31db0c:
    if (ctx->pc == 0x31DB0Cu) {
        ctx->pc = 0x31DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB08u;
        // 0x31db0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB10u;
        goto label_31db10;
    }
    ctx->pc = 0x31DB08u;
    SET_GPR_U32(ctx, 31, 0x31DB10u);
    ctx->pc = 0x31DB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB08u;
    // 0x31db0c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x31DB08u, 0x31DB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB10u;
label_31db10:
    // 0x31db10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31db10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31db14:
    // 0x31db14: 0xc0cdb38  jal         func_336CE0
label_31db18:
    if (ctx->pc == 0x31DB18u) {
        ctx->pc = 0x31DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB14u;
        // 0x31db18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB1Cu;
        goto label_31db1c;
    }
    ctx->pc = 0x31DB14u;
    SET_GPR_U32(ctx, 31, 0x31DB1Cu);
    ctx->pc = 0x31DB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB14u;
    // 0x31db18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31DB14u, 0x31DB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB1Cu;
label_31db1c:
    // 0x31db1c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31db1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31db20:
    // 0x31db20: 0x0  nop
    ctx->pc = 0x31db20u;
    // NOP
label_31db24:
    // 0x31db24: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_31db28:
    if (ctx->pc == 0x31DB28u) {
        ctx->pc = 0x31DB2Cu;
        goto label_31db2c;
    }
    ctx->pc = 0x31DB24u;
    {
        const bool branch_taken_0x31db24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31db24) {
            ctx->pc = 0x31DB8Cu;
            goto label_31db8c;
        }
    }
    ctx->pc = 0x31DB2Cu;
label_31db2c:
    // 0x31db2c: 0xc089bfc  jal         func_226FF0
label_31db30:
    if (ctx->pc == 0x31DB30u) {
        ctx->pc = 0x31DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB2Cu;
        // 0x31db30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB34u;
        goto label_31db34;
    }
    ctx->pc = 0x31DB2Cu;
    SET_GPR_U32(ctx, 31, 0x31DB34u);
    ctx->pc = 0x31DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB2Cu;
    // 0x31db30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x31DB2Cu, 0x31DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB34u;
label_31db34:
    // 0x31db34: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_31db38:
    if (ctx->pc == 0x31DB38u) {
        ctx->pc = 0x31DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB34u;
        // 0x31db38: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB3Cu;
        goto label_31db3c;
    }
    ctx->pc = 0x31DB34u;
    {
        const bool branch_taken_0x31db34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31db34) {
            ctx->pc = 0x31DB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DB34u;
            // 0x31db38: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DB3Cu;
label_31db3c:
    // 0x31db3c: 0xc089bfc  jal         func_226FF0
label_31db40:
    if (ctx->pc == 0x31DB40u) {
        ctx->pc = 0x31DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB3Cu;
        // 0x31db40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB44u;
        goto label_31db44;
    }
    ctx->pc = 0x31DB3Cu;
    SET_GPR_U32(ctx, 31, 0x31DB44u);
    ctx->pc = 0x31DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB3Cu;
    // 0x31db40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x31DB3Cu, 0x31DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB44u;
label_31db44:
    // 0x31db44: 0xc0e57ce  jal         func_395F38
label_31db48:
    if (ctx->pc == 0x31DB48u) {
        ctx->pc = 0x31DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB44u;
        // 0x31db48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB4Cu;
        goto label_31db4c;
    }
    ctx->pc = 0x31DB44u;
    SET_GPR_U32(ctx, 31, 0x31DB4Cu);
    ctx->pc = 0x31DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB44u;
    // 0x31db48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x31DB44u, 0x31DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB4Cu;
label_31db4c:
    // 0x31db4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31db4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31db50:
    // 0x31db50: 0xc095fce  jal         func_257F38
label_31db54:
    if (ctx->pc == 0x31DB54u) {
        ctx->pc = 0x31DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB50u;
        // 0x31db54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB58u;
        goto label_31db58;
    }
    ctx->pc = 0x31DB50u;
    SET_GPR_U32(ctx, 31, 0x31DB58u);
    ctx->pc = 0x31DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB50u;
    // 0x31db54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x31DB50u, 0x31DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB58u;
label_31db58:
    // 0x31db58: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
label_31db5c:
    if (ctx->pc == 0x31DB5Cu) {
        ctx->pc = 0x31DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB58u;
        // 0x31db5c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB60u;
        goto label_31db60;
    }
    ctx->pc = 0x31DB58u;
    {
        const bool branch_taken_0x31db58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31db58) {
            ctx->pc = 0x31DB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DB58u;
            // 0x31db5c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DB60u;
label_31db60:
    // 0x31db60: 0xc0e541e  jal         func_395078
label_31db64:
    if (ctx->pc == 0x31DB64u) {
        ctx->pc = 0x31DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB60u;
        // 0x31db64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB68u;
        goto label_31db68;
    }
    ctx->pc = 0x31DB60u;
    SET_GPR_U32(ctx, 31, 0x31DB68u);
    ctx->pc = 0x31DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB60u;
    // 0x31db64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395078u, 0x31DB60u, 0x31DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB68u;
label_31db68:
    // 0x31db68: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_31db6c:
    if (ctx->pc == 0x31DB6Cu) {
        ctx->pc = 0x31DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB68u;
        // 0x31db6c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB70u;
        goto label_31db70;
    }
    ctx->pc = 0x31DB68u;
    {
        const bool branch_taken_0x31db68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31db68) {
            ctx->pc = 0x31DB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DB68u;
            // 0x31db6c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DB70u;
label_31db70:
    // 0x31db70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31db74:
    // 0x31db74: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x31db74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_31db78:
    // 0x31db78: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x31db78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_31db7c:
    // 0x31db7c: 0x60f809  jalr        $v1
label_31db80:
    if (ctx->pc == 0x31DB80u) {
        ctx->pc = 0x31DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB7Cu;
        // 0x31db80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB84u;
        goto label_31db84;
    }
    ctx->pc = 0x31DB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31DB84u);
        ctx->pc = 0x31DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB7Cu;
        // 0x31db80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DB7Cu, 0x31DB84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31DB84u;
label_31db84:
    // 0x31db84: 0x10000017  b           . + 4 + (0x17 << 2)
label_31db88:
    if (ctx->pc == 0x31DB88u) {
        ctx->pc = 0x31DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB84u;
        // 0x31db88: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB8Cu;
        goto label_31db8c;
    }
    ctx->pc = 0x31DB84u;
    {
        const bool branch_taken_0x31db84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB84u;
        // 0x31db88: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db84) {
            ctx->pc = 0x31DBE4u;
            goto label_31dbe4;
        }
    }
    ctx->pc = 0x31DB8Cu;
label_31db8c:
    // 0x31db8c: 0xc0a3630  jal         func_28D8C0
label_31db90:
    if (ctx->pc == 0x31DB90u) {
        ctx->pc = 0x31DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB8Cu;
        // 0x31db90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB94u;
        goto label_31db94;
    }
    ctx->pc = 0x31DB8Cu;
    SET_GPR_U32(ctx, 31, 0x31DB94u);
    ctx->pc = 0x31DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB8Cu;
    // 0x31db90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8C0u, 0x31DB8Cu, 0x31DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB94u;
label_31db94:
    // 0x31db94: 0xc0a3628  jal         func_28D8A0
label_31db98:
    if (ctx->pc == 0x31DB98u) {
        ctx->pc = 0x31DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB94u;
        // 0x31db98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB9Cu;
        goto label_31db9c;
    }
    ctx->pc = 0x31DB94u;
    SET_GPR_U32(ctx, 31, 0x31DB9Cu);
    ctx->pc = 0x31DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DB94u;
    // 0x31db98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D8A0u, 0x31DB94u, 0x31DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DB9Cu;
label_31db9c:
    // 0x31db9c: 0xc0a4e54  jal         func_293950
label_31dba0:
    if (ctx->pc == 0x31DBA0u) {
        ctx->pc = 0x31DBA4u;
        goto label_31dba4;
    }
    ctx->pc = 0x31DB9Cu;
    SET_GPR_U32(ctx, 31, 0x31DBA4u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x31DB9Cu, 0x31DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DBA4u;
label_31dba4:
    // 0x31dba4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31dba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31dba8:
    // 0x31dba8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_31dbac:
    if (ctx->pc == 0x31DBACu) {
        ctx->pc = 0x31DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBA8u;
        // 0x31dbac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DBB0u;
        goto label_31dbb0;
    }
    ctx->pc = 0x31DBA8u;
    {
        const bool branch_taken_0x31dba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBA8u;
        // 0x31dbac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dba8) {
            ctx->pc = 0x31DBCCu;
            goto label_31dbcc;
        }
    }
    ctx->pc = 0x31DBB0u;
label_31dbb0:
    // 0x31dbb0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31dbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_31dbb4:
    // 0x31dbb4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31dbb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31dbb8:
    // 0x31dbb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31dbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31dbbc:
    // 0x31dbbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31dbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31dbc0:
    // 0x31dbc0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31dbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31dbc4:
    // 0x31dbc4: 0xc0b6dda  jal         func_2DB768
label_31dbc8:
    if (ctx->pc == 0x31DBC8u) {
        ctx->pc = 0x31DBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBC4u;
        // 0x31dbc8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DBCCu;
        goto label_31dbcc;
    }
    ctx->pc = 0x31DBC4u;
    SET_GPR_U32(ctx, 31, 0x31DBCCu);
    ctx->pc = 0x31DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DBC4u;
    // 0x31dbc8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB768u, 0x31DBC4u, 0x31DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DBCCu;
label_31dbcc:
    // 0x31dbcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31dbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31dbd0:
    // 0x31dbd0: 0xc0a35d6  jal         func_28D758
label_31dbd4:
    if (ctx->pc == 0x31DBD4u) {
        ctx->pc = 0x31DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBD0u;
        // 0x31dbd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DBD8u;
        goto label_31dbd8;
    }
    ctx->pc = 0x31DBD0u;
    SET_GPR_U32(ctx, 31, 0x31DBD8u);
    ctx->pc = 0x31DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DBD0u;
    // 0x31dbd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x31DBD0u, 0x31DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DBD8u;
label_31dbd8:
    // 0x31dbd8: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x31dbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31dbdc:
    // 0x31dbdc: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x31dbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
label_31dbe0:
    // 0x31dbe0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x31dbe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_31dbe4:
    // 0x31dbe4: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x31dbe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31dbe8:
    // 0x31dbe8: 0x5440ff77  bnel        $v0, $zero, . + 4 + (-0x89 << 2)
label_31dbec:
    if (ctx->pc == 0x31DBECu) {
        ctx->pc = 0x31DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DBE8u;
        // 0x31dbec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DBF0u;
        goto label_31dbf0;
    }
    ctx->pc = 0x31DBE8u;
    {
        const bool branch_taken_0x31dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dbe8) {
            ctx->pc = 0x31DBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DBE8u;
            // 0x31dbec: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31D9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31d9c8;
        }
    }
    ctx->pc = 0x31DBF0u;
label_31dbf0:
    // 0x31dbf0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x31dbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_31dbf4:
    // 0x31dbf4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x31dbf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31dbf8:
    // 0x31dbf8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x31dbf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31dbfc:
    // 0x31dbfc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x31dbfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31dc00:
    // 0x31dc00: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x31dc00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31dc04:
    // 0x31dc04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x31dc04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31dc08:
    // 0x31dc08: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x31dc08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31dc0c:
    // 0x31dc0c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x31dc0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31dc10:
    // 0x31dc10: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x31dc10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31dc14:
    // 0x31dc14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31dc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31dc18:
    // 0x31dc18: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x31dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_31dc1c:
    // 0x31dc1c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x31dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31dc20:
    // 0x31dc20: 0x3e00008  jr          $ra
label_31dc24:
    if (ctx->pc == 0x31DC24u) {
        ctx->pc = 0x31DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC20u;
        // 0x31dc24: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DC28u;
        goto label_fallthrough_0x31dc20;
    }
    ctx->pc = 0x31DC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DC20u;
        // 0x31dc24: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31dc20:
    ctx->pc = 0x31DC28u;
}
