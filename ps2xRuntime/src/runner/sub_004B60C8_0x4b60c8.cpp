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

// Function: sub_004B60C8
// Address: 0x4b60c8 - 0x4b6df8
void sub_004B60C8_0x4b60c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B60C8_0x4b60c8");
#endif

    switch (ctx->pc) {
        case 0x4b60e8u: goto label_4b60e8;
        case 0x4b6108u: goto label_4b6108;
        case 0x4b615cu: goto label_4b615c;
        case 0x4b6164u: goto label_4b6164;
        case 0x4b61d4u: goto label_4b61d4;
        case 0x4b61e8u: goto label_4b61e8;
        case 0x4b6200u: goto label_4b6200;
        case 0x4b621cu: goto label_4b621c;
        case 0x4b6250u: goto label_4b6250;
        case 0x4b6260u: goto label_4b6260;
        case 0x4b6278u: goto label_4b6278;
        case 0x4b62a4u: goto label_4b62a4;
        case 0x4b62d4u: goto label_4b62d4;
        case 0x4b62e4u: goto label_4b62e4;
        case 0x4b62f0u: goto label_4b62f0;
        case 0x4b6300u: goto label_4b6300;
        case 0x4b633cu: goto label_4b633c;
        case 0x4b634cu: goto label_4b634c;
        case 0x4b6360u: goto label_4b6360;
        case 0x4b636cu: goto label_4b636c;
        case 0x4b63b4u: goto label_4b63b4;
        case 0x4b63c0u: goto label_4b63c0;
        case 0x4b63c8u: goto label_4b63c8;
        case 0x4b63d0u: goto label_4b63d0;
        case 0x4b63e0u: goto label_4b63e0;
        case 0x4b63ecu: goto label_4b63ec;
        case 0x4b63f8u: goto label_4b63f8;
        case 0x4b6404u: goto label_4b6404;
        case 0x4b6420u: goto label_4b6420;
        case 0x4b6438u: goto label_4b6438;
        case 0x4b6444u: goto label_4b6444;
        case 0x4b648cu: goto label_4b648c;
        case 0x4b6498u: goto label_4b6498;
        case 0x4b64acu: goto label_4b64ac;
        case 0x4b64b8u: goto label_4b64b8;
        case 0x4b64c4u: goto label_4b64c4;
        case 0x4b64d0u: goto label_4b64d0;
        case 0x4b64f8u: goto label_4b64f8;
        case 0x4b6504u: goto label_4b6504;
        case 0x4b651cu: goto label_4b651c;
        case 0x4b6528u: goto label_4b6528;
        case 0x4b6530u: goto label_4b6530;
        case 0x4b65b8u: goto label_4b65b8;
        case 0x4b65c4u: goto label_4b65c4;
        case 0x4b65e0u: goto label_4b65e0;
        case 0x4b65f0u: goto label_4b65f0;
        case 0x4b6600u: goto label_4b6600;
        case 0x4b6614u: goto label_4b6614;
        case 0x4b661cu: goto label_4b661c;
        case 0x4b6628u: goto label_4b6628;
        case 0x4b6634u: goto label_4b6634;
        case 0x4b6640u: goto label_4b6640;
        case 0x4b6664u: goto label_4b6664;
        case 0x4b6674u: goto label_4b6674;
        case 0x4b6688u: goto label_4b6688;
        case 0x4b66b4u: goto label_4b66b4;
        case 0x4b6784u: goto label_4b6784;
        case 0x4b679cu: goto label_4b679c;
        case 0x4b6800u: goto label_4b6800;
        case 0x4b6814u: goto label_4b6814;
        case 0x4b6834u: goto label_4b6834;
        case 0x4b6844u: goto label_4b6844;
        case 0x4b6854u: goto label_4b6854;
        case 0x4b686cu: goto label_4b686c;
        case 0x4b6900u: goto label_4b6900;
        case 0x4b6974u: goto label_4b6974;
        case 0x4b6988u: goto label_4b6988;
        case 0x4b69a0u: goto label_4b69a0;
        case 0x4b69bcu: goto label_4b69bc;
        case 0x4b69d8u: goto label_4b69d8;
        case 0x4b6a14u: goto label_4b6a14;
        case 0x4b6a24u: goto label_4b6a24;
        case 0x4b6a68u: goto label_4b6a68;
        case 0x4b6a80u: goto label_4b6a80;
        case 0x4b6a90u: goto label_4b6a90;
        case 0x4b6aa0u: goto label_4b6aa0;
        case 0x4b6aacu: goto label_4b6aac;
        case 0x4b6ac8u: goto label_4b6ac8;
        case 0x4b6ad8u: goto label_4b6ad8;
        case 0x4b6afcu: goto label_4b6afc;
        case 0x4b6b14u: goto label_4b6b14;
        case 0x4b6b28u: goto label_4b6b28;
        case 0x4b6b3cu: goto label_4b6b3c;
        case 0x4b6b4cu: goto label_4b6b4c;
        case 0x4b6b60u: goto label_4b6b60;
        case 0x4b6b7cu: goto label_4b6b7c;
        case 0x4b6bf4u: goto label_4b6bf4;
        case 0x4b6c04u: goto label_4b6c04;
        case 0x4b6c80u: goto label_4b6c80;
        case 0x4b6c94u: goto label_4b6c94;
        case 0x4b6ca4u: goto label_4b6ca4;
        case 0x4b6cc8u: goto label_4b6cc8;
        case 0x4b6cd8u: goto label_4b6cd8;
        case 0x4b6d08u: goto label_4b6d08;
        case 0x4b6d48u: goto label_4b6d48;
        case 0x4b6d70u: goto label_4b6d70;
        case 0x4b6d78u: goto label_4b6d78;
        case 0x4b6d9cu: goto label_4b6d9c;
        case 0x4b6da4u: goto label_4b6da4;
        case 0x4b6dacu: goto label_4b6dac;
        case 0x4b6dc8u: goto label_4b6dc8;
        default: break;
    }

    ctx->pc = 0x4b60c8u;

    // 0x4b60c8: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x4b60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x4b60cc: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x4b60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x4b60d0: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x4b60d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4b60d4: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x4b60d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x4b60d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b60d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b60dc: 0xafb30160  sw          $s3, 0x160($sp)
    ctx->pc = 0x4b60dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 19));
    // 0x4b60e0: 0x13102a  slt         $v0, $zero, $s3
    ctx->pc = 0x4b60e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4b60e4: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x4b60e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_4b60e8:
    // 0x4b60e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4b60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b60ec: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x4b60ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
    // 0x4b60f0: 0xae2205bc  sw          $v0, 0x5BC($s1)
    ctx->pc = 0x4b60f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7105BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7105BCu, _value); } while (0);
    // 0x4b60f4: 0x2e620034  sltiu       $v0, $s3, 0x34
    ctx->pc = 0x4b60f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)52) ? 1 : 0);
    // 0x4b60f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B60F8u;
    {
        const bool branch_taken_0x4b60f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B60F8u;
        // 0x4b60fc: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b60f8) {
            ctx->pc = 0x4B6130u;
            goto label_4b6130;
        }
    }
    ctx->pc = 0x4B6100u;
    // 0x4b6100: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x4b6100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b6104: 0x2c92000f  sltiu       $s2, $a0, 0xF
    ctx->pc = 0x4b6104u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_4b6108:
    // 0x4b6108: 0x8e2305bc  lw          $v1, 0x5BC($s1)
    ctx->pc = 0x4b6108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
    // 0x4b610c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x4b610cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x4b6110: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x4b6110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4b6114: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4b6114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4b6118: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x4b6118u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4b611c: 0xae2305bc  sw          $v1, 0x5BC($s1)
    ctx->pc = 0x4b611cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1468), GPR_U32(ctx, 3));
    // 0x4b6120: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4B6120u;
    {
        const bool branch_taken_0x4b6120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6120) {
            ctx->pc = 0x4B6108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b6108;
        }
    }
    ctx->pc = 0x4B6128u;
    // 0x4b6128: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B6128u;
    {
        const bool branch_taken_0x4b6128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6128u;
        // 0x4b612c: 0x8ea42308  lw          $a0, 0x2308($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6128) {
            ctx->pc = 0x4B613Cu;
            goto label_4b613c;
        }
    }
    ctx->pc = 0x4B6130u;
label_4b6130:
    // 0x4b6130: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4b6130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b6134: 0x2c52000f  sltiu       $s2, $v0, 0xF
    ctx->pc = 0x4b6134u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x4b6138: 0x8ea42308  lw          $a0, 0x2308($s5)
    ctx->pc = 0x4b6138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8968)));
label_4b613c:
    // 0x4b613c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B613Cu;
    {
        const bool branch_taken_0x4b613c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B613Cu;
        // 0x4b6140: 0x8e2305bc  lw          $v1, 0x5BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b613c) {
            ctx->pc = 0x4B6154u;
            goto label_4b6154;
        }
    }
    ctx->pc = 0x4B6144u;
    // 0x4b6144: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4b6144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4b6148: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x4b6148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4b614c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B614Cu;
    {
        const bool branch_taken_0x4b614c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b614c) {
            ctx->pc = 0x4B6150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B614Cu;
            // 0x4b6150: 0x8eb52308  lw          $s5, 0x2308($s5) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8968)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6170u;
            goto label_4b6170;
        }
    }
    ctx->pc = 0x4B6154u;
label_4b6154:
    // 0x4b6154: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B6154u;
    SET_GPR_U32(ctx, 31, 0x4B615Cu);
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B6154u, 0x4B615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B615Cu;
label_4b615c:
    // 0x4b615c: 0xc12cef2  jal         func_4B3BC8
    ctx->pc = 0x4B615Cu;
    SET_GPR_U32(ctx, 31, 0x4B6164u);
    ctx->pc = 0x4B6160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B615Cu;
    // 0x4b6160: 0x8e2405bc  lw          $a0, 0x5BC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BC8u, 0x4B615Cu, 0x4B6164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6164u;
label_4b6164:
    // 0x4b6164: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4b6164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4b6168: 0xac622308  sw          $v0, 0x2308($v1)
    ctx->pc = 0x4b6168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532308u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532308u, _value); } while (0);
    // 0x4b616c: 0x8eb52308  lw          $s5, 0x2308($s5)
    ctx->pc = 0x4b616cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8968)));
label_4b6170:
    // 0x4b6170: 0x124000fd  beqz        $s2, . + 4 + (0xFD << 2)
    ctx->pc = 0x4B6170u;
    {
        const bool branch_taken_0x4b6170 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6170u;
        // 0x4b6174: 0xafb501a0  sw          $s5, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6170) {
            ctx->pc = 0x4B6568u;
            goto label_4b6568;
        }
    }
    ctx->pc = 0x4B6178u;
    // 0x4b6178: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x4b6178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x4b617c: 0x108000fa  beqz        $a0, . + 4 + (0xFA << 2)
    ctx->pc = 0x4B617Cu;
    {
        const bool branch_taken_0x4b617c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B617Cu;
        // 0x4b6180: 0x8fa20160  lw          $v0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b617c) {
            ctx->pc = 0x4B6568u;
            goto label_4b6568;
        }
    }
    ctx->pc = 0x4B6184u;
    // 0x4b6184: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x4b6184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b6188: 0xffb40198  sd          $s4, 0x198($sp)
    ctx->pc = 0x4b6188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 20));
    // 0x4b618c: 0xafb6016c  sw          $s6, 0x16C($sp)
    ctx->pc = 0x4b618cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 22));
    // 0x4b6190: 0x1ac00024  blez        $s6, . + 4 + (0x24 << 2)
    ctx->pc = 0x4B6190u;
    {
        const bool branch_taken_0x4b6190 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x4B6194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6190u;
        // 0x4b6194: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6190) {
            ctx->pc = 0x4B6224u;
            goto label_4b6224;
        }
    }
    ctx->pc = 0x4B6198u;
    // 0x4b6198: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b6198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b619c: 0x32c3000f  andi        $v1, $s6, 0xF
    ctx->pc = 0x4b619cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)15);
    // 0x4b61a0: 0x24420bb0  addiu       $v0, $v0, 0xBB0
    ctx->pc = 0x4b61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2992));
    // 0x4b61a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4b61a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4b61a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b61a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b61ac: 0x168103  sra         $s0, $s6, 4
    ctx->pc = 0x4b61acu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 22), 4));
    // 0x4b61b0: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x4b61b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x4b61b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B61B4u;
    {
        const bool branch_taken_0x4b61b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B61B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B61B4u;
        // 0x4b61b8: 0xdc710000  ld          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b61b4) {
            ctx->pc = 0x4B61D8u;
            goto label_4b61d8;
        }
    }
    ctx->pc = 0x4B61BCu;
    // 0x4b61bc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b61c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b61c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b61c4: 0xdc450c88  ld          $a1, 0xC88($v0)
    ctx->pc = 0x4b61c4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x590C88u));
    // 0x4b61c8: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x4b61c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x4b61cc: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4B61CCu;
    SET_GPR_U32(ctx, 31, 0x4B61D4u);
    ctx->pc = 0x4B61D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B61CCu;
    // 0x4b61d0: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4B61CCu, 0x4B61D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B61D4u;
