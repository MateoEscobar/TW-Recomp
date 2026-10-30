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

// Function: sub_0026D998
// Address: 0x26d998 - 0x26dd08
void sub_0026D998_0x26d998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D998_0x26d998");
#endif

    switch (ctx->pc) {
        case 0x26d998u: goto label_26d998;
        case 0x26d99cu: goto label_26d99c;
        case 0x26d9a0u: goto label_26d9a0;
        case 0x26d9a4u: goto label_26d9a4;
        case 0x26d9a8u: goto label_26d9a8;
        case 0x26d9acu: goto label_26d9ac;
        case 0x26d9b0u: goto label_26d9b0;
        case 0x26d9b4u: goto label_26d9b4;
        case 0x26d9b8u: goto label_26d9b8;
        case 0x26d9bcu: goto label_26d9bc;
        case 0x26d9c0u: goto label_26d9c0;
        case 0x26d9c4u: goto label_26d9c4;
        case 0x26d9c8u: goto label_26d9c8;
        case 0x26d9ccu: goto label_26d9cc;
        case 0x26d9d0u: goto label_26d9d0;
        case 0x26d9d4u: goto label_26d9d4;
        case 0x26d9d8u: goto label_26d9d8;
        case 0x26d9dcu: goto label_26d9dc;
        case 0x26d9e0u: goto label_26d9e0;
        case 0x26d9e4u: goto label_26d9e4;
        case 0x26d9e8u: goto label_26d9e8;
        case 0x26d9ecu: goto label_26d9ec;
        case 0x26d9f0u: goto label_26d9f0;
        case 0x26d9f4u: goto label_26d9f4;
        case 0x26d9f8u: goto label_26d9f8;
        case 0x26d9fcu: goto label_26d9fc;
        case 0x26da00u: goto label_26da00;
        case 0x26da04u: goto label_26da04;
        case 0x26da08u: goto label_26da08;
        case 0x26da0cu: goto label_26da0c;
        case 0x26da10u: goto label_26da10;
        case 0x26da14u: goto label_26da14;
        case 0x26da18u: goto label_26da18;
        case 0x26da1cu: goto label_26da1c;
        case 0x26da20u: goto label_26da20;
        case 0x26da24u: goto label_26da24;
        case 0x26da28u: goto label_26da28;
        case 0x26da2cu: goto label_26da2c;
        case 0x26da30u: goto label_26da30;
        case 0x26da34u: goto label_26da34;
        case 0x26da38u: goto label_26da38;
        case 0x26da3cu: goto label_26da3c;
        case 0x26da40u: goto label_26da40;
        case 0x26da44u: goto label_26da44;
        case 0x26da48u: goto label_26da48;
        case 0x26da4cu: goto label_26da4c;
        case 0x26da50u: goto label_26da50;
        case 0x26da54u: goto label_26da54;
        case 0x26da58u: goto label_26da58;
        case 0x26da5cu: goto label_26da5c;
        case 0x26da60u: goto label_26da60;
        case 0x26da64u: goto label_26da64;
        case 0x26da68u: goto label_26da68;
        case 0x26da6cu: goto label_26da6c;
        case 0x26da70u: goto label_26da70;
        case 0x26da74u: goto label_26da74;
        case 0x26da78u: goto label_26da78;
        case 0x26da7cu: goto label_26da7c;
        case 0x26da80u: goto label_26da80;
        case 0x26da84u: goto label_26da84;
        case 0x26da88u: goto label_26da88;
        case 0x26da8cu: goto label_26da8c;
        case 0x26da90u: goto label_26da90;
        case 0x26da94u: goto label_26da94;
        case 0x26da98u: goto label_26da98;
        case 0x26da9cu: goto label_26da9c;
        case 0x26daa0u: goto label_26daa0;
        case 0x26daa4u: goto label_26daa4;
        case 0x26daa8u: goto label_26daa8;
        case 0x26daacu: goto label_26daac;
        case 0x26dab0u: goto label_26dab0;
        case 0x26dab4u: goto label_26dab4;
        case 0x26dab8u: goto label_26dab8;
        case 0x26dabcu: goto label_26dabc;
        case 0x26dac0u: goto label_26dac0;
        case 0x26dac4u: goto label_26dac4;
        case 0x26dac8u: goto label_26dac8;
        case 0x26daccu: goto label_26dacc;
        case 0x26dad0u: goto label_26dad0;
        case 0x26dad4u: goto label_26dad4;
        case 0x26dad8u: goto label_26dad8;
        case 0x26dadcu: goto label_26dadc;
        case 0x26dae0u: goto label_26dae0;
        case 0x26dae4u: goto label_26dae4;
        case 0x26dae8u: goto label_26dae8;
        case 0x26daecu: goto label_26daec;
        case 0x26daf0u: goto label_26daf0;
        case 0x26daf4u: goto label_26daf4;
        case 0x26daf8u: goto label_26daf8;
        case 0x26dafcu: goto label_26dafc;
        case 0x26db00u: goto label_26db00;
        case 0x26db04u: goto label_26db04;
        case 0x26db08u: goto label_26db08;
        case 0x26db0cu: goto label_26db0c;
        case 0x26db10u: goto label_26db10;
        case 0x26db14u: goto label_26db14;
        case 0x26db18u: goto label_26db18;
        case 0x26db1cu: goto label_26db1c;
        case 0x26db20u: goto label_26db20;
        case 0x26db24u: goto label_26db24;
        case 0x26db28u: goto label_26db28;
        case 0x26db2cu: goto label_26db2c;
        case 0x26db30u: goto label_26db30;
        case 0x26db34u: goto label_26db34;
        case 0x26db38u: goto label_26db38;
        case 0x26db3cu: goto label_26db3c;
        case 0x26db40u: goto label_26db40;
        case 0x26db44u: goto label_26db44;
        case 0x26db48u: goto label_26db48;
        case 0x26db4cu: goto label_26db4c;
        case 0x26db50u: goto label_26db50;
        case 0x26db54u: goto label_26db54;
        case 0x26db58u: goto label_26db58;
        case 0x26db5cu: goto label_26db5c;
        case 0x26db60u: goto label_26db60;
        case 0x26db64u: goto label_26db64;
        case 0x26db68u: goto label_26db68;
        case 0x26db6cu: goto label_26db6c;
        case 0x26db70u: goto label_26db70;
        case 0x26db74u: goto label_26db74;
        case 0x26db78u: goto label_26db78;
        case 0x26db7cu: goto label_26db7c;
        case 0x26db80u: goto label_26db80;
        case 0x26db84u: goto label_26db84;
        case 0x26db88u: goto label_26db88;
        case 0x26db8cu: goto label_26db8c;
        case 0x26db90u: goto label_26db90;
        case 0x26db94u: goto label_26db94;
        case 0x26db98u: goto label_26db98;
        case 0x26db9cu: goto label_26db9c;
        case 0x26dba0u: goto label_26dba0;
        case 0x26dba4u: goto label_26dba4;
        case 0x26dba8u: goto label_26dba8;
        case 0x26dbacu: goto label_26dbac;
        case 0x26dbb0u: goto label_26dbb0;
        case 0x26dbb4u: goto label_26dbb4;
        case 0x26dbb8u: goto label_26dbb8;
        case 0x26dbbcu: goto label_26dbbc;
        case 0x26dbc0u: goto label_26dbc0;
        case 0x26dbc4u: goto label_26dbc4;
        case 0x26dbc8u: goto label_26dbc8;
        case 0x26dbccu: goto label_26dbcc;
        case 0x26dbd0u: goto label_26dbd0;
        case 0x26dbd4u: goto label_26dbd4;
        case 0x26dbd8u: goto label_26dbd8;
        case 0x26dbdcu: goto label_26dbdc;
        case 0x26dbe0u: goto label_26dbe0;
        case 0x26dbe4u: goto label_26dbe4;
        case 0x26dbe8u: goto label_26dbe8;
        case 0x26dbecu: goto label_26dbec;
        case 0x26dbf0u: goto label_26dbf0;
        case 0x26dbf4u: goto label_26dbf4;
        case 0x26dbf8u: goto label_26dbf8;
        case 0x26dbfcu: goto label_26dbfc;
        case 0x26dc00u: goto label_26dc00;
        case 0x26dc04u: goto label_26dc04;
        case 0x26dc08u: goto label_26dc08;
        case 0x26dc0cu: goto label_26dc0c;
        case 0x26dc10u: goto label_26dc10;
        case 0x26dc14u: goto label_26dc14;
        case 0x26dc18u: goto label_26dc18;
        case 0x26dc1cu: goto label_26dc1c;
        case 0x26dc20u: goto label_26dc20;
        case 0x26dc24u: goto label_26dc24;
        case 0x26dc28u: goto label_26dc28;
        case 0x26dc2cu: goto label_26dc2c;
        case 0x26dc30u: goto label_26dc30;
        case 0x26dc34u: goto label_26dc34;
        case 0x26dc38u: goto label_26dc38;
        case 0x26dc3cu: goto label_26dc3c;
        case 0x26dc40u: goto label_26dc40;
        case 0x26dc44u: goto label_26dc44;
        case 0x26dc48u: goto label_26dc48;
        case 0x26dc4cu: goto label_26dc4c;
        case 0x26dc50u: goto label_26dc50;
        case 0x26dc54u: goto label_26dc54;
        case 0x26dc58u: goto label_26dc58;
        case 0x26dc5cu: goto label_26dc5c;
        case 0x26dc60u: goto label_26dc60;
        case 0x26dc64u: goto label_26dc64;
        case 0x26dc68u: goto label_26dc68;
        case 0x26dc6cu: goto label_26dc6c;
        case 0x26dc70u: goto label_26dc70;
        case 0x26dc74u: goto label_26dc74;
        case 0x26dc78u: goto label_26dc78;
        case 0x26dc7cu: goto label_26dc7c;
        case 0x26dc80u: goto label_26dc80;
        case 0x26dc84u: goto label_26dc84;
        case 0x26dc88u: goto label_26dc88;
        case 0x26dc8cu: goto label_26dc8c;
        case 0x26dc90u: goto label_26dc90;
        case 0x26dc94u: goto label_26dc94;
        case 0x26dc98u: goto label_26dc98;
        case 0x26dc9cu: goto label_26dc9c;
        case 0x26dca0u: goto label_26dca0;
        case 0x26dca4u: goto label_26dca4;
        case 0x26dca8u: goto label_26dca8;
        case 0x26dcacu: goto label_26dcac;
        case 0x26dcb0u: goto label_26dcb0;
        case 0x26dcb4u: goto label_26dcb4;
        case 0x26dcb8u: goto label_26dcb8;
        case 0x26dcbcu: goto label_26dcbc;
        case 0x26dcc0u: goto label_26dcc0;
        case 0x26dcc4u: goto label_26dcc4;
        case 0x26dcc8u: goto label_26dcc8;
        case 0x26dcccu: goto label_26dccc;
        case 0x26dcd0u: goto label_26dcd0;
        case 0x26dcd4u: goto label_26dcd4;
        case 0x26dcd8u: goto label_26dcd8;
        case 0x26dcdcu: goto label_26dcdc;
        case 0x26dce0u: goto label_26dce0;
        case 0x26dce4u: goto label_26dce4;
        case 0x26dce8u: goto label_26dce8;
        case 0x26dcecu: goto label_26dcec;
        case 0x26dcf0u: goto label_26dcf0;
        case 0x26dcf4u: goto label_26dcf4;
        case 0x26dcf8u: goto label_26dcf8;
        case 0x26dcfcu: goto label_26dcfc;
        case 0x26dd00u: goto label_26dd00;
        case 0x26dd04u: goto label_26dd04;
        default: break;
    }

    ctx->pc = 0x26d998u;

