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

// Function: sub_0048DD00
// Address: 0x48dd00 - 0x48df90
void sub_0048DD00_0x48dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DD00_0x48dd00");
#endif

    switch (ctx->pc) {
        case 0x48dd00u: goto label_48dd00;
        case 0x48dd04u: goto label_48dd04;
        case 0x48dd08u: goto label_48dd08;
        case 0x48dd0cu: goto label_48dd0c;
        case 0x48dd10u: goto label_48dd10;
        case 0x48dd14u: goto label_48dd14;
        case 0x48dd18u: goto label_48dd18;
        case 0x48dd1cu: goto label_48dd1c;
        case 0x48dd20u: goto label_48dd20;
        case 0x48dd24u: goto label_48dd24;
        case 0x48dd28u: goto label_48dd28;
        case 0x48dd2cu: goto label_48dd2c;
        case 0x48dd30u: goto label_48dd30;
        case 0x48dd34u: goto label_48dd34;
        case 0x48dd38u: goto label_48dd38;
        case 0x48dd3cu: goto label_48dd3c;
        case 0x48dd40u: goto label_48dd40;
        case 0x48dd44u: goto label_48dd44;
        case 0x48dd48u: goto label_48dd48;
        case 0x48dd4cu: goto label_48dd4c;
        case 0x48dd50u: goto label_48dd50;
        case 0x48dd54u: goto label_48dd54;
        case 0x48dd58u: goto label_48dd58;
        case 0x48dd5cu: goto label_48dd5c;
        case 0x48dd60u: goto label_48dd60;
        case 0x48dd64u: goto label_48dd64;
        case 0x48dd68u: goto label_48dd68;
        case 0x48dd6cu: goto label_48dd6c;
        case 0x48dd70u: goto label_48dd70;
        case 0x48dd74u: goto label_48dd74;
        case 0x48dd78u: goto label_48dd78;
        case 0x48dd7cu: goto label_48dd7c;
        case 0x48dd80u: goto label_48dd80;
        case 0x48dd84u: goto label_48dd84;
        case 0x48dd88u: goto label_48dd88;
        case 0x48dd8cu: goto label_48dd8c;
        case 0x48dd90u: goto label_48dd90;
        case 0x48dd94u: goto label_48dd94;
        case 0x48dd98u: goto label_48dd98;
        case 0x48dd9cu: goto label_48dd9c;
        case 0x48dda0u: goto label_48dda0;
        case 0x48dda4u: goto label_48dda4;
        case 0x48dda8u: goto label_48dda8;
        case 0x48ddacu: goto label_48ddac;
        case 0x48ddb0u: goto label_48ddb0;
        case 0x48ddb4u: goto label_48ddb4;
        case 0x48ddb8u: goto label_48ddb8;
        case 0x48ddbcu: goto label_48ddbc;
        case 0x48ddc0u: goto label_48ddc0;
        case 0x48ddc4u: goto label_48ddc4;
        case 0x48ddc8u: goto label_48ddc8;
        case 0x48ddccu: goto label_48ddcc;
        case 0x48ddd0u: goto label_48ddd0;
        case 0x48ddd4u: goto label_48ddd4;
        case 0x48ddd8u: goto label_48ddd8;
        case 0x48dddcu: goto label_48dddc;
        case 0x48dde0u: goto label_48dde0;
        case 0x48dde4u: goto label_48dde4;
        case 0x48dde8u: goto label_48dde8;
        case 0x48ddecu: goto label_48ddec;
        case 0x48ddf0u: goto label_48ddf0;
        case 0x48ddf4u: goto label_48ddf4;
        case 0x48ddf8u: goto label_48ddf8;
        case 0x48ddfcu: goto label_48ddfc;
        case 0x48de00u: goto label_48de00;
        case 0x48de04u: goto label_48de04;
        case 0x48de08u: goto label_48de08;
        case 0x48de0cu: goto label_48de0c;
        case 0x48de10u: goto label_48de10;
        case 0x48de14u: goto label_48de14;
        case 0x48de18u: goto label_48de18;
        case 0x48de1cu: goto label_48de1c;
        case 0x48de20u: goto label_48de20;
        case 0x48de24u: goto label_48de24;
        case 0x48de28u: goto label_48de28;
        case 0x48de2cu: goto label_48de2c;
        case 0x48de30u: goto label_48de30;
        case 0x48de34u: goto label_48de34;
        case 0x48de38u: goto label_48de38;
        case 0x48de3cu: goto label_48de3c;
        case 0x48de40u: goto label_48de40;
        case 0x48de44u: goto label_48de44;
        case 0x48de48u: goto label_48de48;
        case 0x48de4cu: goto label_48de4c;
        case 0x48de50u: goto label_48de50;
        case 0x48de54u: goto label_48de54;
        case 0x48de58u: goto label_48de58;
        case 0x48de5cu: goto label_48de5c;
        case 0x48de60u: goto label_48de60;
        case 0x48de64u: goto label_48de64;
        case 0x48de68u: goto label_48de68;
        case 0x48de6cu: goto label_48de6c;
        case 0x48de70u: goto label_48de70;
        case 0x48de74u: goto label_48de74;
        case 0x48de78u: goto label_48de78;
        case 0x48de7cu: goto label_48de7c;
        case 0x48de80u: goto label_48de80;
        case 0x48de84u: goto label_48de84;
        case 0x48de88u: goto label_48de88;
        case 0x48de8cu: goto label_48de8c;
        case 0x48de90u: goto label_48de90;
        case 0x48de94u: goto label_48de94;
        case 0x48de98u: goto label_48de98;
        case 0x48de9cu: goto label_48de9c;
        case 0x48dea0u: goto label_48dea0;
        case 0x48dea4u: goto label_48dea4;
        case 0x48dea8u: goto label_48dea8;
        case 0x48deacu: goto label_48deac;
        case 0x48deb0u: goto label_48deb0;
        case 0x48deb4u: goto label_48deb4;
        case 0x48deb8u: goto label_48deb8;
        case 0x48debcu: goto label_48debc;
        case 0x48dec0u: goto label_48dec0;
        case 0x48dec4u: goto label_48dec4;
        case 0x48dec8u: goto label_48dec8;
        case 0x48deccu: goto label_48decc;
        case 0x48ded0u: goto label_48ded0;
        case 0x48ded4u: goto label_48ded4;
        case 0x48ded8u: goto label_48ded8;
        case 0x48dedcu: goto label_48dedc;
        case 0x48dee0u: goto label_48dee0;
        case 0x48dee4u: goto label_48dee4;
        case 0x48dee8u: goto label_48dee8;
        case 0x48deecu: goto label_48deec;
        case 0x48def0u: goto label_48def0;
        case 0x48def4u: goto label_48def4;
        case 0x48def8u: goto label_48def8;
        case 0x48defcu: goto label_48defc;
        case 0x48df00u: goto label_48df00;
        case 0x48df04u: goto label_48df04;
        case 0x48df08u: goto label_48df08;
        case 0x48df0cu: goto label_48df0c;
        case 0x48df10u: goto label_48df10;
        case 0x48df14u: goto label_48df14;
        case 0x48df18u: goto label_48df18;
        case 0x48df1cu: goto label_48df1c;
        case 0x48df20u: goto label_48df20;
        case 0x48df24u: goto label_48df24;
        case 0x48df28u: goto label_48df28;
        case 0x48df2cu: goto label_48df2c;
        case 0x48df30u: goto label_48df30;
        case 0x48df34u: goto label_48df34;
        case 0x48df38u: goto label_48df38;
        case 0x48df3cu: goto label_48df3c;
        case 0x48df40u: goto label_48df40;
        case 0x48df44u: goto label_48df44;
        case 0x48df48u: goto label_48df48;
        case 0x48df4cu: goto label_48df4c;
        case 0x48df50u: goto label_48df50;
        case 0x48df54u: goto label_48df54;
        case 0x48df58u: goto label_48df58;
        case 0x48df5cu: goto label_48df5c;
        case 0x48df60u: goto label_48df60;
        case 0x48df64u: goto label_48df64;
        case 0x48df68u: goto label_48df68;
        case 0x48df6cu: goto label_48df6c;
        case 0x48df70u: goto label_48df70;
        case 0x48df74u: goto label_48df74;
        case 0x48df78u: goto label_48df78;
        case 0x48df7cu: goto label_48df7c;
        case 0x48df80u: goto label_48df80;
        case 0x48df84u: goto label_48df84;
        case 0x48df88u: goto label_48df88;
        case 0x48df8cu: goto label_48df8c;
        default: break;
    }

    ctx->pc = 0x48dd00u;