label_4b61d4:
    // 0x4b61d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b61d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b61d8:
    // 0x4b61d8: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B61D8u;
    {
        const bool branch_taken_0x4b61d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B61DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B61D8u;
        // 0x4b61dc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b61d8) {
            ctx->pc = 0x4B6210u;
            goto label_4b6210;
        }
    }
    ctx->pc = 0x4B61E0u;
    // 0x4b61e0: 0x24520c68  addiu       $s2, $v0, 0xC68
    ctx->pc = 0x4b61e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3176));
    // 0x4b61e4: 0x0  nop
    ctx->pc = 0x4b61e4u;
    // NOP
label_4b61e8:
    // 0x4b61e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x4b61e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4b61ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B61ECu;
    {
        const bool branch_taken_0x4b61ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B61ECu;
        // 0x4b61f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b61ec) {
            ctx->pc = 0x4B6204u;
            goto label_4b6204;
        }
    }
    ctx->pc = 0x4B61F4u;
    // 0x4b61f4: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x4b61f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b61f8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B61F8u;
    SET_GPR_U32(ctx, 31, 0x4B6200u);
    ctx->pc = 0x4B61FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B61F8u;
    // 0x4b61fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B61F8u, 0x4B6200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6200u;
label_4b6200:
    // 0x4b6200: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b6200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6204:
    // 0x4b6204: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x4b6204u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x4b6208: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4B6208u;
    {
        const bool branch_taken_0x4b6208 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6208u;
        // 0x4b620c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6208) {
            ctx->pc = 0x4B61E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b61e8;
        }
    }
    ctx->pc = 0x4B6210u;
label_4b6210:
    // 0x4b6210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b6210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6214: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4B6214u;
    SET_GPR_U32(ctx, 31, 0x4B621Cu);
    ctx->pc = 0x4B6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6214u;
    // 0x4b6218: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4B6214u, 0x4B621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B621Cu;
label_4b621c:
    // 0x4b621c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4B621Cu;
    {
        const bool branch_taken_0x4b621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B621Cu;
        // 0x4b6220: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b621c) {
            ctx->pc = 0x4B6288u;
            goto label_4b6288;
        }
    }
    ctx->pc = 0x4B6224u;
label_4b6224:
    // 0x4b6224: 0x168823  negu        $s1, $s6
    ctx->pc = 0x4b6224u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
    // 0x4b6228: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4B6228u;
    {
        const bool branch_taken_0x4b6228 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6228u;
        // 0x4b622c: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6228) {
            ctx->pc = 0x4B6288u;
            goto label_4b6288;
        }
    }
    ctx->pc = 0x4B6230u;
    // 0x4b6230: 0x3222000f  andi        $v0, $s1, 0xF
    ctx->pc = 0x4b6230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x4b6234: 0x24630bb0  addiu       $v1, $v1, 0xBB0
    ctx->pc = 0x4b6234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2992));
    // 0x4b6238: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b6238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4b623c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b623cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b6240: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b6240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6244: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x4b6244u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b6248: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B6248u;
    SET_GPR_U32(ctx, 31, 0x4B6250u);
    ctx->pc = 0x4B624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6248u;
    // 0x4b624c: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B6248u, 0x4B6250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6250u;
label_4b6250:
    // 0x4b6250: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B6250u;
    {
        const bool branch_taken_0x4b6250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6250u;
        // 0x4b6254: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6250) {
            ctx->pc = 0x4B6288u;
            goto label_4b6288;
        }
    }
    ctx->pc = 0x4B6258u;
    // 0x4b6258: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4b6258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4b625c: 0x24510c68  addiu       $s1, $v0, 0xC68
    ctx->pc = 0x4b625cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3176));
label_4b6260:
    // 0x4b6260: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x4b6260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x4b6264: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6264u;
    {
        const bool branch_taken_0x4b6264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6264u;
        // 0x4b6268: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6264) {
            ctx->pc = 0x4B627Cu;
            goto label_4b627c;
        }
    }
    ctx->pc = 0x4B626Cu;
    // 0x4b626c: 0xde250000  ld          $a1, 0x0($s1)
    ctx->pc = 0x4b626cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4b6270: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B6270u;
    SET_GPR_U32(ctx, 31, 0x4B6278u);
    ctx->pc = 0x4B6274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6270u;
    // 0x4b6274: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B6270u, 0x4B6278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6278u;
label_4b6278:
    // 0x4b6278: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b6278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b627c:
    // 0x4b627c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x4b627cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x4b6280: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4B6280u;
    {
        const bool branch_taken_0x4b6280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6280u;
        // 0x4b6284: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6280) {
            ctx->pc = 0x4B6260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b6260;
        }
    }
    ctx->pc = 0x4B6288u;
label_4b6288:
    // 0x4b6288: 0x8fa30170  lw          $v1, 0x170($sp)
    ctx->pc = 0x4b6288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x4b628c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x4B628Cu;
    {
        const bool branch_taken_0x4b628c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b628c) {
            ctx->pc = 0x4B62DCu;
            goto label_4b62dc;
        }
    }
    ctx->pc = 0x4B6294u;
    // 0x4b6294: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x4b6294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4b6298: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b6298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b629c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B629Cu;
    SET_GPR_U32(ctx, 31, 0x4B62A4u);
    ctx->pc = 0x4B62A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B629Cu;
    // 0x4b62a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B629Cu, 0x4B62A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B62A4u;
label_4b62a4:
    // 0x4b62a4: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B62A4u;
    {
        const bool branch_taken_0x4b62a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4b62a4) {
            ctx->pc = 0x4B62DCu;
            goto label_4b62dc;
        }
    }
    ctx->pc = 0x4B62ACu;
    // 0x4b62ac: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x4b62acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b62b0: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B62B0u;
    {
        const bool branch_taken_0x4b62b0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x4B62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B62B0u;
        // 0x4b62b4: 0x8fa20168  lw          $v0, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b62b0) {
            ctx->pc = 0x4B62DCu;
            goto label_4b62dc;
        }
    }
    ctx->pc = 0x4B62B8u;
    // 0x4b62b8: 0x184000a6  blez        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x4B62B8u;
    {
        const bool branch_taken_0x4b62b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4B62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B62B8u;
        // 0x4b62bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b62b8) {
            ctx->pc = 0x4B6554u;
            goto label_4b6554;
        }
    }
    ctx->pc = 0x4B62C0u;
    // 0x4b62c0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x4b62c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x4b62c4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b62c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b62c8: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x4b62c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
    // 0x4b62cc: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B62CCu;
    SET_GPR_U32(ctx, 31, 0x4B62D4u);
    ctx->pc = 0x4B62D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B62CCu;
    // 0x4b62d0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B62CCu, 0x4B62D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B62D4u;
label_4b62d4:
    // 0x4b62d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b62d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4b62d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b62d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b62dc:
    // 0x4b62dc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B62DCu;
    SET_GPR_U32(ctx, 31, 0x4B62E4u);
    ctx->pc = 0x4B62E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B62DCu;
    // 0x4b62e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B62DCu, 0x4B62E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B62E4u;
label_4b62e4:
    // 0x4b62e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b62e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b62e8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B62E8u;
    SET_GPR_U32(ctx, 31, 0x4B62F0u);
    ctx->pc = 0x4B62ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B62E8u;
    // 0x4b62ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B62E8u, 0x4B62F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B62F0u;
label_4b62f0:
    // 0x4b62f0: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x4b62f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x4b62f4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b62f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b62f8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B62F8u;
    SET_GPR_U32(ctx, 31, 0x4B6300u);
    ctx->pc = 0x4B62FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B62F8u;
    // 0x4b62fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B62F8u, 0x4B6300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6300u;
label_4b6300:
    // 0x4b6300: 0x2183f  dsra32      $v1, $v0, 0
    ctx->pc = 0x4b6300u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b6304: 0x3c05fcc0  lui         $a1, 0xFCC0
    ctx->pc = 0x4b6304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64704 << 16));
    // 0x4b6308: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b6308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b630c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4b630cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x4b6310: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4b6310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4b6314: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4b6314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4b6318: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b6318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b631c: 0x438825  or          $s1, $v0, $v1
    ctx->pc = 0x4b631cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b6320: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x4b6320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b6324: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B6324u;
    {
        const bool branch_taken_0x4b6324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6324u;
        // 0x4b6328: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6324) {
            ctx->pc = 0x4B637Cu;
            goto label_4b637c;
        }
    }
    ctx->pc = 0x4B632Cu;
    // 0x4b632c: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x4b632cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x4b6330: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b6330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b6334: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B6334u;
    SET_GPR_U32(ctx, 31, 0x4B633Cu);
    ctx->pc = 0x4B6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6334u;
    // 0x4b6338: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B6334u, 0x4B633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B633Cu;
label_4b633c:
    // 0x4b633c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b633cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b6340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6344: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B6344u;
    SET_GPR_U32(ctx, 31, 0x4B634Cu);
    ctx->pc = 0x4B6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6344u;
    // 0x4b6348: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B6344u, 0x4B634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B634Cu;
label_4b634c:
    // 0x4b634c: 0x1c4001bb  bgtz        $v0, . + 4 + (0x1BB << 2)
    ctx->pc = 0x4B634Cu;
    {
        const bool branch_taken_0x4b634c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4B6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B634Cu;
        // 0x4b6350: 0x8fa301a0  lw          $v1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b634c) {
            ctx->pc = 0x4B6A3Cu;
            goto label_4b6a3c;
        }
    }
    ctx->pc = 0x4B6354u;
    // 0x4b6354: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b6354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6358: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B6358u;
    SET_GPR_U32(ctx, 31, 0x4B6360u);
    ctx->pc = 0x4B635Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6358u;
    // 0x4b635c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B6358u, 0x4B6360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6360u;
label_4b6360:
    // 0x4b6360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b6360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6364: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B6364u;
    SET_GPR_U32(ctx, 31, 0x4B636Cu);
    ctx->pc = 0x4B6368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6364u;
    // 0x4b6368: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B6364u, 0x4B636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B636Cu;
label_4b636c:
    // 0x4b636c: 0x44001af  bltz        $v0, . + 4 + (0x1AF << 2)
    ctx->pc = 0x4B636Cu;
    {
        const bool branch_taken_0x4b636c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B636Cu;
        // 0x4b6370: 0x8fa30164  lw          $v1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b636c) {
            ctx->pc = 0x4B6A2Cu;
            goto label_4b6a2c;
        }
    }
    ctx->pc = 0x4B6374u;
    // 0x4b6374: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x4B6374u;
    {
        const bool branch_taken_0x4b6374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6374u;
        // 0x4b6378: 0xdfb40198  ld          $s4, 0x198($sp) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6374) {
            ctx->pc = 0x4B655Cu;
            goto label_4b655c;
        }
    }
    ctx->pc = 0x4B637Cu;