label_26d998:
    // 0x26d998: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x26d998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_26d99c:
    // 0x26d99c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26d99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_26d9a0:
    // 0x26d9a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26d9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26d9a4:
    // 0x26d9a4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x26d9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_26d9a8:
    // 0x26d9a8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x26d9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_26d9ac:
    // 0x26d9ac: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x26d9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_26d9b0:
    // 0x26d9b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26d9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_26d9b4:
    // 0x26d9b4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x26d9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_26d9b8:
    // 0x26d9b8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x26d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_26d9bc:
    // 0x26d9bc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x26d9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_26d9c0:
    // 0x26d9c0: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x26d9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_26d9c4:
    // 0x26d9c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26d9c8:
    // 0x26d9c8: 0xc0e409a  jal         func_390268
label_26d9cc:
    if (ctx->pc == 0x26D9CCu) {
        ctx->pc = 0x26D9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9C8u;
        // 0x26d9cc: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9D0u;
        goto label_26d9d0;
    }
    ctx->pc = 0x26D9C8u;
    SET_GPR_U32(ctx, 31, 0x26D9D0u);
    ctx->pc = 0x26D9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9C8u;
    // 0x26d9cc: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26D9C8u, 0x26D9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9D0u;
label_26d9d0:
    // 0x26d9d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26d9d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d9d4:
    // 0x26d9d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d9d8:
    // 0x26d9d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26d9dc:
    // 0x26d9dc: 0x8e3500d8  lw          $s5, 0xD8($s1)
    ctx->pc = 0x26d9dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26d9e0:
    // 0x26d9e0: 0xc094f9a  jal         func_253E68