label_48dd00:
    // 0x48dd00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48dd04:
    // 0x48dd04: 0x8f828688  lw          $v0, -0x7978($gp)
    ctx->pc = 0x48dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
label_48dd08:
    // 0x48dd08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x48dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_48dd0c:
    // 0x48dd0c: 0x3c120010  lui         $s2, 0x10
    ctx->pc = 0x48dd0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
label_48dd10:
    // 0x48dd10: 0x8f838684  lw          $v1, -0x797C($gp)
    ctx->pc = 0x48dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
label_48dd14:
    // 0x48dd14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x48dd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_48dd18:
    // 0x48dd18: 0x42900b  movn        $s2, $v0, $v0
    ctx->pc = 0x48dd18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_48dd1c:
    // 0x48dd1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x48dd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_48dd20:
    // 0x48dd20: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_48dd24:
    if (ctx->pc == 0x48DD24u) {
        ctx->pc = 0x48DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD20u;
        // 0x48dd24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DD28u;
        goto label_48dd28;
    }
    ctx->pc = 0x48DD20u;
    {
        const bool branch_taken_0x48dd20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD20u;
        // 0x48dd24: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dd20) {
            ctx->pc = 0x48DD54u;
            goto label_48dd54;
        }
    }
    ctx->pc = 0x48DD28u;