label_4b637c:
    // 0x4b637c: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x4B637Cu;
    {
        const bool branch_taken_0x4b637c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B637Cu;
        // 0x4b6380: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b637c) {
            ctx->pc = 0x4B6464u;
            goto label_4b6464;
        }
    }
    ctx->pc = 0x4B6384u;
    // 0x4b6384: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b6384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4b6388: 0x24630bb0  addiu       $v1, $v1, 0xBB0
    ctx->pc = 0x4b6388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2992));
    // 0x4b638c: 0x34128048  ori         $s2, $zero, 0x8048
    ctx->pc = 0x4b638cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x4b6390: 0x1293fc  dsll32      $s2, $s2, 15
    ctx->pc = 0x4b6390u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 15));
    // 0x4b6394: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x4b6394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4b6398: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b6398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b639c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b639cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4b63a0: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x4b63a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b63a4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4b63a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4b63a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b63ac: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4B63ACu;
    SET_GPR_U32(ctx, 31, 0x4B63B4u);
    ctx->pc = 0x4B63B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B63ACu;
    // 0x4b63b0: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4B63ACu, 0x4B63B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B63B4u;
label_4b63b4:
    // 0x4b63b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b63b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b63b8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B63B8u;
    SET_GPR_U32(ctx, 31, 0x4B63C0u);
    ctx->pc = 0x4B63BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B63B8u;
    // 0x4b63bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B63B8u, 0x4B63C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B63C0u;
label_4b63c0:
    // 0x4b63c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B63C0u;
    {
        const bool branch_taken_0x4b63c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B63C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B63C0u;
        // 0x4b63c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b63c0) {
            ctx->pc = 0x4B63E4u;
            goto label_4b63e4;
        }
    }
    ctx->pc = 0x4B63C8u;
label_4b63c8:
    // 0x4b63c8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B63C8u;
    SET_GPR_U32(ctx, 31, 0x4B63D0u);
    ctx->pc = 0x4B63CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B63C8u;
    // 0x4b63cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B63C8u, 0x4B63D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B63D0u;
label_4b63d0:
    // 0x4b63d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b63d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b63d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b63d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b63d8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B63D8u;
    SET_GPR_U32(ctx, 31, 0x4B63E0u);
    ctx->pc = 0x4B63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B63D8u;
    // 0x4b63dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B63D8u, 0x4B63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B63E0u;
label_4b63e0:
    // 0x4b63e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b63e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b63e4:
    // 0x4b63e4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x4B63E4u;
    SET_GPR_U32(ctx, 31, 0x4B63ECu);
    ctx->pc = 0x4B63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B63E4u;
    // 0x4b63e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x4B63E4u, 0x4B63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B63ECu;
label_4b63ec:
    // 0x4b63ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b63ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b63f0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B63F0u;
    SET_GPR_U32(ctx, 31, 0x4B63F8u);
    ctx->pc = 0x4B63F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B63F0u;
    // 0x4b63f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B63F0u, 0x4B63F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B63F8u;
label_4b63f8:
    // 0x4b63f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b63f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b63fc: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B63FCu;
    SET_GPR_U32(ctx, 31, 0x4B6404u);
    ctx->pc = 0x4B6400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B63FCu;
    // 0x4b6400: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B63FCu, 0x4B6404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6404u;
label_4b6404:
    // 0x4b6404: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x4b6404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x4b6408: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b6408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b640c: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x4b640cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4b6410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b6410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6414: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4b6414u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x4b6418: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B6418u;
    SET_GPR_U32(ctx, 31, 0x4B6420u);
    ctx->pc = 0x4B641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6418u;
    // 0x4b641c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B6418u, 0x4B6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6420u;
label_4b6420:
    // 0x4b6420: 0x4420260  bltzl       $v0, . + 4 + (0x260 << 2)
    ctx->pc = 0x4B6420u;
    {
        const bool branch_taken_0x4b6420 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b6420) {
            ctx->pc = 0x4B6424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6420u;
            // 0x4b6424: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6DA4u;
            goto label_4b6da4;
        }
    }
    ctx->pc = 0x4B6428u;
    // 0x4b6428: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x4b6428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4b642c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4b642cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4b6430: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B6430u;
    SET_GPR_U32(ctx, 31, 0x4B6438u);
    ctx->pc = 0x4B6434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6430u;
    // 0x4b6434: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B6430u, 0x4B6438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6438u;
label_4b6438:
    // 0x4b6438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b6438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b643c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B643Cu;
    SET_GPR_U32(ctx, 31, 0x4B6444u);
    ctx->pc = 0x4B6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B643Cu;
    // 0x4b6440: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B643Cu, 0x4B6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6444u;
label_4b6444:
    // 0x4b6444: 0x4400096  bltz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x4B6444u;
    {
        const bool branch_taken_0x4b6444 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6444u;
        // 0x4b6448: 0x8fa30160  lw          $v1, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6444) {
            ctx->pc = 0x4B66A0u;
            goto label_4b66a0;
        }
    }
    ctx->pc = 0x4B644Cu;
    // 0x4b644c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b644cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4b6450: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x4b6450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x4b6454: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x4B6454u;
    {
        const bool branch_taken_0x4b6454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6454u;
        // 0x4b6458: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6454) {
            ctx->pc = 0x4B63C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b63c8;
        }
    }
    ctx->pc = 0x4B645Cu;
    // 0x4b645c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x4B645Cu;
    {
        const bool branch_taken_0x4b645c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B645Cu;
        // 0x4b6460: 0x8fa30164  lw          $v1, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b645c) {
            ctx->pc = 0x4B6558u;
            goto label_4b6558;
        }
    }
    ctx->pc = 0x4B6464u;
label_4b6464:
    // 0x4b6464: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b6464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4b6468: 0x24630bb0  addiu       $v1, $v1, 0xBB0
    ctx->pc = 0x4b6468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2992));
    // 0x4b646c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4b646cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b6470: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x4b6470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4b6474: 0x24120030  addiu       $s2, $zero, 0x30
    ctx->pc = 0x4b6474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b6478: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4b6478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4b647c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4b647cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b6480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b6484: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B6484u;
    SET_GPR_U32(ctx, 31, 0x4B648Cu);
    ctx->pc = 0x4B6488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6484u;
    // 0x4b6488: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B6484u, 0x4B648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B648Cu;
label_4b648c:
    // 0x4b648c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B648Cu;
    {
        const bool branch_taken_0x4b648c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B648Cu;
        // 0x4b6490: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b648c) {
            ctx->pc = 0x4B64B0u;
            goto label_4b64b0;
        }
    }
    ctx->pc = 0x4B6494u;
    // 0x4b6494: 0x0  nop
    ctx->pc = 0x4b6494u;
    // NOP
label_4b6498:
    // 0x4b6498: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x4b6498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x4b649c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b649cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b64a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b64a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b64a4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B64A4u;
    SET_GPR_U32(ctx, 31, 0x4B64ACu);
    ctx->pc = 0x4B64A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B64A4u;
    // 0x4b64a8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B64A4u, 0x4B64ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B64ACu;
label_4b64ac:
    // 0x4b64ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b64acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b64b0:
    // 0x4b64b0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x4B64B0u;
    SET_GPR_U32(ctx, 31, 0x4B64B8u);
    ctx->pc = 0x4B64B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B64B0u;
    // 0x4b64b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x4B64B0u, 0x4B64B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B64B8u;
label_4b64b8:
    // 0x4b64b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b64b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b64bc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B64BCu;
    SET_GPR_U32(ctx, 31, 0x4B64C4u);
    ctx->pc = 0x4B64C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B64BCu;
    // 0x4b64c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B64BCu, 0x4B64C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B64C4u;
label_4b64c4:
    // 0x4b64c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b64c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b64c8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B64C8u;
    SET_GPR_U32(ctx, 31, 0x4B64D0u);
    ctx->pc = 0x4B64CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B64C8u;
    // 0x4b64cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B64C8u, 0x4B64D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B64D0u;
label_4b64d0:
    // 0x4b64d0: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x4b64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x4b64d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b64d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b64d8: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x4b64d8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4b64dc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4b64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b64e0: 0x1662ffed  bne         $s3, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4B64E0u;
    {
        const bool branch_taken_0x4b64e0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B64E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B64E0u;
        // 0x4b64e4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b64e0) {
            ctx->pc = 0x4B6498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b6498;
        }
    }
    ctx->pc = 0x4B64E8u;
    // 0x4b64e8: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4b64e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b64ec: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4b64ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4b64f0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B64F0u;
    SET_GPR_U32(ctx, 31, 0x4B64F8u);
    ctx->pc = 0x4B64F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B64F0u;
    // 0x4b64f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B64F0u, 0x4B64F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B64F8u;
label_4b64f8:
    // 0x4b64f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b64f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b64fc: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B64FCu;
    SET_GPR_U32(ctx, 31, 0x4B6504u);
    ctx->pc = 0x4B6500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B64FCu;
    // 0x4b6500: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B64FCu, 0x4B6504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6504u;
label_4b6504:
    // 0x4b6504: 0x5c400067  bgtzl       $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x4B6504u;
    {
        const bool branch_taken_0x4b6504 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4b6504) {
            ctx->pc = 0x4B6508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6504u;
            // 0x4b6508: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B66A4u;
            goto label_4b66a4;
        }
    }
    ctx->pc = 0x4B650Cu;
    // 0x4b650c: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x4b650cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4b6510: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4b6510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4b6514: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B6514u;
    SET_GPR_U32(ctx, 31, 0x4B651Cu);
    ctx->pc = 0x4B6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6514u;
    // 0x4b6518: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B6514u, 0x4B651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B651Cu;
label_4b651c:
    // 0x4b651c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b651cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6520: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B6520u;
    SET_GPR_U32(ctx, 31, 0x4B6528u);
    ctx->pc = 0x4B6524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6520u;
    // 0x4b6524: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B6520u, 0x4B6528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6528u;
label_4b6528:
    // 0x4b6528: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B6528u;
    {
        const bool branch_taken_0x4b6528 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6528u;
        // 0x4b652c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6528) {
            ctx->pc = 0x4B6554u;
            goto label_4b6554;
        }
    }
    ctx->pc = 0x4B6530u;
label_4b6530:
    // 0x4b6530: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x4b6530u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x4b6534: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x4b6534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b6538: 0x0  nop
    ctx->pc = 0x4b6538u;
    // NOP
    // 0x4b653c: 0x0  nop
    ctx->pc = 0x4b653cu;
    // NOP
    // 0x4b6540: 0x0  nop
    ctx->pc = 0x4b6540u;
    // NOP
    // 0x4b6544: 0x1052fffa  beq         $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B6544u;
    {
        const bool branch_taken_0x4b6544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x4b6544) {
            ctx->pc = 0x4B6530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b6530;
        }
    }
    ctx->pc = 0x4B654Cu;
    // 0x4b654c: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x4B654Cu;
    {
        const bool branch_taken_0x4b654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B654Cu;
        // 0x4b6550: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b654c) {
            ctx->pc = 0x4B6DA4u;
            goto label_4b6da4;
        }
    }
    ctx->pc = 0x4B6554u;