label_26d9e4:
    if (ctx->pc == 0x26D9E4u) {
        ctx->pc = 0x26D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9E0u;
        // 0x26d9e4: 0x8e7700d8  lw          $s7, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9E8u;
        goto label_26d9e8;
    }
    ctx->pc = 0x26D9E0u;
    SET_GPR_U32(ctx, 31, 0x26D9E8u);
    ctx->pc = 0x26D9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9E0u;
    // 0x26d9e4: 0x8e7700d8  lw          $s7, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x26D9E0u, 0x26D9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9E8u;
label_26d9e8:
    // 0x26d9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d9ec:
    // 0x26d9ec: 0xc089988  jal         func_226620
label_26d9f0:
    if (ctx->pc == 0x26D9F0u) {
        ctx->pc = 0x26D9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9ECu;
        // 0x26d9f0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9F4u;
        goto label_26d9f4;
    }
    ctx->pc = 0x26D9ECu;
    SET_GPR_U32(ctx, 31, 0x26D9F4u);
    ctx->pc = 0x26D9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9ECu;
    // 0x26d9f0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x26D9ECu, 0x26D9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9F4u;
label_26d9f4:
    // 0x26d9f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26d9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d9f8:
    // 0x26d9f8: 0xc089974  jal         func_2265D0
label_26d9fc:
    if (ctx->pc == 0x26D9FCu) {
        ctx->pc = 0x26D9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9F8u;
        // 0x26d9fc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA00u;
        goto label_26da00;
    }
    ctx->pc = 0x26D9F8u;
    SET_GPR_U32(ctx, 31, 0x26DA00u);
    ctx->pc = 0x26D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9F8u;
    // 0x26d9fc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x26D9F8u, 0x26DA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA00u;
label_26da00:
    // 0x26da00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26da00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26da04:
    // 0x26da04: 0xc094f9a  jal         func_253E68
label_26da08:
    if (ctx->pc == 0x26DA08u) {
        ctx->pc = 0x26DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA04u;
        // 0x26da08: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA0Cu;
        goto label_26da0c;
    }
    ctx->pc = 0x26DA04u;
    SET_GPR_U32(ctx, 31, 0x26DA0Cu);
    ctx->pc = 0x26DA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA04u;
    // 0x26da08: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E68u, 0x26DA04u, 0x26DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA0Cu;
label_26da0c:
    // 0x26da0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26da0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26da10:
    // 0x26da10: 0xc089988  jal         func_226620