label_48dd28:
    // 0x48dd28: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_48dd2c:
    // 0x48dd2c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x48dd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_48dd30:
    // 0x48dd30: 0x8c62ae20  lw          $v0, -0x51E0($v1)
    ctx->pc = 0x48dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946336)));
label_48dd34:
    // 0x48dd34: 0x26440080  addiu       $a0, $s2, 0x80
    ctx->pc = 0x48dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_48dd38:
    // 0x48dd38: 0x40f809  jalr        $v0
label_48dd3c:
    if (ctx->pc == 0x48DD3Cu) {
        ctx->pc = 0x48DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD38u;
        // 0x48dd3c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DD40u;
        goto label_48dd40;
    }
    ctx->pc = 0x48DD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48DD40u);
        ctx->pc = 0x48DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD38u;
        // 0x48dd3c: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DD38u, 0x48DD40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48DD40u;
label_48dd40:
    // 0x48dd40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_48dd44:
    if (ctx->pc == 0x48DD44u) {
        ctx->pc = 0x48DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD40u;
        // 0x48dd44: 0xaf828684  sw          $v0, -0x797C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DD48u;
        goto label_48dd48;
    }
    ctx->pc = 0x48DD40u;
    {
        const bool branch_taken_0x48dd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD40u;
        // 0x48dd44: 0xaf828684  sw          $v0, -0x797C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dd40) {
            ctx->pc = 0x48DD50u;
            goto label_48dd50;
        }
    }
    ctx->pc = 0x48DD48u;
label_48dd48:
    // 0x48dd48: 0x1000008b  b           . + 4 + (0x8B << 2)
label_48dd4c:
    if (ctx->pc == 0x48DD4Cu) {
        ctx->pc = 0x48DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD48u;
        // 0x48dd4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DD50u;
        goto label_48dd50;
    }
    ctx->pc = 0x48DD48u;
    {
        const bool branch_taken_0x48dd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD48u;
        // 0x48dd4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dd48) {
            ctx->pc = 0x48DF78u;
            goto label_48df78;
        }
    }
    ctx->pc = 0x48DD50u;