label_4b6554:
    // 0x4b6554: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x4b6554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_4b6558:
    // 0x4b6558: 0xdfb40198  ld          $s4, 0x198($sp)
    ctx->pc = 0x4b6558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_4b655c:
    // 0x4b655c: 0x8fb6016c  lw          $s6, 0x16C($sp)
    ctx->pc = 0x4b655cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x4b6560: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x4b6560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
    // 0x4b6564: 0x8fb501a0  lw          $s5, 0x1A0($sp)
    ctx->pc = 0x4b6564u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4b6568:
    // 0x4b6568: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x4b6568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x4b656c: 0x460005e  bltz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x4B656Cu;
    {
        const bool branch_taken_0x4b656c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B656Cu;
        // 0x4b6570: 0x2ac2000f  slti        $v0, $s6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b656c) {
            ctx->pc = 0x4B66E8u;
            goto label_4b66e8;
        }
    }
    ctx->pc = 0x4B6574u;
    // 0x4b6574: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x4B6574u;
    {
        const bool branch_taken_0x4b6574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6574u;
        // 0x4b6578: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6574) {
            ctx->pc = 0x4B66E8u;
            goto label_4b66e8;
        }
    }
    ctx->pc = 0x4B657Cu;
    // 0x4b657c: 0x1618c0  sll         $v1, $s6, 3
    ctx->pc = 0x4b657cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x4b6580: 0x24420bb0  addiu       $v0, $v0, 0xBB0
    ctx->pc = 0x4b6580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2992));
    // 0x4b6584: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x4b6584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x4b6588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4b6588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b658c: 0x4810011  bgez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B658Cu;
    {
        const bool branch_taken_0x4b658c = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4B6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B658Cu;
        // 0x4b6590: 0xdc710000  ld          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b658c) {
            ctx->pc = 0x4B65D4u;
            goto label_4b65d4;
        }
    }
    ctx->pc = 0x4B6594u;
    // 0x4b6594: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x4b6594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b6598: 0x1c40000f  bgtz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4B6598u;
    {
        const bool branch_taken_0x4b6598 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4B659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6598u;
        // 0x4b659c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6598) {
            ctx->pc = 0x4B65D8u;
            goto label_4b65d8;
        }
    }
    ctx->pc = 0x4B65A0u;
    // 0x4b65a0: 0x4420124  bltzl       $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x4B65A0u;
    {
        const bool branch_taken_0x4b65a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b65a0) {
            ctx->pc = 0x4B65A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B65A0u;
            // 0x4b65a4: 0x4b027  nor         $s6, $zero, $a0 (Delay Slot)
            SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6A34u;
            goto label_4b6a34;
        }
    }
    ctx->pc = 0x4B65A8u;
    // 0x4b65a8: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x4b65a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x4b65ac: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b65acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b65b0: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B65B0u;
    SET_GPR_U32(ctx, 31, 0x4B65B8u);
    ctx->pc = 0x4B65B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B65B0u;
    // 0x4b65b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B65B0u, 0x4B65B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B65B8u;
label_4b65b8:
    // 0x4b65b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b65b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b65bc: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B65BCu;
    SET_GPR_U32(ctx, 31, 0x4B65C4u);
    ctx->pc = 0x4B65C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B65BCu;
    // 0x4b65c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B65BCu, 0x4B65C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B65C4u;
label_4b65c4:
    // 0x4b65c4: 0x18400119  blez        $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x4B65C4u;
    {
        const bool branch_taken_0x4b65c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4B65C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B65C4u;
        // 0x4b65c8: 0x8fa301a0  lw          $v1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b65c4) {
            ctx->pc = 0x4B6A2Cu;
            goto label_4b6a2c;
        }
    }
    ctx->pc = 0x4B65CCu;
    // 0x4b65cc: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x4B65CCu;
    {
        const bool branch_taken_0x4b65cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B65D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B65CCu;
        // 0x4b65d0: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b65cc) {
            ctx->pc = 0x4B6A40u;
            goto label_4b6a40;
        }
    }
    ctx->pc = 0x4B65D4u;
label_4b65d4:
    // 0x4b65d4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4b65d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b65d8:
    // 0x4b65d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4B65D8u;
    {
        const bool branch_taken_0x4b65d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B65D8u;
        // 0x4b65dc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b65d8) {
            ctx->pc = 0x4B6608u;
            goto label_4b6608;
        }
    }
    ctx->pc = 0x4B65E0u;
label_4b65e0:
    // 0x4b65e0: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x4b65e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x4b65e4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4b65e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4b65e8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B65E8u;
    SET_GPR_U32(ctx, 31, 0x4B65F0u);
    ctx->pc = 0x4B65ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B65E8u;
    // 0x4b65ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B65E8u, 0x4B65F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B65F0u;
label_4b65f0:
    // 0x4b65f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b65f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b65f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b65f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b65f8: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B65F8u;
    SET_GPR_U32(ctx, 31, 0x4B6600u);
    ctx->pc = 0x4B65FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B65F8u;
    // 0x4b65fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B65F8u, 0x4B6600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6600u;
label_4b6600:
    // 0x4b6600: 0x104001e8  beqz        $v0, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x4B6600u;
    {
        const bool branch_taken_0x4b6600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6600u;
        // 0x4b6604: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6600) {
            ctx->pc = 0x4B6DA4u;
            goto label_4b6da4;
        }
    }
    ctx->pc = 0x4B6608u;
label_4b6608:
    // 0x4b6608: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b6608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b660c: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4B660Cu;
    SET_GPR_U32(ctx, 31, 0x4B6614u);
    ctx->pc = 0x4B6610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B660Cu;
    // 0x4b6610: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4B660Cu, 0x4B6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6614u;
label_4b6614:
    // 0x4b6614: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x4B6614u;
    SET_GPR_U32(ctx, 31, 0x4B661Cu);
    ctx->pc = 0x4B6618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6614u;
    // 0x4b6618: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x4B6614u, 0x4B661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B661Cu;
label_4b661c:
    // 0x4b661c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b661cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6620: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4B6620u;
    SET_GPR_U32(ctx, 31, 0x4B6628u);
    ctx->pc = 0x4B6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6620u;
    // 0x4b6624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4B6620u, 0x4B6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6628u;
label_4b6628:
    // 0x4b6628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b6628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b662c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4B662Cu;
    SET_GPR_U32(ctx, 31, 0x4B6634u);
    ctx->pc = 0x4B6630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B662Cu;
    // 0x4b6630: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4B662Cu, 0x4B6634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6634u;
label_4b6634:
    // 0x4b6634: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b6634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6638: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4B6638u;
    SET_GPR_U32(ctx, 31, 0x4B6640u);
    ctx->pc = 0x4B663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6638u;
    // 0x4b663c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4B6638u, 0x4B6640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6640u;
label_4b6640:
    // 0x4b6640: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x4b6640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x4b6644: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b6644u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6648: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x4b6648u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4b664c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x4b664cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b6650: 0x1663ffe3  bne         $s3, $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4B6650u;
    {
        const bool branch_taken_0x4b6650 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6650u;
        // 0x4b6654: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6650) {
            ctx->pc = 0x4B65E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b65e0;
        }
    }
    ctx->pc = 0x4B6658u;
    // 0x4b6658: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b6658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b665c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4B665Cu;
    SET_GPR_U32(ctx, 31, 0x4B6664u);
    ctx->pc = 0x4B6660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B665Cu;
    // 0x4b6660: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4B665Cu, 0x4B6664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6664u;
label_4b6664:
    // 0x4b6664: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4b6664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6668: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b6668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b666c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B666Cu;
    SET_GPR_U32(ctx, 31, 0x4B6674u);
    ctx->pc = 0x4B6670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B666Cu;
    // 0x4b6670: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B666Cu, 0x4B6674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6674u;
label_4b6674:
    // 0x4b6674: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4B6674u;
    {
        const bool branch_taken_0x4b6674 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4B6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6674u;
        // 0x4b6678: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6674) {
            ctx->pc = 0x4B66A8u;
            goto label_4b66a8;
        }
    }
    ctx->pc = 0x4B667Cu;
    // 0x4b667c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4b667cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6680: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4B6680u;
    SET_GPR_U32(ctx, 31, 0x4B6688u);
    ctx->pc = 0x4B6684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6680u;
    // 0x4b6684: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4B6680u, 0x4B6688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6688u;
label_4b6688:
    // 0x4b6688: 0x144001c6  bnez        $v0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x4B6688u;
    {
        const bool branch_taken_0x4b6688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6688u;
        // 0x4b668c: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6688) {
            ctx->pc = 0x4B6DA4u;
            goto label_4b6da4;
        }
    }
    ctx->pc = 0x4B6690u;
    // 0x4b6690: 0x104001c4  beqz        $v0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x4B6690u;
    {
        const bool branch_taken_0x4b6690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6690u;
        // 0x4b6694: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6690) {
            ctx->pc = 0x4B6DA4u;
            goto label_4b6da4;
        }
    }
    ctx->pc = 0x4B6698u;
    // 0x4b6698: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6698u;
    {
        const bool branch_taken_0x4b6698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6698u;
        // 0x4b669c: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6698) {
            ctx->pc = 0x4B66B0u;
            goto label_4b66b0;
        }
    }
    ctx->pc = 0x4B66A0u;
label_4b66a0:
    // 0x4b66a0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4b66a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4b66a4:
    // 0x4b66a4: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x4b66a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_4b66a8:
    // 0x4b66a8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4b66a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4b66ac: 0x0  nop
    ctx->pc = 0x4b66acu;
    // NOP
label_4b66b0:
    // 0x4b66b0: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x4b66b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_4b66b4:
    // 0x4b66b4: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x4b66b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b66b8: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B66B8u;
    {
        const bool branch_taken_0x4b66b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4B66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B66B8u;
        // 0x4b66bc: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b66b8) {
            ctx->pc = 0x4B66D8u;
            goto label_4b66d8;
        }
    }
    ctx->pc = 0x4B66C0u;
    // 0x4b66c0: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x4b66c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x4b66c4: 0x56a4fffb  bnel        $s5, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4B66C4u;
    {
        const bool branch_taken_0x4b66c4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        if (branch_taken_0x4b66c4) {
            ctx->pc = 0x4B66C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B66C4u;
            // 0x4b66c8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B66B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b66b4;
        }
    }
    ctx->pc = 0x4B66CCu;
    // 0x4b66cc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4b66ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4b66d0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4b66d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x4b66d4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4b66d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4b66d8:
    // 0x4b66d8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4b66d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4b66dc: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x4b66dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b66e0: 0x100001b0  b           . + 4 + (0x1B0 << 2)
    ctx->pc = 0x4B66E0u;
    {
        const bool branch_taken_0x4b66e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B66E0u;
        // 0x4b66e4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b66e0) {
            ctx->pc = 0x4B6DA4u;
            goto label_4b6da4;
        }
    }
    ctx->pc = 0x4B66E8u;
label_4b66e8:
    // 0x4b66e8: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x4b66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x4b66ec: 0x8fb10158  lw          $s1, 0x158($sp)
    ctx->pc = 0x4b66ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x4b66f0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4B66F0u;
    {
        const bool branch_taken_0x4b66f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B66F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B66F0u;
        // 0x4b66f4: 0x8fb2015c  lw          $s2, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b66f0) {
            ctx->pc = 0x4B67A4u;
            goto label_4b67a4;
        }
    }
    ctx->pc = 0x4B66F8u;
    // 0x4b66f8: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x4b66f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x4b66fc: 0x28840002  slti        $a0, $a0, 0x2
    ctx->pc = 0x4b66fcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4b6700: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B6700u;
    {
        const bool branch_taken_0x4b6700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6700u;
        // 0x4b6704: 0xafa401a4  sw          $a0, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6700) {
            ctx->pc = 0x4B6724u;
            goto label_4b6724;
        }
    }
    ctx->pc = 0x4B6708u;
    // 0x4b6708: 0x8fa20184  lw          $v0, 0x184($sp)
    ctx->pc = 0x4b6708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x4b670c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4B670Cu;
    {
        const bool branch_taken_0x4b670c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B670Cu;
        // 0x4b6710: 0x24730433  addiu       $s3, $v1, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b670c) {
            ctx->pc = 0x4B6778u;
            goto label_4b6778;
        }
    }
    ctx->pc = 0x4B6714u;
    // 0x4b6714: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x4b6714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x4b6718: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x4b6718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x4b671c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4B671Cu;
    {
        const bool branch_taken_0x4b671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B671Cu;
        // 0x4b6720: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b671c) {
            ctx->pc = 0x4B6778u;
            goto label_4b6778;
        }
    }
    ctx->pc = 0x4B6724u;
label_4b6724:
    // 0x4b6724: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x4b6724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b6728: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x4b6728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x4b672c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x4b672cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4b6730: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x4b6730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4b6734: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B6734u;
    {
        const bool branch_taken_0x4b6734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6734u;
        // 0x4b6738: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6734) {
            ctx->pc = 0x4B6744u;
            goto label_4b6744;
        }
    }
    ctx->pc = 0x4B673Cu;
    // 0x4b673c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B673Cu;
    {
        const bool branch_taken_0x4b673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B673Cu;
        // 0x4b6740: 0x909023  subu        $s2, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b673c) {
            ctx->pc = 0x4B6760u;
            goto label_4b6760;
        }
    }
    ctx->pc = 0x4B6744u;
label_4b6744:
    // 0x4b6744: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b6744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6748: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x4b6748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x4b674c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x4b674cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4b6750: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4b6750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4b6754: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4b6754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4b6758: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x4b6758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x4b675c: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x4b675cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