label_26da14:
    if (ctx->pc == 0x26DA14u) {
        ctx->pc = 0x26DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA10u;
        // 0x26da14: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA18u;
        goto label_26da18;
    }
    ctx->pc = 0x26DA10u;
    SET_GPR_U32(ctx, 31, 0x26DA18u);
    ctx->pc = 0x26DA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA10u;
    // 0x26da14: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x26DA10u, 0x26DA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA18u;
label_26da18:
    // 0x26da18: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x26da18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26da1c:
    // 0x26da1c: 0xc089974  jal         func_2265D0
label_26da20:
    if (ctx->pc == 0x26DA20u) {
        ctx->pc = 0x26DA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA1Cu;
        // 0x26da20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA24u;
        goto label_26da24;
    }
    ctx->pc = 0x26DA1Cu;
    SET_GPR_U32(ctx, 31, 0x26DA24u);
    ctx->pc = 0x26DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA1Cu;
    // 0x26da20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x26DA1Cu, 0x26DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA24u;
label_26da24:
    // 0x26da24: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x26da24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_26da28:
    // 0x26da28: 0x2456e160  addiu       $s6, $v0, -0x1EA0
    ctx->pc = 0x26da28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959456));
label_26da2c:
    // 0x26da2c: 0xc041532  jal         func_1054C8
label_26da30:
    if (ctx->pc == 0x26DA30u) {
        ctx->pc = 0x26DA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA2Cu;
        // 0x26da30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA34u;
        goto label_26da34;
    }
    ctx->pc = 0x26DA2Cu;
    SET_GPR_U32(ctx, 31, 0x26DA34u);
    ctx->pc = 0x26DA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA2Cu;
    // 0x26da30: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26DA2Cu, 0x26DA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA34u;
label_26da34:
    // 0x26da34: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26da34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26da38:
    // 0x26da38: 0xc041532  jal         func_1054C8
label_26da3c:
    if (ctx->pc == 0x26DA3Cu) {
        ctx->pc = 0x26DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA38u;
        // 0x26da3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA40u;
        goto label_26da40;
    }
    ctx->pc = 0x26DA38u;
    SET_GPR_U32(ctx, 31, 0x26DA40u);
    ctx->pc = 0x26DA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA38u;
    // 0x26da3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26DA38u, 0x26DA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA40u;
label_26da40:
    // 0x26da40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26da40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26da44:
    // 0x26da44: 0xc041532  jal         func_1054C8
label_26da48:
    if (ctx->pc == 0x26DA48u) {
        ctx->pc = 0x26DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA44u;
        // 0x26da48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA4Cu;
        goto label_26da4c;
    }
    ctx->pc = 0x26DA44u;
    SET_GPR_U32(ctx, 31, 0x26DA4Cu);
    ctx->pc = 0x26DA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA44u;
    // 0x26da48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26DA44u, 0x26DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA4Cu;
label_26da4c:
    // 0x26da4c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_26da50:
    if (ctx->pc == 0x26DA50u) {
        ctx->pc = 0x26DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA4Cu;
        // 0x26da50: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA54u;
        goto label_26da54;
    }
    ctx->pc = 0x26DA4Cu;
    {
        const bool branch_taken_0x26da4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA4Cu;
        // 0x26da50: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da4c) {
            ctx->pc = 0x26DA8Cu;
            goto label_26da8c;
        }
    }
    ctx->pc = 0x26DA54u;
label_26da54:
    // 0x26da54: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26da54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26da58:
    // 0x26da58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26da58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26da5c:
    // 0x26da5c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26da5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26da60:
    // 0x26da60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26da60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26da64:
    // 0x26da64: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26da64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26da68:
    // 0x26da68: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26da68u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26da6c:
    // 0x26da6c: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26da6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26da70:
    // 0x26da70: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26da70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26da74:
    // 0x26da74: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26da74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26da78:
    // 0x26da78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26da78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26da7c:
    // 0x26da7c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26da7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26da80:
    // 0x26da80: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26da80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26da84:
    // 0x26da84: 0xc041bd4  jal         func_106F50
label_26da88:
    if (ctx->pc == 0x26DA88u) {
        ctx->pc = 0x26DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA84u;
        // 0x26da88: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA8Cu;
        goto label_26da8c;
    }
    ctx->pc = 0x26DA84u;
    SET_GPR_U32(ctx, 31, 0x26DA8Cu);
    ctx->pc = 0x26DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA84u;
    // 0x26da88: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26DA84u, 0x26DA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA8Cu;
label_26da8c:
    // 0x26da8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26da90:
    // 0x26da90: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26da90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26da94:
    // 0x26da94: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x26da94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26da98:
    // 0x26da98: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26da98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26da9c:
    // 0x26da9c: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26daa0:
    // 0x26daa0: 0x60f809  jalr        $v1
label_26daa4:
    if (ctx->pc == 0x26DAA4u) {
        ctx->pc = 0x26DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAA0u;
        // 0x26daa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DAA8u;
        goto label_26daa8;
    }
    ctx->pc = 0x26DAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26DAA8u);
        ctx->pc = 0x26DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAA0u;
        // 0x26daa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DAA0u, 0x26DAA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26DAA8u;
label_26daa8:
    // 0x26daa8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x26daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26daac:
    // 0x26daac: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_26dab0:
    if (ctx->pc == 0x26DAB0u) {
        ctx->pc = 0x26DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAACu;
        // 0x26dab0: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DAB4u;
        goto label_26dab4;
    }
    ctx->pc = 0x26DAACu;
    {
        const bool branch_taken_0x26daac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAACu;
        // 0x26dab0: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26daac) {
            ctx->pc = 0x26DAF0u;
            goto label_26daf0;
        }
    }
    ctx->pc = 0x26DAB4u;