label_48dd50:
    // 0x48dd50: 0xaf808688  sw          $zero, -0x7978($gp)
    ctx->pc = 0x48dd50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936200), GPR_U32(ctx, 0));
label_48dd54:
    // 0x48dd54: 0x8f828684  lw          $v0, -0x797C($gp)
    ctx->pc = 0x48dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
label_48dd58:
    // 0x48dd58: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x48dd58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_48dd5c:
    // 0x48dd5c: 0x3631ff80  ori         $s1, $s1, 0xFF80
    ctx->pc = 0x48dd5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65408);
label_48dd60:
    // 0x48dd60: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x48dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_48dd64:
    // 0x48dd64: 0xc12367c  jal         func_48D9F0
label_48dd68:
    if (ctx->pc == 0x48DD68u) {
        ctx->pc = 0x48DD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD64u;
        // 0x48dd68: 0x518024  and         $s0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DD6Cu;
        goto label_48dd6c;
    }
    ctx->pc = 0x48DD64u;
    SET_GPR_U32(ctx, 31, 0x48DD6Cu);
    ctx->pc = 0x48DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DD64u;
    // 0x48dd68: 0x518024  and         $s0, $v0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D9F0u, 0x48DD64u, 0x48DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DD6Cu;
label_48dd6c:
    // 0x48dd6c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_48dd70:
    if (ctx->pc == 0x48DD70u) {
        ctx->pc = 0x48DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD6Cu;
        // 0x48dd70: 0x97828682  lhu         $v0, -0x797E($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936194)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DD74u;
        goto label_48dd74;
    }
    ctx->pc = 0x48DD6Cu;
    {
        const bool branch_taken_0x48dd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD6Cu;
        // 0x48dd70: 0x97828682  lhu         $v0, -0x797E($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936194)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dd6c) {
            ctx->pc = 0x48DD98u;
            goto label_48dd98;
        }
    }
    ctx->pc = 0x48DD74u;
label_48dd74:
    // 0x48dd74: 0x8f828688  lw          $v0, -0x7978($gp)
    ctx->pc = 0x48dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936200)));
label_48dd78:
    // 0x48dd78: 0x1440007f  bnez        $v0, . + 4 + (0x7F << 2)
label_48dd7c:
    if (ctx->pc == 0x48DD7Cu) {
        ctx->pc = 0x48DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD78u;
        // 0x48dd7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DD80u;
        goto label_48dd80;
    }
    ctx->pc = 0x48DD78u;
    {
        const bool branch_taken_0x48dd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD78u;
        // 0x48dd7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dd78) {
            ctx->pc = 0x48DF78u;
            goto label_48df78;
        }
    }
    ctx->pc = 0x48DD80u;
label_48dd80:
    // 0x48dd80: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_48dd84:
    // 0x48dd84: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x48dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_48dd88:
    // 0x48dd88: 0x40f809  jalr        $v0
label_48dd8c:
    if (ctx->pc == 0x48DD8Cu) {
        ctx->pc = 0x48DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD88u;
        // 0x48dd8c: 0x8f848684  lw          $a0, -0x797C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DD90u;
        goto label_48dd90;
    }
    ctx->pc = 0x48DD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48DD90u);
        ctx->pc = 0x48DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD88u;
        // 0x48dd8c: 0x8f848684  lw          $a0, -0x797C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DD88u, 0x48DD90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48DD90u;
label_48dd90:
    // 0x48dd90: 0x10000079  b           . + 4 + (0x79 << 2)
label_48dd94:
    if (ctx->pc == 0x48DD94u) {
        ctx->pc = 0x48DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD90u;
        // 0x48dd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DD98u;
        goto label_48dd98;
    }
    ctx->pc = 0x48DD90u;
    {
        const bool branch_taken_0x48dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DD90u;
        // 0x48dd94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48dd90) {
            ctx->pc = 0x48DF78u;
            goto label_48df78;
        }
    }
    ctx->pc = 0x48DD98u;