label_4b6760:
    // 0x4b6760: 0x8fb30160  lw          $s3, 0x160($sp)
    ctx->pc = 0x4b6760u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b6764: 0x6610005  bgez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6764u;
    {
        const bool branch_taken_0x4b6764 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x4B6768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6764u;
        // 0x4b6768: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6764) {
            ctx->pc = 0x4B677Cu;
            goto label_4b677c;
        }
    }
    ctx->pc = 0x4B676Cu;
    // 0x4b676c: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x4b676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x4b6770: 0x938823  subu        $s1, $a0, $s3
    ctx->pc = 0x4b6770u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x4b6774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b6774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b6778:
    // 0x4b6778: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4b6778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4b677c:
    // 0x4b677c: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B677Cu;
    SET_GPR_U32(ctx, 31, 0x4B6784u);
    ctx->pc = 0x4B6780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B677Cu;
    // 0x4b6780: 0x3d3f021  addu        $fp, $fp, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B677Cu, 0x4B6784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6784u;
label_4b6784:
    // 0x4b6784: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x4b6784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x4b6788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b6788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b678c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b678cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b6790: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x4b6790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x4b6794: 0xc12d018  jal         func_4B4060
    ctx->pc = 0x4B6794u;
    SET_GPR_U32(ctx, 31, 0x4B679Cu);
    ctx->pc = 0x4B6798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6794u;
    // 0x4b6798: 0xafa30158  sw          $v1, 0x158($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4060u, 0x4B6794u, 0x4B679Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B679Cu;
label_4b679c:
    // 0x4b679c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B679Cu;
    {
        const bool branch_taken_0x4b679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B679Cu;
        // 0x4b67a0: 0xafa20190  sw          $v0, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b679c) {
            ctx->pc = 0x4B67B0u;
            goto label_4b67b0;
        }
    }
    ctx->pc = 0x4B67A4u;
label_4b67a4:
    // 0x4b67a4: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x4b67a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x4b67a8: 0x28840002  slti        $a0, $a0, 0x2
    ctx->pc = 0x4b67a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4b67ac: 0xafa401a4  sw          $a0, 0x1A4($sp)
    ctx->pc = 0x4b67acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 4));
label_4b67b0:
    // 0x4b67b0: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x4B67B0u;
    {
        const bool branch_taken_0x4b67b0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x4B67B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B67B0u;
        // 0x4b67b4: 0x8fa3015c  lw          $v1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b67b0) {
            ctx->pc = 0x4B67E0u;
            goto label_4b67e0;
        }
    }
    ctx->pc = 0x4B67B8u;
    // 0x4b67b8: 0x1bc00009  blez        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B67B8u;
    {
        const bool branch_taken_0x4b67b8 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x4B67BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B67B8u;
        // 0x4b67bc: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b67b8) {
            ctx->pc = 0x4B67E0u;
            goto label_4b67e0;
        }
    }
    ctx->pc = 0x4B67C0u;
    // 0x4b67c0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x4b67c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4b67c4: 0x222980b  movn        $s3, $s1, $v0
    ctx->pc = 0x4b67c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 17));
    // 0x4b67c8: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x4b67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x4b67cc: 0x3d3f023  subu        $fp, $fp, $s3
    ctx->pc = 0x4b67ccu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x4b67d0: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x4b67d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x4b67d4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x4b67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4b67d8: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x4b67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
    // 0x4b67dc: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x4b67dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_4b67e0:
    // 0x4b67e0: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x4B67E0u;
    {
        const bool branch_taken_0x4b67e0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4B67E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B67E0u;
        // 0x4b67e4: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b67e0) {
            ctx->pc = 0x4B6848u;
            goto label_4b6848;
        }
    }
    ctx->pc = 0x4B67E8u;
    // 0x4b67e8: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4B67E8u;
    {
        const bool branch_taken_0x4b67e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B67E8u;
        // 0x4b67ec: 0x8fa5015c  lw          $a1, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b67e8) {
            ctx->pc = 0x4B683Cu;
            goto label_4b683c;
        }
    }
    ctx->pc = 0x4B67F0u;
    // 0x4b67f0: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x4B67F0u;
    {
        const bool branch_taken_0x4b67f0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4B67F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B67F0u;
        // 0x4b67f4: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b67f0) {
            ctx->pc = 0x4B681Cu;
            goto label_4b681c;
        }
    }
    ctx->pc = 0x4B67F8u;
    // 0x4b67f8: 0xc12d0b4  jal         func_4B42D0
    ctx->pc = 0x4B67F8u;
    SET_GPR_U32(ctx, 31, 0x4B6800u);
    ctx->pc = 0x4B67FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B67F8u;
    // 0x4b67fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B42D0u, 0x4B67F8u, 0x4B6800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6800u;
label_4b6800:
    // 0x4b6800: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x4b6800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x4b6804: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4b6804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6808: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4b6808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x4b680c: 0xc12d026  jal         func_4B4098
    ctx->pc = 0x4B680Cu;
    SET_GPR_U32(ctx, 31, 0x4B6814u);
    ctx->pc = 0x4B6810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B680Cu;
    // 0x4b6810: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4098u, 0x4B680Cu, 0x4B6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6814u;
label_4b6814:
    // 0x4b6814: 0xafb70188  sw          $s7, 0x188($sp)
    ctx->pc = 0x4b6814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 23));
    // 0x4b6818: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b6818u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b681c:
    // 0x4b681c: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x4b681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x4b6820: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x4b6820u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4b6824: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B6824u;
    {
        const bool branch_taken_0x4b6824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6824u;
        // 0x4b6828: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6824) {
            ctx->pc = 0x4B6848u;
            goto label_4b6848;
        }
    }
    ctx->pc = 0x4B682Cu;
    // 0x4b682c: 0xc12d0b4  jal         func_4B42D0
    ctx->pc = 0x4B682Cu;
    SET_GPR_U32(ctx, 31, 0x4B6834u);
    ctx->pc = 0x4B6830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B682Cu;
    // 0x4b6830: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B42D0u, 0x4B682Cu, 0x4B6834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6834u;
label_4b6834:
    // 0x4b6834: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B6834u;
    {
        const bool branch_taken_0x4b6834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6834u;
        // 0x4b6838: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6834) {
            ctx->pc = 0x4B6848u;
            goto label_4b6848;
        }
    }
    ctx->pc = 0x4B683Cu;
label_4b683c:
    // 0x4b683c: 0xc12d0b4  jal         func_4B42D0
    ctx->pc = 0x4B683Cu;
    SET_GPR_U32(ctx, 31, 0x4B6844u);
    ctx->pc = 0x4B6840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B683Cu;
    // 0x4b6840: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B42D0u, 0x4B683Cu, 0x4B6844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6844u;
label_4b6844:
    // 0x4b6844: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b6844u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6848:
    // 0x4b6848: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x4b6848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b684c: 0xc12d018  jal         func_4B4060
    ctx->pc = 0x4B684Cu;
    SET_GPR_U32(ctx, 31, 0x4B6854u);
    ctx->pc = 0x4B6850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B684Cu;
    // 0x4b6850: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4060u, 0x4B684Cu, 0x4B6854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6854u;
label_4b6854:
    // 0x4b6854: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x4b6854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x4b6858: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6858u;
    {
        const bool branch_taken_0x4b6858 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4B685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6858u;
        // 0x4b685c: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6858) {
            ctx->pc = 0x4B6870u;
            goto label_4b6870;
        }
    }
    ctx->pc = 0x4B6860u;
    // 0x4b6860: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b6860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6864: 0xc12d0b4  jal         func_4B42D0
    ctx->pc = 0x4B6864u;
    SET_GPR_U32(ctx, 31, 0x4B686Cu);
    ctx->pc = 0x4B6868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6864u;
    // 0x4b6868: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B42D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B42D0u, 0x4B6864u, 0x4B686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B686Cu;
label_4b686c:
    // 0x4b686c: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x4b686cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_4b6870:
    // 0x4b6870: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x4b6870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x4b6874: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4B6874u;
    {
        const bool branch_taken_0x4b6874 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6874u;
        // 0x4b6878: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6874) {
            ctx->pc = 0x4B68DCu;
            goto label_4b68dc;
        }
    }
    ctx->pc = 0x4B687Cu;
    // 0x4b687c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b687cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b6880: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b6880u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b6884: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B6884u;
    {
        const bool branch_taken_0x4b6884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b6884) {
            ctx->pc = 0x4B6888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6884u;
            // 0x4b6888: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B68DCu;
            goto label_4b68dc;
        }
    }
    ctx->pc = 0x4B688Cu;
    // 0x4b688c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4b688cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6890: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4b6890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4b6894: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4b6894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4b6898: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b6898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b689c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b689cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b68a0: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4B68A0u;
    {
        const bool branch_taken_0x4b68a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b68a0) {
            ctx->pc = 0x4B68A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B68A0u;
            // 0x4b68a4: 0xafa0017c  sw          $zero, 0x17C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B68DCu;
            goto label_4b68dc;
        }
    }
    ctx->pc = 0x4B68A8u;
    // 0x4b68a8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4b68a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b68ac: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x4b68acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x4b68b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b68b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b68b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b68b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b68b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B68B8u;
    {
        const bool branch_taken_0x4b68b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B68B8u;
        // 0x4b68bc: 0x8fa20158  lw          $v0, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b68b8) {
            ctx->pc = 0x4B68D8u;
            goto label_4b68d8;
        }
    }
    ctx->pc = 0x4B68C0u;
    // 0x4b68c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b68c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b68c4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x4b68c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x4b68c8: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x4b68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x4b68cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4b68d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B68D0u;
    {
        const bool branch_taken_0x4b68d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B68D0u;
        // 0x4b68d4: 0xafa20158  sw          $v0, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b68d0) {
            ctx->pc = 0x4B68DCu;
            goto label_4b68dc;
        }
    }
    ctx->pc = 0x4B68D8u;
label_4b68d8:
    // 0x4b68d8: 0xafa0017c  sw          $zero, 0x17C($sp)
    ctx->pc = 0x4b68d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 0));
label_4b68dc:
    // 0x4b68dc: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x4b68dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x4b68e0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B68E0u;
    {
        const bool branch_taken_0x4b68e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B68E0u;
        // 0x4b68e4: 0x8fa3018c  lw          $v1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b68e0) {
            ctx->pc = 0x4B6908u;
            goto label_4b6908;
        }
    }
    ctx->pc = 0x4B68E8u;
    // 0x4b68e8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4b68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4b68ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b68f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4b68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4b68f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b68f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4b68f8: 0xc12cfc6  jal         func_4B3F18
    ctx->pc = 0x4B68F8u;
    SET_GPR_U32(ctx, 31, 0x4B6900u);
    ctx->pc = 0x4B68FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B68F8u;
    // 0x4b68fc: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3F18u, 0x4B68F8u, 0x4B6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6900u;
label_4b6900:
    // 0x4b6900: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B6900u;
    {
        const bool branch_taken_0x4b6900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6900u;
        // 0x4b6904: 0x3c21023  subu        $v0, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6900) {
            ctx->pc = 0x4B690Cu;
            goto label_4b690c;
        }
    }
    ctx->pc = 0x4B6908u;
label_4b6908:
    // 0x4b6908: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x4b6908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_4b690c:
    // 0x4b690c: 0x3053001f  andi        $s3, $v0, 0x1F
    ctx->pc = 0x4b690cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4b6910: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B6910u;
    {
        const bool branch_taken_0x4b6910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6910u;
        // 0x4b6914: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6910) {
            ctx->pc = 0x4B691Cu;
            goto label_4b691c;
        }
    }
    ctx->pc = 0x4B6918u;
    // 0x4b6918: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x4b6918u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4b691c:
    // 0x4b691c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x4b691cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x4b6920: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B6920u;
    {
        const bool branch_taken_0x4b6920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6920u;
        // 0x4b6924: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6920) {
            ctx->pc = 0x4B6944u;
            goto label_4b6944;
        }
    }
    ctx->pc = 0x4B6928u;
    // 0x4b6928: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x4b6928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x4b692c: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x4b692cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x4b6930: 0x3d3f021  addu        $fp, $fp, $s3
    ctx->pc = 0x4b6930u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x4b6934: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x4b6934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x4b6938: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x4b6938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x4b693c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B693Cu;
    {
        const bool branch_taken_0x4b693c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B693Cu;
        // 0x4b6940: 0xafa40158  sw          $a0, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b693c) {
            ctx->pc = 0x4B6960u;
            goto label_4b6960;
        }
    }
    ctx->pc = 0x4B6944u;