label_26dab4:
    // 0x26dab4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26dab8:
    // 0x26dab8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26dab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26dabc:
    // 0x26dabc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26dac0:
    // 0x26dac0: 0x40f809  jalr        $v0
label_26dac4:
    if (ctx->pc == 0x26DAC4u) {
        ctx->pc = 0x26DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAC0u;
        // 0x26dac4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DAC8u;
        goto label_26dac8;
    }
    ctx->pc = 0x26DAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26DAC8u);
        ctx->pc = 0x26DAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAC0u;
        // 0x26dac4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DAC0u, 0x26DAC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26DAC8u;
label_26dac8:
    // 0x26dac8: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26dac8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26dacc:
    // 0x26dacc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26daccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26dad0:
    // 0x26dad0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26dad0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26dad4:
    // 0x26dad4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26dad4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26dad8:
    // 0x26dad8: 0x254ad8c8  addiu       $t2, $t2, -0x2738
    ctx->pc = 0x26dad8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957256));
label_26dadc:
    // 0x26dadc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26dadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26dae0:
    // 0x26dae0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26dae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26dae4:
    // 0x26dae4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x26dae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_26dae8:
    // 0x26dae8: 0xc041664  jal         func_105990
label_26daec:
    if (ctx->pc == 0x26DAECu) {
        ctx->pc = 0x26DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAE8u;
        // 0x26daec: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DAF0u;
        goto label_26daf0;
    }
    ctx->pc = 0x26DAE8u;
    SET_GPR_U32(ctx, 31, 0x26DAF0u);
    ctx->pc = 0x26DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DAE8u;
    // 0x26daec: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26DAE8u, 0x26DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DAF0u;
label_26daf0:
    // 0x26daf0: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_26daf4:
    if (ctx->pc == 0x26DAF4u) {
        ctx->pc = 0x26DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAF0u;
        // 0x26daf4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DAF8u;
        goto label_26daf8;
    }
    ctx->pc = 0x26DAF0u;
    {
        const bool branch_taken_0x26daf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DAF0u;
        // 0x26daf4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26daf0) {
            ctx->pc = 0x26DB18u;
            goto label_26db18;
        }
    }
    ctx->pc = 0x26DAF8u;
label_26daf8:
    // 0x26daf8: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26daf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26dafc:
    // 0x26dafc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26dafcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26db00:
    // 0x26db00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26db00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26db04:
    // 0x26db04: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26db04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26db08:
    // 0x26db08: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26db08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26db0c:
    // 0x26db0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26db0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26db10:
    // 0x26db10: 0xc041b20  jal         func_106C80
label_26db14:
    if (ctx->pc == 0x26DB14u) {
        ctx->pc = 0x26DB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB10u;
        // 0x26db14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB18u;
        goto label_26db18;
    }
    ctx->pc = 0x26DB10u;
    SET_GPR_U32(ctx, 31, 0x26DB18u);
    ctx->pc = 0x26DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB10u;
    // 0x26db14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26DB10u, 0x26DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB18u;
label_26db18:
    // 0x26db18: 0xc05d484  jal         func_175210
label_26db1c:
    if (ctx->pc == 0x26DB1Cu) {
        ctx->pc = 0x26DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB18u;
        // 0x26db1c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB20u;
        goto label_26db20;
    }
    ctx->pc = 0x26DB18u;
    SET_GPR_U32(ctx, 31, 0x26DB20u);
    ctx->pc = 0x26DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB18u;
    // 0x26db1c: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26DB18u, 0x26DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB20u;
label_26db20:
    // 0x26db20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26db24:
    // 0x26db24: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26db24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26db28:
    // 0x26db28: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26db28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26db2c:
    // 0x26db2c: 0xa0f809  jalr        $a1
label_26db30:
    if (ctx->pc == 0x26DB30u) {
        ctx->pc = 0x26DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB2Cu;
        // 0x26db30: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB34u;
        goto label_26db34;
    }
    ctx->pc = 0x26DB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26DB34u);
        ctx->pc = 0x26DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB2Cu;
        // 0x26db30: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DB2Cu, 0x26DB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26DB34u;
label_26db34:
    // 0x26db34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26db34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26db38:
    // 0x26db38: 0xc087016  jal         func_21C058
label_26db3c:
    if (ctx->pc == 0x26DB3Cu) {
        ctx->pc = 0x26DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB38u;
        // 0x26db3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB40u;
        goto label_26db40;
    }
    ctx->pc = 0x26DB38u;
    SET_GPR_U32(ctx, 31, 0x26DB40u);
    ctx->pc = 0x26DB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB38u;
    // 0x26db3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26DB38u, 0x26DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB40u;
label_26db40:
    // 0x26db40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26db40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26db44:
    // 0x26db44: 0xc05d53a  jal         func_1754E8
label_26db48:
    if (ctx->pc == 0x26DB48u) {
        ctx->pc = 0x26DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB44u;
        // 0x26db48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB4Cu;
        goto label_26db4c;
    }
    ctx->pc = 0x26DB44u;
    SET_GPR_U32(ctx, 31, 0x26DB4Cu);
    ctx->pc = 0x26DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB44u;
    // 0x26db48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26DB44u, 0x26DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB4Cu;
