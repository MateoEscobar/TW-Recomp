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

// Function: sub_00498E38
// Address: 0x498e38 - 0x499090
void sub_00498E38_0x498e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498E38_0x498e38");
#endif

    switch (ctx->pc) {
        case 0x498e78u: goto label_498e78;
        case 0x499024u: goto label_499024;
        default: break;
    }

    ctx->pc = 0x498e38u;

    // 0x498e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x498e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x498e3c: 0x8f828744  lw          $v0, -0x78BC($gp)
    ctx->pc = 0x498e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936388)));
    // 0x498e40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x498e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x498e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x498e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x498e48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x498e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x498e4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x498E4Cu;
    {
        const bool branch_taken_0x498e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x498E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E4Cu;
        // 0x498e50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498e4c) {
            ctx->pc = 0x498E60u;
            goto label_498e60;
        }
    }
    ctx->pc = 0x498E54u;
    // 0x498e54: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x498e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x498e58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x498E58u;
    {
        const bool branch_taken_0x498e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E58u;
        // 0x498e5c: 0xdc43f670  ld          $v1, -0x990($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294964848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498e58) {
            ctx->pc = 0x498E68u;
            goto label_498e68;
        }
    }
    ctx->pc = 0x498E60u;
label_498e60:
    // 0x498e60: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x498e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x498e64: 0xdc43f7e0  ld          $v1, -0x820($v0)
    ctx->pc = 0x498e64u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x70F7E0u));
label_498e68:
    // 0x498e68: 0xff8386f0  sd          $v1, -0x7910($gp)
    ctx->pc = 0x498e68u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936304), GPR_U64(ctx, 3));
    // 0x498e6c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x498e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x498e70: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x498E70u;
    SET_GPR_U32(ctx, 31, 0x498E78u);
    ctx->pc = 0x498E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498E70u;
    // 0x498e74: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x498E70u, 0x498E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x498E78u;
label_498e78:
    // 0x498e78: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x498e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x498e7c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x498e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x498e80: 0x34c68006  ori         $a2, $a2, 0x8006
    ctx->pc = 0x498e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32774);
    // 0x498e84: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x498e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x498e88: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x498e88u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x498e8c: 0x8f85898c  lw          $a1, -0x7674($gp)
    ctx->pc = 0x498e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x498e90: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x498e90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x498e94: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x498e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x498e98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x498e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x498e9c: 0x16020022  bne         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x498E9Cu;
    {
        const bool branch_taken_0x498e9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x498EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498E9Cu;
        // 0x498ea0: 0xaf85898c  sw          $a1, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498e9c) {
            ctx->pc = 0x498F28u;
            goto label_498f28;
        }
    }
    ctx->pc = 0x498EA4u;
    // 0x498ea4: 0x9f8686f0  lwu         $a2, -0x7910($gp)
    ctx->pc = 0x498ea4u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x498ea8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x498ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x498eac: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x498eacu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x498eb0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x498eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x498eb4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x498eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x498eb8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x498ebc: 0xdf8686e8  ld          $a2, -0x7918($gp)
    ctx->pc = 0x498ebcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
    // 0x498ec0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x498ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x498ec4: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x498ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x498ec8: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x498ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x498ecc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x498eccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x498ed0: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x498ed0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x498ed4: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x498ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x498ed8: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x498ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x498edc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498edcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x498ee0: 0xdf8686f8  ld          $a2, -0x7908($gp)
    ctx->pc = 0x498ee0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x498ee4: 0x3c02fffa  lui         $v0, 0xFFFA
    ctx->pc = 0x498ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65530 << 16));
    // 0x498ee8: 0x3442bffe  ori         $v0, $v0, 0xBFFE
    ctx->pc = 0x498ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49150);
    // 0x498eec: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x498eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x498ef0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x498ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x498ef4: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x498ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x498ef8: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x498ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x498efc: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x498efcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x498f00: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x498f00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x498f04: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x498f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x498f08: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498f08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x498f0c: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x498f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x498f10: 0x8f838a58  lw          $v1, -0x75A8($gp)
    ctx->pc = 0x498f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x498f14: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x498f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x498f18: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x498f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x498f1c: 0x70821b89  pcpyld      $v1, $a0, $v0
    ctx->pc = 0x498f1cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x498f20: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x498F20u;
    {
        const bool branch_taken_0x498f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x498F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498F20u;
        // 0x498f24: 0x7ca30030  sq          $v1, 0x30($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498f20) {
            ctx->pc = 0x498FB8u;
            goto label_498fb8;
        }
    }
    ctx->pc = 0x498F28u;