label_4b6944:
    // 0x4b6944: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B6944u;
    {
        const bool branch_taken_0x4b6944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6944u;
        // 0x4b6948: 0x8fa20158  lw          $v0, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6944) {
            ctx->pc = 0x4B6960u;
            goto label_4b6960;
        }
    }
    ctx->pc = 0x4B694Cu;
    // 0x4b694c: 0x2673001c  addiu       $s3, $s3, 0x1C
    ctx->pc = 0x4b694cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x4b6950: 0x3d3f021  addu        $fp, $fp, $s3
    ctx->pc = 0x4b6950u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
    // 0x4b6954: 0x2338821  addu        $s1, $s1, $s3
    ctx->pc = 0x4b6954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x4b6958: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4b6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x4b695c: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x4b695cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_4b6960:
    // 0x4b6960: 0x8fa30158  lw          $v1, 0x158($sp)
    ctx->pc = 0x4b6960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x4b6964: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B6964u;
    {
        const bool branch_taken_0x4b6964 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4B6968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6964u;
        // 0x4b6968: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6964) {
            ctx->pc = 0x4B6978u;
            goto label_4b6978;
        }
    }
    ctx->pc = 0x4B696Cu;
    // 0x4b696c: 0xc12d0d2  jal         func_4B4348
    ctx->pc = 0x4B696Cu;
    SET_GPR_U32(ctx, 31, 0x4B6974u);
    ctx->pc = 0x4B6970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B696Cu;
    // 0x4b6970: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4348u, 0x4B696Cu, 0x4B6974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6974u;
label_4b6974:
    // 0x4b6974: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b6974u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6978:
    // 0x4b6978: 0x1bc00004  blez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B6978u;
    {
        const bool branch_taken_0x4b6978 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x4B697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6978u;
        // 0x4b697c: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6978) {
            ctx->pc = 0x4B698Cu;
            goto label_4b698c;
        }
    }
    ctx->pc = 0x4B6980u;
    // 0x4b6980: 0xc12d0d2  jal         func_4B4348
    ctx->pc = 0x4B6980u;
    SET_GPR_U32(ctx, 31, 0x4B6988u);
    ctx->pc = 0x4B6984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6980u;
    // 0x4b6984: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4348u, 0x4B6980u, 0x4B6988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6988u;
label_4b6988:
    // 0x4b6988: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x4b6988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_4b698c:
    // 0x4b698c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x4b698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x4b6990: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4B6990u;
    {
        const bool branch_taken_0x4b6990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6990u;
        // 0x4b6994: 0x8fa5018c  lw          $a1, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6990) {
            ctx->pc = 0x4B69E4u;
            goto label_4b69e4;
        }
    }
    ctx->pc = 0x4B6998u;
    // 0x4b6998: 0xc12d132  jal         func_4B44C8
    ctx->pc = 0x4B6998u;
    SET_GPR_U32(ctx, 31, 0x4B69A0u);
    ctx->pc = 0x4B699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6998u;
    // 0x4b699c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B44C8u, 0x4B6998u, 0x4B69A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B69A0u;
label_4b69a0:
    // 0x4b69a0: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4B69A0u;
    {
        const bool branch_taken_0x4b69a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B69A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B69A0u;
        // 0x4b69a4: 0x8fa40160  lw          $a0, 0x160($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b69a0) {
            ctx->pc = 0x4B69E8u;
            goto label_4b69e8;
        }
    }
    ctx->pc = 0x4B69A8u;
    // 0x4b69a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4b69a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b69ac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4b69acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b69b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b69b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b69b4: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B69B4u;
    SET_GPR_U32(ctx, 31, 0x4B69BCu);
    ctx->pc = 0x4B69B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B69B4u;
    // 0x4b69b8: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B69B4u, 0x4B69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B69BCu;
label_4b69bc:
    // 0x4b69bc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b69bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b69c0: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x4b69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x4b69c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B69C4u;
    {
        const bool branch_taken_0x4b69c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B69C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B69C4u;
        // 0x4b69c8: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b69c4) {
            ctx->pc = 0x4B69DCu;
            goto label_4b69dc;
        }
    }
    ctx->pc = 0x4B69CCu;
    // 0x4b69cc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4b69ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b69d0: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B69D0u;
    SET_GPR_U32(ctx, 31, 0x4B69D8u);
    ctx->pc = 0x4B69D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B69D0u;
    // 0x4b69d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B69D0u, 0x4B69D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B69D8u;
label_4b69d8:
    // 0x4b69d8: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x4b69d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_4b69dc:
    // 0x4b69dc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x4b69dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x4b69e0: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x4b69e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
label_4b69e4:
    // 0x4b69e4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x4b69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_4b69e8:
    // 0x4b69e8: 0x5c800019  bgtzl       $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4B69E8u;
    {
        const bool branch_taken_0x4b69e8 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x4b69e8) {
            ctx->pc = 0x4B69ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B69E8u;
            // 0x4b69ec: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6A50u;
            goto label_4b6a50;
        }
    }
    ctx->pc = 0x4B69F0u;
    // 0x4b69f0: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x4b69f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x4b69f4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4b69f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4b69f8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4B69F8u;
    {
        const bool branch_taken_0x4b69f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b69f8) {
            ctx->pc = 0x4B69FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B69F8u;
            // 0x4b69fc: 0x8fa40174  lw          $a0, 0x174($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6A50u;
            goto label_4b6a50;
        }
    }
    ctx->pc = 0x4B6A00u;
    // 0x4b6a00: 0x480000a  bltz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B6A00u;
    {
        const bool branch_taken_0x4b6a00 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4B6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6A00u;
        // 0x4b6a04: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6a00) {
            ctx->pc = 0x4B6A2Cu;
            goto label_4b6a2c;
        }
    }
    ctx->pc = 0x4B6A08u;
    // 0x4b6a08: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4b6a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x4b6a0c: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B6A0Cu;
    SET_GPR_U32(ctx, 31, 0x4B6A14u);
    ctx->pc = 0x4B6A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6A0Cu;
    // 0x4b6a10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B6A0Cu, 0x4B6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6A14u;
label_4b6a14:
    // 0x4b6a14: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x4b6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x4b6a18: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4b6a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6a1c: 0xc12d132  jal         func_4B44C8
    ctx->pc = 0x4B6A1Cu;
    SET_GPR_U32(ctx, 31, 0x4B6A24u);
    ctx->pc = 0x4B6A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6A1Cu;
    // 0x4b6a20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B44C8u, 0x4B6A1Cu, 0x4B6A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6A24u;
label_4b6a24:
    // 0x4b6a24: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6A24u;
    {
        const bool branch_taken_0x4b6a24 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4B6A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6A24u;
        // 0x4b6a28: 0x8fa301a0  lw          $v1, 0x1A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6a24) {
            ctx->pc = 0x4B6A3Cu;
            goto label_4b6a3c;
        }
    }
    ctx->pc = 0x4B6A2Cu;
label_4b6a2c:
    // 0x4b6a2c: 0x8fa4014c  lw          $a0, 0x14C($sp)
    ctx->pc = 0x4b6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x4b6a30: 0x4b027  nor         $s6, $zero, $a0
    ctx->pc = 0x4b6a30u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
label_4b6a34:
    // 0x4b6a34: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x4B6A34u;
    {
        const bool branch_taken_0x4b6a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6A34u;
        // 0x4b6a38: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6a34) {
            ctx->pc = 0x4B6D68u;
            goto label_4b6d68;
        }
    }
    ctx->pc = 0x4B6A3Cu;
label_4b6a3c:
    // 0x4b6a3c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x4b6a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_4b6a40:
    // 0x4b6a40: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4b6a40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
    // 0x4b6a44: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4b6a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b6a48: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x4B6A48u;
    {
        const bool branch_taken_0x4b6a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6A48u;
        // 0x4b6a4c: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6a48) {
            ctx->pc = 0x4B6D68u;
            goto label_4b6d68;
        }
    }
    ctx->pc = 0x4B6A50u;
label_4b6a50:
    // 0x4b6a50: 0x10800089  beqz        $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x4B6A50u;
    {
        const bool branch_taken_0x4b6a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6A50u;
        // 0x4b6a54: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6a50) {
            ctx->pc = 0x4B6C78u;
            goto label_4b6c78;
        }
    }
    ctx->pc = 0x4B6A58u;
    // 0x4b6a58: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B6A58u;
    {
        const bool branch_taken_0x4b6a58 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x4B6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6A58u;
        // 0x4b6a5c: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6a58) {
            ctx->pc = 0x4B6A6Cu;
            goto label_4b6a6c;
        }
    }
    ctx->pc = 0x4B6A60u;
    // 0x4b6a60: 0xc12d0d2  jal         func_4B4348
    ctx->pc = 0x4B6A60u;
    SET_GPR_U32(ctx, 31, 0x4B6A68u);
    ctx->pc = 0x4B6A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6A60u;
    // 0x4b6a64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4348u, 0x4B6A60u, 0x4B6A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6A68u;
label_4b6a68:
    // 0x4b6a68: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x4b6a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_4b6a6c:
    // 0x4b6a6c: 0x8fa2017c  lw          $v0, 0x17C($sp)
    ctx->pc = 0x4b6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x4b6a70: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B6A70u;
    {
        const bool branch_taken_0x4b6a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6A70u;
        // 0x4b6a74: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6a70) {
            ctx->pc = 0x4B6AB4u;
            goto label_4b6ab4;
        }
    }
    ctx->pc = 0x4B6A78u;
    // 0x4b6a78: 0xc12cee8  jal         func_4B3BA0
    ctx->pc = 0x4B6A78u;
    SET_GPR_U32(ctx, 31, 0x4B6A80u);
    ctx->pc = 0x4B6A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6A78u;
    // 0x4b6a7c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3BA0u, 0x4B6A78u, 0x4B6A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6A80u;
label_4b6a80:
    // 0x4b6a80: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x4b6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x4b6a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4b6a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6a88: 0xc12cf26  jal         func_4B3C98
    ctx->pc = 0x4B6A88u;
    SET_GPR_U32(ctx, 31, 0x4B6A90u);
    ctx->pc = 0x4B6A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6A88u;
    // 0x4b6a8c: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C98u, 0x4B6A88u, 0x4B6A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6A90u;
label_4b6a90:
    // 0x4b6a90: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x4b6a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x4b6a94: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x4b6a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x4b6a98: 0xc12cf14  jal         func_4B3C50
    ctx->pc = 0x4B6A98u;
    SET_GPR_U32(ctx, 31, 0x4B6AA0u);
    ctx->pc = 0x4B6A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6A98u;
    // 0x4b6a9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C50u, 0x4B6A98u, 0x4B6AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6AA0u;
label_4b6aa0:
    // 0x4b6aa0: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x4b6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x4b6aa4: 0xc12d0d2  jal         func_4B4348
    ctx->pc = 0x4B6AA4u;
    SET_GPR_U32(ctx, 31, 0x4B6AACu);
    ctx->pc = 0x4B6AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6AA4u;
    // 0x4b6aa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4348u, 0x4B6AA4u, 0x4B6AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6AACu;
label_4b6aac:
    // 0x4b6aac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B6AACu;
    {
        const bool branch_taken_0x4b6aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6AACu;
        // 0x4b6ab0: 0xafa20190  sw          $v0, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6aac) {
            ctx->pc = 0x4B6AB8u;
            goto label_4b6ab8;
        }
    }
    ctx->pc = 0x4B6AB4u;
label_4b6ab4:
    // 0x4b6ab4: 0xafa40194  sw          $a0, 0x194($sp)
    ctx->pc = 0x4b6ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 4));
label_4b6ab8:
    // 0x4b6ab8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x4b6ab8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b6abc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4B6ABCu;
    {
        const bool branch_taken_0x4b6abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6ABCu;
        // 0x4b6ac0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6abc) {
            ctx->pc = 0x4B6B30u;
            goto label_4b6b30;
        }
    }
    ctx->pc = 0x4B6AC4u;
    // 0x4b6ac4: 0x0  nop
    ctx->pc = 0x4b6ac4u;
    // NOP