label_48dd98:
    // 0x48dd98: 0x2643f800  addiu       $v1, $s2, -0x800
    ctx->pc = 0x48dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965248));
label_48dd9c:
    // 0x48dd9c: 0xaf908678  sw          $s0, -0x7988($gp)
    ctx->pc = 0x48dd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936184), GPR_U32(ctx, 16));
label_48dda0:
    // 0x48dda0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48dda4:
    // 0x48dda4: 0x26100800  addiu       $s0, $s0, 0x800
    ctx->pc = 0x48dda4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
label_48dda8:
    // 0x48dda8: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x48dda8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48ddac:
    // 0x48ddac: 0xaf9089c0  sw          $s0, -0x7640($gp)
    ctx->pc = 0x48ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937024), GPR_U32(ctx, 16));
label_48ddb0:
    // 0x48ddb0: 0x121042  srl         $v0, $s2, 1
    ctx->pc = 0x48ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_48ddb4:
    // 0x48ddb4: 0xa38089cc  sb          $zero, -0x7634($gp)
    ctx->pc = 0x48ddb4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937036), (uint8_t)GPR_U32(ctx, 0));
label_48ddb8:
    // 0x48ddb8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x48ddb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_48ddbc:
    // 0x48ddbc: 0xa7808a10  sh          $zero, -0x75F0($gp)
    ctx->pc = 0x48ddbcu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937104), (uint16_t)GPR_U32(ctx, 0));
label_48ddc0:
    // 0x48ddc0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x48ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_48ddc4:
    // 0x48ddc4: 0xaf8289c8  sw          $v0, -0x7638($gp)
    ctx->pc = 0x48ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937032), GPR_U32(ctx, 2));
label_48ddc8:
    // 0x48ddc8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x48ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_48ddcc:
    // 0x48ddcc: 0xaf8489c4  sw          $a0, -0x763C($gp)
    ctx->pc = 0x48ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937028), GPR_U32(ctx, 4));
label_48ddd0:
    // 0x48ddd0: 0xaf828a0c  sw          $v0, -0x75F4($gp)
    ctx->pc = 0x48ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937100), GPR_U32(ctx, 2));
label_48ddd4:
    // 0x48ddd4: 0xa7808a12  sh          $zero, -0x75EE($gp)
    ctx->pc = 0x48ddd4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937106), (uint16_t)GPR_U32(ctx, 0));
label_48ddd8:
    // 0x48ddd8: 0xaf9089e4  sw          $s0, -0x761C($gp)
    ctx->pc = 0x48ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 16));
label_48dddc:
    // 0x48dddc: 0xaf80898c  sw          $zero, -0x7674($gp)
    ctx->pc = 0x48dddcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 0));
label_48dde0:
    // 0x48dde0: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x48dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_48dde4:
    // 0x48dde4: 0x26020078  addiu       $v0, $s0, 0x78
    ctx->pc = 0x48dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_48dde8:
    // 0x48dde8: 0xaf8289e0  sw          $v0, -0x7620($gp)
    ctx->pc = 0x48dde8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 2));
label_48ddec:
    // 0x48ddec: 0xaf8389dc  sw          $v1, -0x7624($gp)
    ctx->pc = 0x48ddecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 3));
label_48ddf0:
    // 0x48ddf0: 0xaf8489d0  sw          $a0, -0x7630($gp)
    ctx->pc = 0x48ddf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937040), GPR_U32(ctx, 4));
label_48ddf4:
    // 0x48ddf4: 0xaf8489d8  sw          $a0, -0x7628($gp)
    ctx->pc = 0x48ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U32(ctx, 4));
label_48ddf8:
    // 0x48ddf8: 0xaf808990  sw          $zero, -0x7670($gp)
    ctx->pc = 0x48ddf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 0));
label_48ddfc:
    // 0x48ddfc: 0xaf8089e8  sw          $zero, -0x7618($gp)
    ctx->pc = 0x48ddfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937064), GPR_U32(ctx, 0));
