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

// Function: sub_0018B950
// Address: 0x18b950 - 0x18ba10
void sub_0018B950_0x18b950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B950_0x18b950");
#endif

    switch (ctx->pc) {
        case 0x18b9e8u: goto label_18b9e8;
        case 0x18b9f8u: goto label_18b9f8;
        default: break;
    }

    ctx->pc = 0x18b950u;

    // 0x18b950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18b950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18b954: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18b954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b958: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18b95c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18b960: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18b960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b964: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x18b964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x18b968: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B968u;
    {
        const bool branch_taken_0x18b968 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B968u;
        // 0x18b96c: 0xae00019c  sw          $zero, 0x19C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b968) {
            ctx->pc = 0x18B978u;
            goto label_18b978;
        }
    }
    ctx->pc = 0x18B970u;
    // 0x18b970: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B970u;
    {
        const bool branch_taken_0x18b970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B970u;
        // 0x18b974: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b970) {
            ctx->pc = 0x18B99Cu;
            goto label_18b99c;
        }
    }
    ctx->pc = 0x18B978u;
label_18b978:
    // 0x18b978: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18b97c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B97Cu;
    {
        const bool branch_taken_0x18b97c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b97c) {
            ctx->pc = 0x18B990u;
            goto label_18b990;
        }
    }
    ctx->pc = 0x18B984u;
    // 0x18b984: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x18b984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x18b988: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B988u;
    {
        const bool branch_taken_0x18b988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B988u;
        // 0x18b98c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b988) {
            ctx->pc = 0x18B99Cu;
            goto label_18b99c;
        }
    }
    ctx->pc = 0x18B990u;
label_18b990:
    // 0x18b990: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B990u;
    {
        const bool branch_taken_0x18b990 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B990u;
        // 0x18b994: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b990) {
            ctx->pc = 0x18B99Cu;
            goto label_18b99c;
        }
    }
    ctx->pc = 0x18B998u;
    // 0x18b998: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x18b998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_18b99c:
    // 0x18b99c: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x18b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x18b9a0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x18b9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18b9a4: 0x8e060194  lw          $a2, 0x194($s0)
    ctx->pc = 0x18b9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x18b9a8: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x18b9a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x18b9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b9b0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x18b9b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x18b9b4: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x18b9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x18b9b8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x18b9bc: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x18b9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b9c0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x18b9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b9c4: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x18b9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b9c8: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x18b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x18b9cc: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x18b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x18b9d0: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x18b9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18b9d4: 0xc4b40014  lwc1        $f20, 0x14($a1)
    ctx->pc = 0x18b9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b9d8: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x18b9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x18b9dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18b9dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18b9e0: 0xc063262  jal         func_18C988
    ctx->pc = 0x18B9E0u;
    SET_GPR_U32(ctx, 31, 0x18B9E8u);
    ctx->pc = 0x18B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B9E0u;
    // 0x18b9e4: 0x8cc50024  lw          $a1, 0x24($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C988u, 0x18B9E0u, 0x18B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B9E8u;
label_18b9e8:
    // 0x18b9e8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18b9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b9f0: 0xc063232  jal         func_18C8C8
    ctx->pc = 0x18B9F0u;
    SET_GPR_U32(ctx, 31, 0x18B9F8u);
    ctx->pc = 0x18B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B9F0u;
    // 0x18b9f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8C8u, 0x18B9F0u, 0x18B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B9F8u;
label_18b9f8:
    // 0x18b9f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18b9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b9fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ba00: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x18ba00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18ba04: 0x3e00008  jr          $ra
    ctx->pc = 0x18BA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA04u;
        // 0x18ba08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BA0Cu;
    // 0x18ba0c: 0x0  nop
    ctx->pc = 0x18ba0cu;
    // NOP
    ctx->pc = 0x18ba10u;
}