label_4b6ac8:
    // 0x4b6ac8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4b6ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6acc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4b6accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b6ad0: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B6AD0u;
    SET_GPR_U32(ctx, 31, 0x4B6AD8u);
    ctx->pc = 0x4B6AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6AD0u;
    // 0x4b6ad4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B6AD0u, 0x4B6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6AD8u;
label_4b6ad8:
    // 0x4b6ad8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b6ad8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6adc: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x4b6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x4b6ae0: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x4b6ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x4b6ae4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B6AE4u;
    {
        const bool branch_taken_0x4b6ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6AE4u;
        // 0x4b6ae8: 0x8fa40194  lw          $a0, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6ae4) {
            ctx->pc = 0x4B6B08u;
            goto label_4b6b08;
        }
    }
    ctx->pc = 0x4B6AECu;
    // 0x4b6aec: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4b6aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6af0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4b6af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b6af4: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B6AF4u;
    SET_GPR_U32(ctx, 31, 0x4B6AFCu);
    ctx->pc = 0x4B6AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6AF4u;
    // 0x4b6af8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B6AF4u, 0x4B6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6AFCu;
label_4b6afc:
    // 0x4b6afc: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x4b6afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x4b6b00: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4B6B00u;
    {
        const bool branch_taken_0x4b6b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6B00u;
        // 0x4b6b04: 0xafa20194  sw          $v0, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6b00) {
            ctx->pc = 0x4B6B2Cu;
            goto label_4b6b2c;
        }
    }
    ctx->pc = 0x4B6B08u;
label_4b6b08:
    // 0x4b6b08: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4b6b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b6b0c: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B6B0Cu;
    SET_GPR_U32(ctx, 31, 0x4B6B14u);
    ctx->pc = 0x4B6B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B0Cu;
    // 0x4b6b10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B6B0Cu, 0x4B6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B14u;
label_4b6b14:
    // 0x4b6b14: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x4b6b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x4b6b18: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4b6b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b6b1c: 0xafa20194  sw          $v0, 0x194($sp)
    ctx->pc = 0x4b6b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 2));
    // 0x4b6b20: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B6B20u;
    SET_GPR_U32(ctx, 31, 0x4B6B28u);
    ctx->pc = 0x4B6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B20u;
    // 0x4b6b24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B6B20u, 0x4B6B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B28u;
label_4b6b28:
    // 0x4b6b28: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x4b6b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_4b6b2c:
    // 0x4b6b2c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b6b2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4b6b30:
    // 0x4b6b30: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x4b6b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b6b34: 0xc12d688  jal         func_4B5A20
    ctx->pc = 0x4B6B34u;
    SET_GPR_U32(ctx, 31, 0x4B6B3Cu);
    ctx->pc = 0x4B6B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B34u;
    // 0x4b6b38: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5A20u, 0x4B6B34u, 0x4B6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B3Cu;
label_4b6b3c:
    // 0x4b6b3c: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x4b6b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x4b6b40: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x4b6b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x4b6b44: 0xc12d132  jal         func_4B44C8
    ctx->pc = 0x4B6B44u;
    SET_GPR_U32(ctx, 31, 0x4B6B4Cu);
    ctx->pc = 0x4B6B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B44u;
    // 0x4b6b48: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B44C8u, 0x4B6B44u, 0x4B6B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B4Cu;
label_4b6b4c:
    // 0x4b6b4c: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4b6b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x4b6b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b6b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6b54: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x4b6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b6b58: 0xc12d14c  jal         func_4B4530
    ctx->pc = 0x4B6B58u;
    SET_GPR_U32(ctx, 31, 0x4B6B60u);
    ctx->pc = 0x4B6B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B58u;
    // 0x4b6b5c: 0x8fa60190  lw          $a2, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4530u, 0x4B6B58u, 0x4B6B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B60u;
label_4b6b60:
    // 0x4b6b60: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x4b6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
    // 0x4b6b64: 0x8442000e  lh          $v0, 0xE($v0)
    ctx->pc = 0x4b6b64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x4b6b68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6B68u;
    {
        const bool branch_taken_0x4b6b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6B68u;
        // 0x4b6b6c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6b68) {
            ctx->pc = 0x4B6B80u;
            goto label_4b6b80;
        }
    }
    ctx->pc = 0x4B6B70u;
    // 0x4b6b70: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4b6b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x4b6b74: 0xc12d132  jal         func_4B44C8
    ctx->pc = 0x4B6B74u;
    SET_GPR_U32(ctx, 31, 0x4B6B7Cu);
    ctx->pc = 0x4B6B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6B74u;
    // 0x4b6b78: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B44C8u, 0x4B6B74u, 0x4B6B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6B7Cu;
label_4b6b7c:
    // 0x4b6b7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b6b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6b80:
    // 0x4b6b80: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x4B6B80u;
    {
        const bool branch_taken_0x4b6b80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6B80u;
        // 0x4b6b84: 0x8fa40148  lw          $a0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6b80) {
            ctx->pc = 0x4B6BB8u;
            goto label_4b6bb8;
        }
    }
    ctx->pc = 0x4B6B88u;
    // 0x4b6b88: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B6B88u;
    {
        const bool branch_taken_0x4b6b88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6B88u;
        // 0x4b6b8c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6b88) {
            ctx->pc = 0x4B6BB8u;
            goto label_4b6bb8;
        }
    }
    ctx->pc = 0x4B6B90u;
    // 0x4b6b90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b6b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b6b94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b6b94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b6b98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b6b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b6b9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B6B9Cu;
    {
        const bool branch_taken_0x4b6b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6B9Cu;
        // 0x4b6ba0: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6b9c) {
            ctx->pc = 0x4B6BB8u;
            goto label_4b6bb8;
        }
    }
    ctx->pc = 0x4B6BA4u;
    // 0x4b6ba4: 0x12420028  beq         $s2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x4B6BA4u;
    {
        const bool branch_taken_0x4b6ba4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6BA4u;
        // 0x4b6ba8: 0x10102a  slt         $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6ba4) {
            ctx->pc = 0x4B6C48u;
            goto label_4b6c48;
        }
    }
    ctx->pc = 0x4B6BACu;
    // 0x4b6bac: 0x529021  addu        $s2, $v0, $s2
    ctx->pc = 0x4b6bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x4b6bb0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x4B6BB0u;
    {
        const bool branch_taken_0x4b6bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6BB0u;
        // 0x4b6bb4: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6bb0) {
            ctx->pc = 0x4B6D64u;
            goto label_4b6d64;
        }
    }
    ctx->pc = 0x4B6BB8u;
label_4b6bb8:
    // 0x4b6bb8: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x4B6BB8u;
    {
        const bool branch_taken_0x4b6bb8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x4b6bb8) {
            ctx->pc = 0x4B6BE4u;
            goto label_4b6be4;
        }
    }
    ctx->pc = 0x4B6BC0u;
    // 0x4b6bc0: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4B6BC0u;
    {
        const bool branch_taken_0x4b6bc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6BC0u;
        // 0x4b6bc4: 0x8fa20148  lw          $v0, 0x148($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6bc0) {
            ctx->pc = 0x4B6C38u;
            goto label_4b6c38;
        }
    }
    ctx->pc = 0x4B6BC8u;
    // 0x4b6bc8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4B6BC8u;
    {
        const bool branch_taken_0x4b6bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6BC8u;
        // 0x4b6bcc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6bc8) {
            ctx->pc = 0x4B6C38u;
            goto label_4b6c38;
        }
    }
    ctx->pc = 0x4B6BD0u;
    // 0x4b6bd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4b6bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4b6bd4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4b6bd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4b6bd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b6bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b6bdc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B6BDCu;
    {
        const bool branch_taken_0x4b6bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b6bdc) {
            ctx->pc = 0x4B6C38u;
            goto label_4b6c38;
        }
    }
    ctx->pc = 0x4B6BE4u;
label_4b6be4:
    // 0x4b6be4: 0x1a200012  blez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4B6BE4u;
    {
        const bool branch_taken_0x4b6be4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x4B6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6BE4u;
        // 0x4b6be8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6be4) {
            ctx->pc = 0x4B6C30u;
            goto label_4b6c30;
        }
    }
    ctx->pc = 0x4B6BECu;
    // 0x4b6bec: 0xc12d0d2  jal         func_4B4348
    ctx->pc = 0x4B6BECu;
    SET_GPR_U32(ctx, 31, 0x4B6BF4u);
    ctx->pc = 0x4B6BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6BECu;
    // 0x4b6bf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4348u, 0x4B6BECu, 0x4B6BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6BF4u;
label_4b6bf4:
    // 0x4b6bf4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b6bf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6bf8: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x4b6bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b6bfc: 0xc12d132  jal         func_4B44C8
    ctx->pc = 0x4B6BFCu;
    SET_GPR_U32(ctx, 31, 0x4B6C04u);
    ctx->pc = 0x4B6C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6BFCu;
    // 0x4b6c00: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B44C8u, 0x4B6BFCu, 0x4B6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6C04u;
label_4b6c04:
    // 0x4b6c04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4b6c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6c08: 0x1e200006  bgtz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B6C08u;
    {
        const bool branch_taken_0x4b6c08 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x4B6C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C08u;
        // 0x4b6c0c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c08) {
            ctx->pc = 0x4B6C24u;
            goto label_4b6c24;
        }
    }
    ctx->pc = 0x4B6C10u;
    // 0x4b6c10: 0x56200054  bnel        $s1, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x4B6C10u;
    {
        const bool branch_taken_0x4b6c10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b6c10) {
            ctx->pc = 0x4B6C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6C10u;
            // 0x4b6c14: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6D64u;
            goto label_4b6d64;
        }
    }
    ctx->pc = 0x4B6C18u;
    // 0x4b6c18: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x4b6c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x4b6c1c: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x4B6C1Cu;
    {
        const bool branch_taken_0x4b6c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6c1c) {
            ctx->pc = 0x4B6C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6C1Cu;
            // 0x4b6c20: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6D64u;
            goto label_4b6d64;
        }
    }
    ctx->pc = 0x4B6C24u;
label_4b6c24:
    // 0x4b6c24: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x4b6c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x4b6c28: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B6C28u;
    {
        const bool branch_taken_0x4b6c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B6C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C28u;
        // 0x4b6c2c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c28) {
            ctx->pc = 0x4B6C48u;
            goto label_4b6c48;
        }
    }
    ctx->pc = 0x4B6C30u;
label_4b6c30:
    // 0x4b6c30: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x4B6C30u;
    {
        const bool branch_taken_0x4b6c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C30u;
        // 0x4b6c34: 0xa2b20000  sb          $s2, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c30) {
            ctx->pc = 0x4B6D64u;
            goto label_4b6d64;
        }
    }
    ctx->pc = 0x4B6C38u;
label_4b6c38:
    // 0x4b6c38: 0x1a200009  blez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B6C38u;
    {
        const bool branch_taken_0x4b6c38 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x4B6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C38u;
        // 0x4b6c3c: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c38) {
            ctx->pc = 0x4B6C60u;
            goto label_4b6c60;
        }
    }
    ctx->pc = 0x4B6C40u;
    // 0x4b6c40: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6C40u;
    {
        const bool branch_taken_0x4b6c40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C40u;
        // 0x4b6c44: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c40) {
            ctx->pc = 0x4B6C58u;
            goto label_4b6c58;
        }
    }
    ctx->pc = 0x4B6C48u;
label_4b6c48:
    // 0x4b6c48: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x4b6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x4b6c4c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x4b6c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4b6c50: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x4B6C50u;
    {
        const bool branch_taken_0x4b6c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C50u;
        // 0x4b6c54: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c50) {
            ctx->pc = 0x4B6CF8u;
            goto label_4b6cf8;
        }
    }
    ctx->pc = 0x4B6C58u;
label_4b6c58:
    // 0x4b6c58: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4B6C58u;
    {
        const bool branch_taken_0x4b6c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C58u;
        // 0x4b6c5c: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c58) {
            ctx->pc = 0x4B6D64u;
            goto label_4b6d64;
        }
    }
    ctx->pc = 0x4B6C60u;