label_498f28:
    // 0x498f28: 0xdf8686e8  ld          $a2, -0x7918($gp)
    ctx->pc = 0x498f28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936296)));
    // 0x498f2c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x498f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x498f30: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x498f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x498f34: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498f38: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x498f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x498f3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x498f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x498f40: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x498f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x498f44: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x498f44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x498f48: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x498f48u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x498f4c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x498f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x498f50: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x498f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x498f54: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498f54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x498f58: 0xdf8686f0  ld          $a2, -0x7910($gp)
    ctx->pc = 0x498f58u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936304)));
    // 0x498f5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x498f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x498f60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x498f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x498f64: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x498f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x498f68: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x498f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x498f6c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x498f6cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x498f70: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x498f70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x498f74: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x498f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x498f78: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498f78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x498f7c: 0xdf8686f8  ld          $a2, -0x7908($gp)
    ctx->pc = 0x498f7cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936312)));
    // 0x498f80: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x498f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x498f84: 0x3442bffe  ori         $v0, $v0, 0xBFFE
    ctx->pc = 0x498f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49150);
    // 0x498f88: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x498f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x498f8c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x498f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x498f90: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x498f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x498f94: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x498f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x498f98: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x498f98u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x498f9c: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x498f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x498fa0: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x498fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x498fa4: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x498fa8: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x498fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x498fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x498facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498fb0: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x498fb0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x498fb4: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x498fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
label_498fb8:
    // 0x498fb8: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x498fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x498fbc: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x498fc0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x498fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x498fc4: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x498fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x498fc8: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x498fc8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x498fcc: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x498fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x498fd0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x498fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x498fd4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x498fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x498fd8: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x498fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x498fdc: 0xdf878718  ld          $a3, -0x78E8($gp)
    ctx->pc = 0x498fdcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936344)));
    // 0x498fe0: 0x8f868a58  lw          $a2, -0x75A8($gp)
    ctx->pc = 0x498fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x498fe4: 0x2404fe1f  addiu       $a0, $zero, -0x1E1
    ctx->pc = 0x498fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x498fe8: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x498fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x498fec: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x498fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x498ff0: 0x94c3001e  lhu         $v1, 0x1E($a2)
    ctx->pc = 0x498ff0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x498ff4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x498ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x498ff8: 0x94c2001c  lhu         $v0, 0x1C($a2)
    ctx->pc = 0x498ff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x498ffc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x498ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x499000: 0x93858998  lbu         $a1, -0x7668($gp)
    ctx->pc = 0x499000u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936984)));
    // 0x499004: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x499004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x499008: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x499008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x49900c: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x49900cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x499010: 0xff848718  sd          $a0, -0x78E8($gp)
    ctx->pc = 0x499010u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936344), GPR_U64(ctx, 4));
    // 0x499014: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x499014u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x499018: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x499018u;
    {
        const bool branch_taken_0x499018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x49901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499018u;
        // 0x49901c: 0xff878a70  sd          $a3, -0x7590($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294937200), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499018) {
            ctx->pc = 0x499068u;
            goto label_499068;
        }
    }
    ctx->pc = 0x499020u;
    // 0x499020: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x499020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_499024:
    // 0x499024: 0x42000039  di
    ctx->pc = 0x499024u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x499028: 0x40f  sync.p
    ctx->pc = 0x499028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x49902c: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x49902cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x499030: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x499030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x499034: 0x0  nop
    ctx->pc = 0x499034u;
    // NOP
    // 0x499038: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x499038u;
    {
        const bool branch_taken_0x499038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x499038) {
            ctx->pc = 0x499024u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_499024;
        }
    }
    ctx->pc = 0x499040u;
    // 0x499040: 0x9383899a  lbu         $v1, -0x7666($gp)
    ctx->pc = 0x499040u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936986)));
    // 0x499044: 0x93828999  lbu         $v0, -0x7667($gp)
    ctx->pc = 0x499044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936985)));
    // 0x499048: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x499048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x49904c: 0x9384899b  lbu         $a0, -0x7665($gp)
    ctx->pc = 0x49904cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
    // 0x499050: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x499050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x499054: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x499054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x499058: 0x42000038  ei
    ctx->pc = 0x499058u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x49905c: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x49905cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x499060: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x499060u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x499064: 0x0  nop
    ctx->pc = 0x499064u;
    // NOP
label_499068:
    // 0x499068: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x499068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x49906c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x49906cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x499070: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x499070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x499074: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x499074u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x499078: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x499078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x49907c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49907cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499084: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x499084u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x499088: 0x3e00008  jr          $ra
    ctx->pc = 0x499088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x499088u;
        // 0x49908c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x499088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499090u;
}