label_48de00:
    // 0x48de00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48de00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48de04:
    // 0x48de04: 0xaf8089f0  sw          $zero, -0x7610($gp)
    ctx->pc = 0x48de04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 0));
label_48de08:
    // 0x48de08: 0xaf8089f4  sw          $zero, -0x760C($gp)
    ctx->pc = 0x48de08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 0));
label_48de0c:
    // 0x48de0c: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x48de0cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
label_48de10:
    // 0x48de10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48de10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48de14:
    // 0x48de14: 0x0  nop
    ctx->pc = 0x48de14u;
    // NOP
label_48de18:
    // 0x48de18: 0x8f828678  lw          $v0, -0x7988($gp)
    ctx->pc = 0x48de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_48de1c:
    // 0x48de1c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x48de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_48de20:
    // 0x48de20: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x48de20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_48de24:
    // 0x48de24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48de28:
    // 0x48de28: 0x28e40080  slti        $a0, $a3, 0x80
    ctx->pc = 0x48de28u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
label_48de2c:
    // 0x48de2c: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_48de30:
    if (ctx->pc == 0x48DE30u) {
        ctx->pc = 0x48DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DE2Cu;
        // 0x48de30: 0x7c680000  sq          $t0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DE34u;
        goto label_48de34;
    }
    ctx->pc = 0x48DE2Cu;
    {
        const bool branch_taken_0x48de2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x48DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DE2Cu;
        // 0x48de30: 0x7c680000  sq          $t0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48de2c) {
            ctx->pc = 0x48DE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48de18;
        }
    }
    ctx->pc = 0x48DE34u;
label_48de34:
    // 0x48de34: 0x8f868678  lw          $a2, -0x7988($gp)
    ctx->pc = 0x48de34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_48de38:
    // 0x48de38: 0x3403c000  ori         $v1, $zero, 0xC000
    ctx->pc = 0x48de38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_48de3c:
    // 0x48de3c: 0x31afc  dsll32      $v1, $v1, 11
    ctx->pc = 0x48de3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 11));
label_48de40:
    // 0x48de40: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x48de40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
label_48de44:
    // 0x48de44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48de44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48de48:
    // 0x48de48: 0x70624389  pcpyld      $t0, $v1, $v0
    ctx->pc = 0x48de48u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_48de4c:
    // 0x48de4c: 0x3c040600  lui         $a0, 0x600
    ctx->pc = 0x48de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
label_48de50:
    // 0x48de50: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x48de50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
label_48de54:
    // 0x48de54: 0x7cc80070  sq          $t0, 0x70($a2)
    ctx->pc = 0x48de54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 8));
label_48de58:
    // 0x48de58: 0x3c031300  lui         $v1, 0x1300
    ctx->pc = 0x48de58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4864 << 16));
label_48de5c:
    // 0x48de5c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x48de5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_48de60:
    // 0x48de60: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x48de60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
label_48de64:
    // 0x48de64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x48de64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_48de68:
    // 0x48de68: 0x70a44389  pcpyld      $t0, $a1, $a0
    ctx->pc = 0x48de68u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_48de6c:
    // 0x48de6c: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x48de6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
label_48de70:
    // 0x48de70: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x48de70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
label_48de74:
    // 0x48de74: 0x8f828678  lw          $v0, -0x7988($gp)
    ctx->pc = 0x48de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_48de78:
    // 0x48de78: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x48de78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_48de7c:
    // 0x48de7c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x48de7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_48de80:
    // 0x48de80: 0x7c480200  sq          $t0, 0x200($v0)
    ctx->pc = 0x48de80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 512), GPR_VEC(ctx, 8));
label_48de84:
    // 0x48de84: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x48de84u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_48de88:
    // 0x48de88: 0x8f828678  lw          $v0, -0x7988($gp)
    ctx->pc = 0x48de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_48de8c:
    // 0x48de8c: 0x7c480210  sq          $t0, 0x210($v0)
    ctx->pc = 0x48de8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 528), GPR_VEC(ctx, 8));