label_4b6c60:
    // 0x4b6c60: 0xa2b20000  sb          $s2, 0x0($s5)
    ctx->pc = 0x4b6c60u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x4b6c64: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x4b6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b6c68: 0x1663ff97  bne         $s3, $v1, . + 4 + (-0x69 << 2)
    ctx->pc = 0x4B6C68u;
    {
        const bool branch_taken_0x4b6c68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B6C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C68u;
        // 0x4b6c6c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c68) {
            ctx->pc = 0x4B6AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b6ac8;
        }
    }
    ctx->pc = 0x4B6C70u;
    // 0x4b6c70: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4B6C70u;
    {
        const bool branch_taken_0x4b6c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C70u;
        // 0x4b6c74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c70) {
            ctx->pc = 0x4B6CC0u;
            goto label_4b6cc0;
        }
    }
    ctx->pc = 0x4B6C78u;
label_4b6c78:
    // 0x4b6c78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4B6C78u;
    {
        const bool branch_taken_0x4b6c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6C78u;
        // 0x4b6c7c: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6c78) {
            ctx->pc = 0x4B6C98u;
            goto label_4b6c98;
        }
    }
    ctx->pc = 0x4B6C80u;
label_4b6c80:
    // 0x4b6c80: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4b6c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6c84: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x4b6c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4b6c88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b6c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6c8c: 0xc12cf44  jal         func_4B3D10
    ctx->pc = 0x4B6C8Cu;
    SET_GPR_U32(ctx, 31, 0x4B6C94u);
    ctx->pc = 0x4B6C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6C8Cu;
    // 0x4b6c90: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3D10u, 0x4B6C8Cu, 0x4B6C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6C94u;
label_4b6c94:
    // 0x4b6c94: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b6c94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b6c98:
    // 0x4b6c98: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x4b6c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b6c9c: 0xc12d688  jal         func_4B5A20
    ctx->pc = 0x4B6C9Cu;
    SET_GPR_U32(ctx, 31, 0x4B6CA4u);
    ctx->pc = 0x4B6CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6C9Cu;
    // 0x4b6ca0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B5A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B5A20u, 0x4B6C9Cu, 0x4B6CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6CA4u;
label_4b6ca4:
    // 0x4b6ca4: 0x24520030  addiu       $s2, $v0, 0x30
    ctx->pc = 0x4b6ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x4b6ca8: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x4b6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x4b6cac: 0xa2b20000  sb          $s2, 0x0($s5)
    ctx->pc = 0x4b6cacu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x4b6cb0: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x4b6cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x4b6cb4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x4B6CB4u;
    {
        const bool branch_taken_0x4b6cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6CB4u;
        // 0x4b6cb8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6cb4) {
            ctx->pc = 0x4B6C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b6c80;
        }
    }
    ctx->pc = 0x4B6CBCu;
    // 0x4b6cbc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4b6cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4b6cc0:
    // 0x4b6cc0: 0xc12d0d2  jal         func_4B4348
    ctx->pc = 0x4B6CC0u;
    SET_GPR_U32(ctx, 31, 0x4B6CC8u);
    ctx->pc = 0x4B6CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6CC0u;
    // 0x4b6cc4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B4348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B4348u, 0x4B6CC0u, 0x4B6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6CC8u;
label_4b6cc8:
    // 0x4b6cc8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4b6cc8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6ccc: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x4b6cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x4b6cd0: 0xc12d132  jal         func_4B44C8
    ctx->pc = 0x4B6CD0u;
    SET_GPR_U32(ctx, 31, 0x4B6CD8u);
    ctx->pc = 0x4B6CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6CD0u;
    // 0x4b6cd4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B44C8u, 0x4B6CD0u, 0x4B6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6CD8u;
label_4b6cd8:
    // 0x4b6cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b6cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b6cdc: 0x5e000007  bgtzl       $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B6CDCu;
    {
        const bool branch_taken_0x4b6cdc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x4b6cdc) {
            ctx->pc = 0x4B6CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6CDCu;
            // 0x4b6ce0: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6CFCu;
            goto label_4b6cfc;
        }
    }
    ctx->pc = 0x4B6CE4u;
    // 0x4b6ce4: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4B6CE4u;
    {
        const bool branch_taken_0x4b6ce4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6CE4u;
        // 0x4b6ce8: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6ce4) {
            ctx->pc = 0x4B6D48u;
            goto label_4b6d48;
        }
    }
    ctx->pc = 0x4B6CECu;
    // 0x4b6cec: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x4b6cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x4b6cf0: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B6CF0u;
    {
        const bool branch_taken_0x4b6cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6cf0) {
            ctx->pc = 0x4B6CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6CF0u;
            // 0x4b6cf4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6D4Cu;
            goto label_4b6d4c;
        }
    }
    ctx->pc = 0x4B6CF8u;
label_4b6cf8:
    // 0x4b6cf8: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x4b6cf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_4b6cfc:
    // 0x4b6cfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6CFCu;
    {
        const bool branch_taken_0x4b6cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6CFCu;
        // 0x4b6d00: 0x24030039  addiu       $v1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6cfc) {
            ctx->pc = 0x4B6D14u;
            goto label_4b6d14;
        }
    }
    ctx->pc = 0x4B6D04u;
    // 0x4b6d04: 0x0  nop
    ctx->pc = 0x4b6d04u;
    // NOP
label_4b6d08:
    // 0x4b6d08: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x4b6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x4b6d0c: 0x12a20007  beq         $s5, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B6D0Cu;
    {
        const bool branch_taken_0x4b6d0c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B6D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6D0Cu;
        // 0x4b6d10: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6d0c) {
            ctx->pc = 0x4B6D2Cu;
            goto label_4b6d2c;
        }
    }
    ctx->pc = 0x4B6D14u;
label_4b6d14:
    // 0x4b6d14: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x4b6d14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b6d18: 0x1043fffb  beq         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4B6D18u;
    {
        const bool branch_taken_0x4b6d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6D18u;
        // 0x4b6d1c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6d18) {
            ctx->pc = 0x4B6D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b6d08;
        }
    }
    ctx->pc = 0x4B6D20u;
    // 0x4b6d20: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x4b6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4b6d24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4B6D24u;
    {
        const bool branch_taken_0x4b6d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6D24u;
        // 0x4b6d28: 0xa2a20000  sb          $v0, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6d24) {
            ctx->pc = 0x4B6D64u;
            goto label_4b6d64;
        }
    }
    ctx->pc = 0x4B6D2Cu;
label_4b6d2c:
    // 0x4b6d2c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x4b6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x4b6d30: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x4b6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x4b6d34: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4b6d34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x4b6d38: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x4b6d38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4b6d3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4B6D3Cu;
    {
        const bool branch_taken_0x4b6d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6D3Cu;
        // 0x4b6d40: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6d3c) {
            ctx->pc = 0x4B6D68u;
            goto label_4b6d68;
        }
    }
    ctx->pc = 0x4B6D44u;
    // 0x4b6d44: 0x0  nop
    ctx->pc = 0x4b6d44u;
    // NOP
label_4b6d48:
    // 0x4b6d48: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x4b6d48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_4b6d4c:
    // 0x4b6d4c: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x4b6d4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4b6d50: 0x0  nop
    ctx->pc = 0x4b6d50u;
    // NOP
    // 0x4b6d54: 0x0  nop
    ctx->pc = 0x4b6d54u;
    // NOP
    // 0x4b6d58: 0x0  nop
    ctx->pc = 0x4b6d58u;
    // NOP
    // 0x4b6d5c: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4B6D5Cu;
    {
        const bool branch_taken_0x4b6d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b6d5c) {
            ctx->pc = 0x4B6D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b6d48;
        }
    }
    ctx->pc = 0x4B6D64u;
label_4b6d64:
    // 0x4b6d64: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4b6d64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4b6d68:
    // 0x4b6d68: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B6D68u;
    SET_GPR_U32(ctx, 31, 0x4B6D70u);
    ctx->pc = 0x4B6D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6D68u;
    // 0x4b6d6c: 0x8fa40188  lw          $a0, 0x188($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B6D68u, 0x4B6D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6D70u;
label_4b6d70:
    // 0x4b6d70: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B6D70u;
    SET_GPR_U32(ctx, 31, 0x4B6D78u);
    ctx->pc = 0x4B6D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6D70u;
    // 0x4b6d74: 0x8fa4018c  lw          $a0, 0x18C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B6D70u, 0x4B6D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6D78u;
label_4b6d78:
    // 0x4b6d78: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x4b6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x4b6d7c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B6D7Cu;
    {
        const bool branch_taken_0x4b6d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6D7Cu;
        // 0x4b6d80: 0x8fa20194  lw          $v0, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6d7c) {
            ctx->pc = 0x4B6DA4u;
            goto label_4b6da4;
        }
    }
    ctx->pc = 0x4B6D84u;
    // 0x4b6d84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B6D84u;
    {
        const bool branch_taken_0x4b6d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6d84) {
            ctx->pc = 0x4B6D9Cu;
            goto label_4b6d9c;
        }
    }
    ctx->pc = 0x4B6D8Cu;
    // 0x4b6d8c: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B6D8Cu;
    {
        const bool branch_taken_0x4b6d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4b6d8c) {
            ctx->pc = 0x4B6D9Cu;
            goto label_4b6d9c;
        }
    }
    ctx->pc = 0x4B6D94u;
    // 0x4b6d94: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B6D94u;
    SET_GPR_U32(ctx, 31, 0x4B6D9Cu);
    ctx->pc = 0x4B6D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6D94u;
    // 0x4b6d98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B6D94u, 0x4B6D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6D9Cu;
label_4b6d9c:
    // 0x4b6d9c: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B6D9Cu;
    SET_GPR_U32(ctx, 31, 0x4B6DA4u);
    ctx->pc = 0x4B6DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6D9Cu;
    // 0x4b6da0: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B6D9Cu, 0x4B6DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6DA4u;
label_4b6da4:
    // 0x4b6da4: 0xc12cf0a  jal         func_4B3C28
    ctx->pc = 0x4B6DA4u;
    SET_GPR_U32(ctx, 31, 0x4B6DACu);
    ctx->pc = 0x4B6DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B6DA4u;
    // 0x4b6da8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B3C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B3C28u, 0x4B6DA4u, 0x4B6DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B6DACu;
label_4b6dac:
    // 0x4b6dac: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x4b6dacu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4b6db0: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x4b6db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x4b6db4: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x4b6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 22));
    // 0x4b6db8: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x4b6db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x4b6dbc: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4B6DBCu;
    {
        const bool branch_taken_0x4b6dbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4b6dbc) {
            ctx->pc = 0x4B6DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B6DBCu;
            // 0x4b6dc0: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B6DC4u;
            goto label_4b6dc4;
        }
    }
    ctx->pc = 0x4B6DC4u;
label_4b6dc4:
    // 0x4b6dc4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x4b6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_4b6dc8:
    // 0x4b6dc8: 0xdfbf0240  ld          $ra, 0x240($sp)
    ctx->pc = 0x4b6dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x4b6dcc: 0xdfbe0230  ld          $fp, 0x230($sp)
    ctx->pc = 0x4b6dccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x4b6dd0: 0xdfb70220  ld          $s7, 0x220($sp)
    ctx->pc = 0x4b6dd0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x4b6dd4: 0xdfb60210  ld          $s6, 0x210($sp)
    ctx->pc = 0x4b6dd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x4b6dd8: 0xdfb50200  ld          $s5, 0x200($sp)
    ctx->pc = 0x4b6dd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x4b6ddc: 0xdfb401f0  ld          $s4, 0x1F0($sp)
    ctx->pc = 0x4b6ddcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x4b6de0: 0xdfb301e0  ld          $s3, 0x1E0($sp)
    ctx->pc = 0x4b6de0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x4b6de4: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x4b6de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x4b6de8: 0xdfb101c0  ld          $s1, 0x1C0($sp)
    ctx->pc = 0x4b6de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x4b6dec: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x4b6decu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x4b6df0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B6DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B6DF0u;
        // 0x4b6df4: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B6DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B6DF8u;
}