label_26db4c:
    // 0x26db4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26db4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26db50:
    // 0x26db50: 0xc05d4f6  jal         func_1753D8
label_26db54:
    if (ctx->pc == 0x26DB54u) {
        ctx->pc = 0x26DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB50u;
        // 0x26db54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB58u;
        goto label_26db58;
    }
    ctx->pc = 0x26DB50u;
    SET_GPR_U32(ctx, 31, 0x26DB58u);
    ctx->pc = 0x26DB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB50u;
    // 0x26db54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26DB50u, 0x26DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB58u;
label_26db58:
    // 0x26db58: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x26db58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26db5c:
    // 0x26db5c: 0xc089990  jal         func_226640
label_26db60:
    if (ctx->pc == 0x26DB60u) {
        ctx->pc = 0x26DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB5Cu;
        // 0x26db60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB64u;
        goto label_26db64;
    }
    ctx->pc = 0x26DB5Cu;
    SET_GPR_U32(ctx, 31, 0x26DB64u);
    ctx->pc = 0x26DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB5Cu;
    // 0x26db60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26DB5Cu, 0x26DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB64u;
label_26db64:
    // 0x26db64: 0xc041532  jal         func_1054C8
label_26db68:
    if (ctx->pc == 0x26DB68u) {
        ctx->pc = 0x26DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB64u;
        // 0x26db68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB6Cu;
        goto label_26db6c;
    }
    ctx->pc = 0x26DB64u;
    SET_GPR_U32(ctx, 31, 0x26DB6Cu);
    ctx->pc = 0x26DB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB64u;
    // 0x26db68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26DB64u, 0x26DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB6Cu;
label_26db6c:
    // 0x26db6c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26db6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26db70:
    // 0x26db70: 0xc041532  jal         func_1054C8
label_26db74:
    if (ctx->pc == 0x26DB74u) {
        ctx->pc = 0x26DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB70u;
        // 0x26db74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB78u;
        goto label_26db78;
    }
    ctx->pc = 0x26DB70u;
    SET_GPR_U32(ctx, 31, 0x26DB78u);
    ctx->pc = 0x26DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB70u;
    // 0x26db74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26DB70u, 0x26DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB78u;
label_26db78:
    // 0x26db78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26db78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26db7c:
    // 0x26db7c: 0xc041532  jal         func_1054C8
label_26db80:
    if (ctx->pc == 0x26DB80u) {
        ctx->pc = 0x26DB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB7Cu;
        // 0x26db80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB84u;
        goto label_26db84;
    }
    ctx->pc = 0x26DB7Cu;
    SET_GPR_U32(ctx, 31, 0x26DB84u);
    ctx->pc = 0x26DB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB7Cu;
    // 0x26db80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26DB7Cu, 0x26DB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DB84u;
label_26db84:
    // 0x26db84: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_26db88:
    if (ctx->pc == 0x26DB88u) {
        ctx->pc = 0x26DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB84u;
        // 0x26db88: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DB8Cu;
        goto label_26db8c;
    }
    ctx->pc = 0x26DB84u;
    {
        const bool branch_taken_0x26db84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB84u;
        // 0x26db88: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db84) {
            ctx->pc = 0x26DBC4u;
            goto label_26dbc4;
        }
    }
    ctx->pc = 0x26DB8Cu;
label_26db8c:
    // 0x26db8c: 0x8e6300d4  lw          $v1, 0xD4($s3)
    ctx->pc = 0x26db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26db90:
    // 0x26db90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26db90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_26db94:
    // 0x26db94: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x26db94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26db98:
    // 0x26db98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26db98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26db9c:
    // 0x26db9c: 0x8c670038  lw          $a3, 0x38($v1)
    ctx->pc = 0x26db9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26dba0:
    // 0x26dba0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26dba0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26dba4:
    // 0x26dba4: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26dba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26dba8:
    // 0x26dba8: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x26dba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_26dbac:
    // 0x26dbac: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x26dbacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_26dbb0:
    // 0x26dbb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26dbb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26dbb4:
    // 0x26dbb4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x26dbb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_26dbb8:
    // 0x26dbb8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x26dbb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_26dbbc:
    // 0x26dbbc: 0xc041bd4  jal         func_106F50
label_26dbc0:
    if (ctx->pc == 0x26DBC0u) {
        ctx->pc = 0x26DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBBCu;
        // 0x26dbc0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DBC4u;
        goto label_26dbc4;
    }
    ctx->pc = 0x26DBBCu;
    SET_GPR_U32(ctx, 31, 0x26DBC4u);
    ctx->pc = 0x26DBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DBBCu;
    // 0x26dbc0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F50u, 0x26DBBCu, 0x26DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DBC4u;
label_26dbc4:
    // 0x26dbc4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26dbc8:
    // 0x26dbc8: 0x240500c1  addiu       $a1, $zero, 0xC1
    ctx->pc = 0x26dbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
label_26dbcc:
    // 0x26dbcc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x26dbccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_26dbd0:
    // 0x26dbd0: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x26dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_26dbd4:
    // 0x26dbd4: 0x60f809  jalr        $v1
