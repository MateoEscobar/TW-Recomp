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

// Function: sub_0049F8C8
// Address: 0x49f8c8 - 0x49fb20
void sub_0049F8C8_0x49f8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F8C8_0x49f8c8");
#endif

    switch (ctx->pc) {
        case 0x49f924u: goto label_49f924;
        case 0x49fad0u: goto label_49fad0;
        default: break;
    }

    ctx->pc = 0x49f8c8u;

    // 0x49f8c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x49f8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x49f8cc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x49f8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x49f8d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x49f8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x49f8d4: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x49f8d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x49f8d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x49f8dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x49f8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f8e0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x49f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x49f8e4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x49f8e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f8e8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x49f8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x49f8ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x49f8ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f8f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x49f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x49f8f4: 0x241503f0  addiu       $s5, $zero, 0x3F0
    ctx->pc = 0x49f8f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
    // 0x49f8f8: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x49F8F8u;
    {
        const bool branch_taken_0x49f8f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x49F8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F8F8u;
        // 0x49f8fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f8f8) {
            ctx->pc = 0x49F908u;
            goto label_49f908;
        }
    }
    ctx->pc = 0x49F900u;
    // 0x49f900: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49f900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f904: 0x241503f6  addiu       $s5, $zero, 0x3F6
    ctx->pc = 0x49f904u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
label_49f908:
    // 0x49f908: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x49f908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x49f90c: 0x26700002  addiu       $s0, $s3, 0x2
    ctx->pc = 0x49f90cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x49f910: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x49f910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x49f914: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49f914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f918: 0x26050003  addiu       $a1, $s0, 0x3
    ctx->pc = 0x49f918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x49f91c: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x49F91Cu;
    SET_GPR_U32(ctx, 31, 0x49F924u);
    ctx->pc = 0x49F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49F91Cu;
    // 0x49f920: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x49F91Cu, 0x49F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49F924u;
label_49f924:
    // 0x49f924: 0x8f86898c  lw          $a2, -0x7674($gp)
    ctx->pc = 0x49f924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x49f928: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x49f928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x49f92c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x49f92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f930: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x49f930u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x49f934: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x49f934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x49f938: 0x10283e  dsrl32      $a1, $s0, 0
    ctx->pc = 0x49f938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x49f93c: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x49f93cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x49f940: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x49f940u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x49f944: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49f944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49f948: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49f948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49f94c: 0x2463f880  addiu       $v1, $v1, -0x780
    ctx->pc = 0x49f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965376));
    // 0x49f950: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49f950u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F880u));
    // 0x49f954: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x49f954u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x49f958: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49f958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49f95c: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x49f95cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x49f960: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x49f960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x49f964: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x49f964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x49f968: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x49f968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x49f96c: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x49f96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x49f970: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x49f970u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x49f974: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x49f974u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x49f978: 0x2238025  or          $s0, $s1, $v1
    ctx->pc = 0x49f978u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x49f97c: 0x72042b89  pcpyld      $a1, $s0, $a0
    ctx->pc = 0x49f97cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 4)));
    // 0x49f980: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x49f980u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x49f984: 0x12400032  beqz        $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x49F984u;
    {
        const bool branch_taken_0x49f984 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F984u;
        // 0x49f988: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f984) {
            ctx->pc = 0x49FA50u;
            goto label_49fa50;
        }
    }
    ctx->pc = 0x49F98Cu;
    // 0x49f98c: 0x9e440008  lwu         $a0, 0x8($s2)
    ctx->pc = 0x49f98cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x49f990: 0x9e420004  lwu         $v0, 0x4($s2)
    ctx->pc = 0x49f990u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x49f994: 0x9e450000  lwu         $a1, 0x0($s2)
    ctx->pc = 0x49f994u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49f998: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x49f998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x49f99c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x49f99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x49f9a0: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x49f9a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x49f9a4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x49f9a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x49f9a8: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x49f9a8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x49f9ac: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x49f9acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x49f9b0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49f9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49f9b4: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x49f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x49f9b8: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x49f9b8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x49f9bc: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x49f9bcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x49f9c0: 0x9e450010  lwu         $a1, 0x10($s2)
    ctx->pc = 0x49f9c0u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x49f9c4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x49f9c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x49f9c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x49f9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x49f9cc: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x49f9ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x49f9d0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x49f9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x49f9d4: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x49f9d4u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x49f9d8: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x49f9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x49f9dc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49f9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49f9e0: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x49f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x49f9e4: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x49f9e4u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x49f9e8: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x49f9e8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x49f9ec: 0x9e450020  lwu         $a1, 0x20($s2)
    ctx->pc = 0x49f9ecu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x49f9f0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x49f9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x49f9f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x49f9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x49f9f8: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x49f9f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x49f9fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x49f9fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x49fa00: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x49fa00u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x49fa04: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x49fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x49fa08: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49fa08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49fa0c: 0x26420030  addiu       $v0, $s2, 0x30
    ctx->pc = 0x49fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x49fa10: 0x9c440008  lwu         $a0, 0x8($v0)
    ctx->pc = 0x49fa10u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x49fa14: 0x9c420004  lwu         $v0, 0x4($v0)
    ctx->pc = 0x49fa14u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x49fa18: 0x9e450030  lwu         $a1, 0x30($s2)
    ctx->pc = 0x49fa18u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x49fa1c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x49fa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x49fa20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x49fa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x49fa24: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x49fa24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x49fa28: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x49fa28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x49fa2c: 0x72052b89  pcpyld      $a1, $s0, $a1
    ctx->pc = 0x49fa2cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 16), GPR_VEC(ctx, 5)));
    // 0x49fa30: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x49fa30u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x49fa34: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49fa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49fa38: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x49fa38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x49fa3c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x49fa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x49fa40: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49fa40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49fa44: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x49fa44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x49fa48: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49fa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49fa4c: 0x0  nop
    ctx->pc = 0x49fa4cu;
    // NOP