label_48de90:
    // 0x48de90: 0x70a64389  pcpyld      $t0, $a1, $a2
    ctx->pc = 0x48de90u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
label_48de94:
    // 0x48de94: 0x8f828678  lw          $v0, -0x7988($gp)
    ctx->pc = 0x48de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_48de98:
    // 0x48de98: 0x7c4803f0  sq          $t0, 0x3F0($v0)
    ctx->pc = 0x48de98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1008), GPR_VEC(ctx, 8));
label_48de9c:
    // 0x48de9c: 0x70854389  pcpyld      $t0, $a0, $a1
    ctx->pc = 0x48de9cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
label_48dea0:
    // 0x48dea0: 0x8f828678  lw          $v0, -0x7988($gp)
    ctx->pc = 0x48dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_48dea4:
    // 0x48dea4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x48dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_48dea8:
    // 0x48dea8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x48dea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_48deac:
    // 0x48deac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48deacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48deb0:
    // 0x48deb0: 0x28e40080  slti        $a0, $a3, 0x80
    ctx->pc = 0x48deb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
label_48deb4:
    // 0x48deb4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_48deb8:
    if (ctx->pc == 0x48DEB8u) {
        ctx->pc = 0x48DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DEB4u;
        // 0x48deb8: 0x7c680000  sq          $t0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DEBCu;
        goto label_48debc;
    }
    ctx->pc = 0x48DEB4u;
    {
        const bool branch_taken_0x48deb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x48DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DEB4u;
        // 0x48deb8: 0x7c680000  sq          $t0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48deb4) {
            ctx->pc = 0x48DEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dea0;
        }
    }
    ctx->pc = 0x48DEBCu;
label_48debc:
    // 0x48debc: 0x9f828678  lwu         $v0, -0x7988($gp)
    ctx->pc = 0x48debcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_48dec0:
    // 0x48dec0: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x48dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_48dec4:
    // 0x48dec4: 0x34840021  ori         $a0, $a0, 0x21
    ctx->pc = 0x48dec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33);
label_48dec8:
    // 0x48dec8: 0x3c061300  lui         $a2, 0x1300
    ctx->pc = 0x48dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4864 << 16));
label_48decc:
    // 0x48decc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x48deccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_48ded0:
    // 0x48ded0: 0x34c61100  ori         $a2, $a2, 0x1100
    ctx->pc = 0x48ded0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4352);
label_48ded4:
    // 0x48ded4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x48ded4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_48ded8:
    // 0x48ded8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x48ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_48dedc:
    // 0x48dedc: 0x34630022  ori         $v1, $v1, 0x22
    ctx->pc = 0x48dedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34);
label_48dee0:
    // 0x48dee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48dee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_48dee4:
    // 0x48dee4: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x48dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_48dee8:
    // 0x48dee8: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x48dee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_48deec:
    // 0x48deec: 0x24a5f9e0  addiu       $a1, $a1, -0x620
    ctx->pc = 0x48deecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965728));
label_48def0:
    // 0x48def0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48def0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_48def4:
    // 0x48def4: 0x70c44389  pcpyld      $t0, $a2, $a0
    ctx->pc = 0x48def4u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_48def8:
    // 0x48def8: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x48def8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
label_48defc:
    // 0x48defc: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x48defcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_48df00:
    // 0x48df00: 0x8f8589c8  lw          $a1, -0x7638($gp)
    ctx->pc = 0x48df00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937032)));
label_48df04:
    // 0x48df04: 0x70c24389  pcpyld      $t0, $a2, $v0
    ctx->pc = 0x48df04u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
label_48df08:
    // 0x48df08: 0x2463fa00  addiu       $v1, $v1, -0x600
    ctx->pc = 0x48df08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965760));
label_48df0c:
    // 0x48df0c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x48df0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_48df10:
    // 0x48df10: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x48df10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
label_48df14:
    // 0x48df14: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48df14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_48df18:
    // 0x48df18: 0x2442f9f0  addiu       $v0, $v0, -0x610
    ctx->pc = 0x48df18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965744));