label_26dbd8:
    if (ctx->pc == 0x26DBD8u) {
        ctx->pc = 0x26DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBD4u;
        // 0x26dbd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DBDCu;
        goto label_26dbdc;
    }
    ctx->pc = 0x26DBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26DBDCu);
        ctx->pc = 0x26DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBD4u;
        // 0x26dbd8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DBD4u, 0x26DBDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26DBDCu;
label_26dbdc:
    // 0x26dbdc: 0x8e6200d4  lw          $v0, 0xD4($s3)
    ctx->pc = 0x26dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 212)));
label_26dbe0:
    // 0x26dbe0: 0x12800016  beqz        $s4, . + 4 + (0x16 << 2)
label_26dbe4:
    if (ctx->pc == 0x26DBE4u) {
        ctx->pc = 0x26DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBE0u;
        // 0x26dbe4: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DBE8u;
        goto label_26dbe8;
    }
    ctx->pc = 0x26DBE0u;
    {
        const bool branch_taken_0x26dbe0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBE0u;
        // 0x26dbe4: 0xac5e0018  sw          $fp, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbe0) {
            ctx->pc = 0x26DC3Cu;
            goto label_26dc3c;
        }
    }
    ctx->pc = 0x26DBE8u;
label_26dbe8:
    // 0x26dbe8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26dbec:
    // 0x26dbec: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26dbecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26dbf0:
    // 0x26dbf0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26dbf4:
    // 0x26dbf4: 0x40f809  jalr        $v0
label_26dbf8:
    if (ctx->pc == 0x26DBF8u) {
        ctx->pc = 0x26DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBF4u;
        // 0x26dbf8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DBFCu;
        goto label_26dbfc;
    }
    ctx->pc = 0x26DBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26DBFCu);
        ctx->pc = 0x26DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBF4u;
        // 0x26dbf8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DBF4u, 0x26DBFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26DBFCu;
label_26dbfc:
    // 0x26dbfc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x26dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_26dc00:
    // 0x26dc00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26dc00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26dc04:
    // 0x26dc04: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26dc04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26dc08:
    // 0x26dc08: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26dc0c:
    // 0x26dc0c: 0x40f809  jalr        $v0
label_26dc10:
    if (ctx->pc == 0x26DC10u) {
        ctx->pc = 0x26DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC0Cu;
        // 0x26dc10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC14u;
        goto label_26dc14;
    }
    ctx->pc = 0x26DC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26DC14u);
        ctx->pc = 0x26DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC0Cu;
        // 0x26dc10: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DC0Cu, 0x26DC14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26DC14u;
label_26dc14:
    // 0x26dc14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26dc14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26dc18:
    // 0x26dc18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26dc18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26dc1c:
    // 0x26dc1c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x26dc1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26dc20:
    // 0x26dc20: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26dc20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26dc24:
    // 0x26dc24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26dc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26dc28:
    // 0x26dc28: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26dc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26dc2c:
    // 0x26dc2c: 0x24070051  addiu       $a3, $zero, 0x51
    ctx->pc = 0x26dc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_26dc30:
    // 0x26dc30: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x26dc30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26dc34:
    // 0x26dc34: 0xc04229e  jal         func_108A78
label_26dc38:
    if (ctx->pc == 0x26DC38u) {
        ctx->pc = 0x26DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC34u;
        // 0x26dc38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC3Cu;
        goto label_26dc3c;
    }
    ctx->pc = 0x26DC34u;
    SET_GPR_U32(ctx, 31, 0x26DC3Cu);
    ctx->pc = 0x26DC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC34u;
    // 0x26dc38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26DC34u, 0x26DC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC3Cu;
label_26dc3c:
    // 0x26dc3c: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26dc40:
    if (ctx->pc == 0x26DC40u) {
        ctx->pc = 0x26DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC3Cu;
        // 0x26dc40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC44u;
        goto label_26dc44;
    }
    ctx->pc = 0x26DC3Cu;
    {
        const bool branch_taken_0x26dc3c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC3Cu;
        // 0x26dc40: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc3c) {
            ctx->pc = 0x26DC64u;
            goto label_26dc64;
        }
    }
    ctx->pc = 0x26DC44u;
label_26dc44:
    // 0x26dc44: 0x8e6500d8  lw          $a1, 0xD8($s3)
    ctx->pc = 0x26dc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_26dc48:
    // 0x26dc48: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26dc48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26dc4c:
    // 0x26dc4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26dc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26dc50:
    // 0x26dc50: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x26dc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_26dc54:
    // 0x26dc54: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x26dc54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_26dc58:
    // 0x26dc58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26dc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26dc5c:
    // 0x26dc5c: 0xc041b20  jal         func_106C80
label_26dc60:
    if (ctx->pc == 0x26DC60u) {
        ctx->pc = 0x26DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC5Cu;
        // 0x26dc60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC64u;
        goto label_26dc64;
    }
    ctx->pc = 0x26DC5Cu;
    SET_GPR_U32(ctx, 31, 0x26DC64u);
    ctx->pc = 0x26DC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC5Cu;
    // 0x26dc60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26DC5Cu, 0x26DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC64u;
label_26dc64:
    // 0x26dc64: 0xc05d484  jal         func_175210
label_26dc68:
    if (ctx->pc == 0x26DC68u) {
        ctx->pc = 0x26DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC64u;
        // 0x26dc68: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC6Cu;
        goto label_26dc6c;
    }
    ctx->pc = 0x26DC64u;
    SET_GPR_U32(ctx, 31, 0x26DC6Cu);
    ctx->pc = 0x26DC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC64u;
    // 0x26dc68: 0x8e6400d8  lw          $a0, 0xD8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26DC64u, 0x26DC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC6Cu;