label_49fa50:
    // 0x49fa50: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49fa54: 0x2463f830  addiu       $v1, $v1, -0x7D0
    ctx->pc = 0x49fa54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965296));
    // 0x49fa58: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49fa58u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F830u));
    // 0x49fa5c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x49fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x49fa60: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49fa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49fa64: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49fa68: 0x2463f840  addiu       $v1, $v1, -0x7C0
    ctx->pc = 0x49fa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965312));
    // 0x49fa6c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49fa6cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F840u));
    // 0x49fa70: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x49fa70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x49fa74: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49fa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49fa78: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49fa7c: 0x2463f850  addiu       $v1, $v1, -0x7B0
    ctx->pc = 0x49fa7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965328));
    // 0x49fa80: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49fa80u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F850u));
    // 0x49fa84: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x49fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x49fa88: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49fa88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49fa8c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49fa90: 0x2463f860  addiu       $v1, $v1, -0x7A0
    ctx->pc = 0x49fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965344));
    // 0x49fa94: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49fa94u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F860u));
    // 0x49fa98: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x49fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x49fa9c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49fa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49faa0: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x49faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x49faa4: 0x2463f870  addiu       $v1, $v1, -0x790
    ctx->pc = 0x49faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965360));
    // 0x49faa8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x49faa8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x52F870u));
    // 0x49faac: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x49faacu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x49fab0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x49fab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x49fab4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x49fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x49fab8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49fab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49fabc: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49FABCu;
    {
        const bool branch_taken_0x49fabc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x49FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FABCu;
        // 0x49fac0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fabc) {
            ctx->pc = 0x49FAF0u;
            goto label_49faf0;
        }
    }
    ctx->pc = 0x49FAC4u;
    // 0x49fac4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x49fac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x49fac8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49fac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49facc: 0x0  nop
    ctx->pc = 0x49faccu;
    // NOP
label_49fad0:
    // 0x49fad0: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x49fad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49fad4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x49fad4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x49fad8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x49fad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x49fadc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x49fadcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x49fae0: 0x0  nop
    ctx->pc = 0x49fae0u;
    // NOP
    // 0x49fae4: 0x1663fffa  bne         $s3, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x49FAE4u;
    {
        const bool branch_taken_0x49fae4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x49FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FAE4u;
        // 0x49fae8: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fae4) {
            ctx->pc = 0x49FAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fad0;
        }
    }
    ctx->pc = 0x49FAECu;
    // 0x49faec: 0x0  nop
    ctx->pc = 0x49faecu;
    // NOP
label_49faf0:
    // 0x49faf0: 0xaf86898c  sw          $a2, -0x7674($gp)
    ctx->pc = 0x49faf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 6));
    // 0x49faf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49faf8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x49faf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x49fafc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x49fafcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x49fb00: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x49fb00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49fb04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49fb04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49fb08: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x49fb08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49fb0c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x49fb0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49fb10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49fb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49fb14: 0x3e00008  jr          $ra
    ctx->pc = 0x49FB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FB14u;
        // 0x49fb18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FB1Cu;
    // 0x49fb1c: 0x0  nop
    ctx->pc = 0x49fb1cu;
    // NOP
    ctx->pc = 0x49fb20u;
}