label_48df1c:
    // 0x48df1c: 0x70c74389  pcpyld      $t0, $a2, $a3
    ctx->pc = 0x48df1cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
label_48df20:
    // 0x48df20: 0x8f848678  lw          $a0, -0x7988($gp)
    ctx->pc = 0x48df20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
label_48df24:
    // 0x48df24: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x48df24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_48df28:
    // 0x48df28: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x48df28u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_48df2c:
    // 0x48df2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x48df2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48df30:
    // 0x48df30: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48df30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_48df34:
    // 0x48df34: 0x70674389  pcpyld      $t0, $v1, $a3
    ctx->pc = 0x48df34u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
label_48df38:
    // 0x48df38: 0x2442fa10  addiu       $v0, $v0, -0x5F0
    ctx->pc = 0x48df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965776));
label_48df3c:
    // 0x48df3c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x48df3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_48df40:
    // 0x48df40: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x48df40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_48df44:
    // 0x48df44: 0xc10f644  jal         func_43D910
label_48df48:
    if (ctx->pc == 0x48DF48u) {
        ctx->pc = 0x48DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DF44u;
        // 0x48df48: 0x24a507ff  addiu       $a1, $a1, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DF4Cu;
        goto label_48df4c;
    }
    ctx->pc = 0x48DF44u;
    SET_GPR_U32(ctx, 31, 0x48DF4Cu);
    ctx->pc = 0x48DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48DF44u;
    // 0x48df48: 0x24a507ff  addiu       $a1, $a1, 0x7FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x48DF44u, 0x48DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DF4Cu;
label_48df4c:
    // 0x48df4c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x48df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_48df50:
    // 0x48df50: 0xa38089f8  sb          $zero, -0x7608($gp)
    ctx->pc = 0x48df50u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937080), (uint8_t)GPR_U32(ctx, 0));
label_48df54:
    // 0x48df54: 0xaf8289a8  sw          $v0, -0x7658($gp)
    ctx->pc = 0x48df54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 2));
label_48df58:
    // 0x48df58: 0xaf8089ac  sw          $zero, -0x7654($gp)
    ctx->pc = 0x48df58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 0));
label_48df5c:
    // 0x48df5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48df60:
    // 0x48df60: 0xaf8089b0  sw          $zero, -0x7650($gp)
    ctx->pc = 0x48df60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937008), GPR_U32(ctx, 0));
label_48df64:
    // 0x48df64: 0xaf8089b4  sw          $zero, -0x764C($gp)
    ctx->pc = 0x48df64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 0));
label_48df68:
    // 0x48df68: 0xaf8089b8  sw          $zero, -0x7648($gp)
    ctx->pc = 0x48df68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U32(ctx, 0));
label_48df6c:
    // 0x48df6c: 0xa380899b  sb          $zero, -0x7665($gp)
    ctx->pc = 0x48df6cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936987), (uint8_t)GPR_U32(ctx, 0));
label_48df70:
    // 0x48df70: 0xaf808994  sw          $zero, -0x766C($gp)
    ctx->pc = 0x48df70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 0));
label_48df74:
    // 0x48df74: 0xa3808a08  sb          $zero, -0x75F8($gp)
    ctx->pc = 0x48df74u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937096), (uint8_t)GPR_U32(ctx, 0));
label_48df78:
    // 0x48df78: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x48df78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48df7c:
    // 0x48df7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x48df7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48df80:
    // 0x48df80: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x48df80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48df84:
    // 0x48df84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48df84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48df88:
    // 0x48df88: 0x3e00008  jr          $ra
label_48df8c:
    if (ctx->pc == 0x48DF8Cu) {
        ctx->pc = 0x48DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DF88u;
        // 0x48df8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48DF90u;
        goto label_fallthrough_0x48df88;
    }
    ctx->pc = 0x48DF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48DF88u;
        // 0x48df8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48df88:
    ctx->pc = 0x48DF90u;
}