label_26dc6c:
    // 0x26dc6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26dc70:
    // 0x26dc70: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26dc70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26dc74:
    // 0x26dc74: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26dc78:
    // 0x26dc78: 0xa0f809  jalr        $a1
label_26dc7c:
    if (ctx->pc == 0x26DC7Cu) {
        ctx->pc = 0x26DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC78u;
        // 0x26dc7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC80u;
        goto label_26dc80;
    }
    ctx->pc = 0x26DC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26DC80u);
        ctx->pc = 0x26DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC78u;
        // 0x26dc7c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DC78u, 0x26DC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26DC80u;
label_26dc80:
    // 0x26dc80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26dc84:
    // 0x26dc84: 0xc087016  jal         func_21C058
label_26dc88:
    if (ctx->pc == 0x26DC88u) {
        ctx->pc = 0x26DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC84u;
        // 0x26dc88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC8Cu;
        goto label_26dc8c;
    }
    ctx->pc = 0x26DC84u;
    SET_GPR_U32(ctx, 31, 0x26DC8Cu);
    ctx->pc = 0x26DC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC84u;
    // 0x26dc88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26DC84u, 0x26DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC8Cu;
label_26dc8c:
    // 0x26dc8c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26dc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26dc90:
    // 0x26dc90: 0xc05d53a  jal         func_1754E8
label_26dc94:
    if (ctx->pc == 0x26DC94u) {
        ctx->pc = 0x26DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC90u;
        // 0x26dc94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DC98u;
        goto label_26dc98;
    }
    ctx->pc = 0x26DC90u;
    SET_GPR_U32(ctx, 31, 0x26DC98u);
    ctx->pc = 0x26DC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC90u;
    // 0x26dc94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26DC90u, 0x26DC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DC98u;
label_26dc98:
    // 0x26dc98: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26dc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26dc9c:
    // 0x26dc9c: 0xc05d4f6  jal         func_1753D8
label_26dca0:
    if (ctx->pc == 0x26DCA0u) {
        ctx->pc = 0x26DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC9Cu;
        // 0x26dca0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DCA4u;
        goto label_26dca4;
    }
    ctx->pc = 0x26DC9Cu;
    SET_GPR_U32(ctx, 31, 0x26DCA4u);
    ctx->pc = 0x26DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC9Cu;
    // 0x26dca0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26DC9Cu, 0x26DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCA4u;
label_26dca4:
    // 0x26dca4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26dca8:
    // 0x26dca8: 0xc089990  jal         func_226640
label_26dcac:
    if (ctx->pc == 0x26DCACu) {
        ctx->pc = 0x26DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCA8u;
        // 0x26dcac: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DCB0u;
        goto label_26dcb0;
    }
    ctx->pc = 0x26DCA8u;
    SET_GPR_U32(ctx, 31, 0x26DCB0u);
    ctx->pc = 0x26DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DCA8u;
    // 0x26dcac: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26DCA8u, 0x26DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCB0u;
label_26dcb0:
    // 0x26dcb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26dcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26dcb4:
    // 0x26dcb4: 0xc0a0152  jal         func_280548
label_26dcb8:
    if (ctx->pc == 0x26DCB8u) {
        ctx->pc = 0x26DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCB4u;
        // 0x26dcb8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DCBCu;
        goto label_26dcbc;
    }
    ctx->pc = 0x26DCB4u;
    SET_GPR_U32(ctx, 31, 0x26DCBCu);
    ctx->pc = 0x26DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DCB4u;
    // 0x26dcb8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x26DCB4u, 0x26DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DCBCu;
label_26dcbc:
    // 0x26dcbc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x26dcbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26dcc0:
    // 0x26dcc0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x26dcc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26dcc4:
    // 0x26dcc4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x26dcc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26dcc8:
    // 0x26dcc8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x26dcc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26dccc:
    // 0x26dccc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x26dcccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26dcd0:
    // 0x26dcd0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x26dcd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26dcd4:
    // 0x26dcd4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x26dcd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26dcd8:
    // 0x26dcd8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x26dcd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26dcdc:
    // 0x26dcdc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x26dcdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26dce0:
    // 0x26dce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26dce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26dce4:
    // 0x26dce4: 0x3e00008  jr          $ra
label_26dce8:
    if (ctx->pc == 0x26DCE8u) {
        ctx->pc = 0x26DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCE4u;
        // 0x26dce8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DCECu;
        goto label_26dcec;
    }
    ctx->pc = 0x26DCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCE4u;
        // 0x26dce8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DCECu;
label_26dcec:
    // 0x26dcec: 0x0  nop
    ctx->pc = 0x26dcecu;
    // NOP
label_26dcf0:
    // 0x26dcf0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26dcf4:
    // 0x26dcf4: 0x0  nop
    ctx->pc = 0x26dcf4u;
    // NOP
label_26dcf8:
    // 0x26dcf8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26dcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26dcfc:
    // 0x26dcfc: 0x0  nop
    ctx->pc = 0x26dcfcu;
    // NOP
label_26dd00:
    // 0x26dd00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26dd04:
    // 0x26dd04: 0x0  nop
    ctx->pc = 0x26dd04u;
    // NOP
    ctx->pc = 0x26dd08u;
}
