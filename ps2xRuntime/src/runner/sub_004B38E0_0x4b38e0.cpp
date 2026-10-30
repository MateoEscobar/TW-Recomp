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

// Function: sub_004B38E0
// Address: 0x4b38e0 - 0x4b3ab8
void sub_004B38E0_0x4b38e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B38E0_0x4b38e0");
#endif

    switch (ctx->pc) {
        case 0x4b3920u: goto label_4b3920;
        case 0x4b3960u: goto label_4b3960;
        case 0x4b39a8u: goto label_4b39a8;
        case 0x4b39dcu: goto label_4b39dc;
        case 0x4b3a24u: goto label_4b3a24;
        case 0x4b3a5cu: goto label_4b3a5c;
        default: break;
    }

    ctx->pc = 0x4b38e0u;

    // 0x4b38e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x4b38e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x4b38e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b38e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b38e8: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x4b38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x4b38ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4b38ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b38f0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x4b38f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x4b38f4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x4b38f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4b38f8: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x4b38f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x4b38fc: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x4b38fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x4b3900: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x4b3900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x4b3904: 0x3c130059  lui         $s3, 0x59
    ctx->pc = 0x4b3904u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)89 << 16));
    // 0x4b3908: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x4b3908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x4b390c: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4b390cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4b3910: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x4b3910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x4b3914: 0x3c150053  lui         $s5, 0x53
    ctx->pc = 0x4b3914u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
    // 0x4b3918: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4B3918u;
    SET_GPR_U32(ctx, 31, 0x4B3920u);
    ctx->pc = 0x4B391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3918u;
    // 0x4b391c: 0xffb00060  sd          $s0, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4B3918u, 0x4B3920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3920u;
label_4b3920:
    // 0x4b3920: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x4b3920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
    // 0x4b3924: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4b3924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4b3928: 0x24422110  addiu       $v0, $v0, 0x2110
    ctx->pc = 0x4b3928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8464));
    // 0x4b392c: 0x3463208a  ori         $v1, $v1, 0x208A
    ctx->pc = 0x4b392cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8330);
    // 0x4b3930: 0x26640e08  addiu       $a0, $s3, 0xE08
    ctx->pc = 0x4b3930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3592));
    // 0x4b3934: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b3934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b3938: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4b3938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x4b393c: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x4b393cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4b3940: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x4b3940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x4b3944: 0x26422168  addiu       $v0, $s2, 0x2168
    ctx->pc = 0x4b3944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8552));
    // 0x4b3948: 0x8e8369ec  lw          $v1, 0x69EC($s4)
    ctx->pc = 0x4b3948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27116)));
    // 0x4b394c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b394cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3950: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4b3950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3954: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4b3954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3958: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4b3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4b395c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x4b395cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_4b3960:
    // 0x4b3960: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x4b3960u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3964: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x4b3964u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b3968: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x4b3968u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4b396c: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x4b396cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4b3970: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x4b3970u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x4b3974: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x4b3974u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x4b3978: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x4b3978u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x4b397c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x4b397cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x4b3980: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x4b3980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4b3984: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x4b3984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x4b3988: 0x0  nop
    ctx->pc = 0x4b3988u;
    // NOP
    // 0x4b398c: 0x1486fff4  bne         $a0, $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x4B398Cu;
    {
        const bool branch_taken_0x4b398c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x4b398c) {
            ctx->pc = 0x4B3960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3960;
        }
    }
    ctx->pc = 0x4B3994u;
    // 0x4b3994: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4b3994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3998: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b3998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b399c: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x4b399cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4b39a0: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4B39A0u;
    SET_GPR_U32(ctx, 31, 0x4B39A8u);
    ctx->pc = 0x4B39A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B39A0u;
    // 0x4b39a4: 0x26b021c8  addiu       $s0, $s5, 0x21C8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 8648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4B39A0u, 0x4B39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B39A8u;
label_4b39a8:
    // 0x4b39a8: 0x26422168  addiu       $v0, $s2, 0x2168
    ctx->pc = 0x4b39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8552));
    // 0x4b39ac: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x4b39acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
    // 0x4b39b0: 0x34632086  ori         $v1, $v1, 0x2086
    ctx->pc = 0x4b39b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8326);
    // 0x4b39b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b39b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b39b8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4b39b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x4b39bc: 0x26650e08  addiu       $a1, $s3, 0xE08
    ctx->pc = 0x4b39bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3592));
    // 0x4b39c0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x4b39c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x4b39c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b39c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b39c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4b39c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b39cc: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x4b39ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x4b39d0: 0x8e8269ec  lw          $v0, 0x69EC($s4)
    ctx->pc = 0x4b39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27116)));
    // 0x4b39d4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4b39d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4b39d8: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x4b39d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_4b39dc:
    // 0x4b39dc: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x4b39dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b39e0: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x4b39e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b39e4: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x4b39e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4b39e8: 0xdc860018  ld          $a2, 0x18($a0)
    ctx->pc = 0x4b39e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4b39ec: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x4b39ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x4b39f0: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x4b39f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x4b39f4: 0xfe050010  sd          $a1, 0x10($s0)
    ctx->pc = 0x4b39f4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 5));
    // 0x4b39f8: 0xfe060018  sd          $a2, 0x18($s0)
    ctx->pc = 0x4b39f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 6));
    // 0x4b39fc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x4b39fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4b3a00: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x4b3a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x4b3a04: 0x0  nop
    ctx->pc = 0x4b3a04u;
    // NOP
    // 0x4b3a08: 0x1491fff4  bne         $a0, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4B3A08u;
    {
        const bool branch_taken_0x4b3a08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x4b3a08) {
            ctx->pc = 0x4B39DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b39dc;
        }
    }
    ctx->pc = 0x4B3A10u;
    // 0x4b3a10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4b3a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b3a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3a18: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x4b3a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x4b3a1c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4B3A1Cu;
    SET_GPR_U32(ctx, 31, 0x4B3A24u);
    ctx->pc = 0x4B3A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3A1Cu;
    // 0x4b3a20: 0x3c100053  lui         $s0, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)83 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4B3A1Cu, 0x4B3A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3A24u;
label_4b3a24:
    // 0x4b3a24: 0x26102228  addiu       $s0, $s0, 0x2228
    ctx->pc = 0x4b3a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8744));
    // 0x4b3a28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4b3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4b3a2c: 0x3c03fbad  lui         $v1, 0xFBAD
    ctx->pc = 0x4b3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64429 << 16));
    // 0x4b3a30: 0x26a421c8  addiu       $a0, $s5, 0x21C8
    ctx->pc = 0x4b3a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8648));
    // 0x4b3a34: 0x34632086  ori         $v1, $v1, 0x2086
    ctx->pc = 0x4b3a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8326);
    // 0x4b3a38: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4b3a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x4b3a3c: 0x26650e08  addiu       $a1, $s3, 0xE08
    ctx->pc = 0x4b3a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3592));
    // 0x4b3a40: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x4b3a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x4b3a44: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4b3a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4b3a48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4b3a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3a4c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x4b3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x4b3a50: 0x8e8269ec  lw          $v0, 0x69EC($s4)
    ctx->pc = 0x4b3a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27116)));
    // 0x4b3a54: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4b3a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4b3a58: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x4b3a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_4b3a5c:
    // 0x4b3a5c: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x4b3a5cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3a60: 0xdc880008  ld          $t0, 0x8($a0)
    ctx->pc = 0x4b3a60u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4b3a64: 0xdc820010  ld          $v0, 0x10($a0)
    ctx->pc = 0x4b3a64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4b3a68: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x4b3a68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4b3a6c: 0xfe070000  sd          $a3, 0x0($s0)
    ctx->pc = 0x4b3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 7));
    // 0x4b3a70: 0xfe080008  sd          $t0, 0x8($s0)
    ctx->pc = 0x4b3a70u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 8));
    // 0x4b3a74: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x4b3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x4b3a78: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x4b3a78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x4b3a7c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x4b3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x4b3a80: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x4b3a80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x4b3a84: 0x0  nop
    ctx->pc = 0x4b3a84u;
    // NOP
    // 0x4b3a88: 0x1491fff4  bne         $a0, $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4B3A88u;
    {
        const bool branch_taken_0x4b3a88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x4b3a88) {
            ctx->pc = 0x4B3A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3a5c;
        }
    }
    ctx->pc = 0x4B3A90u;
    // 0x4b3a90: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x4b3a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4b3a94: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x4b3a94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4b3a98: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x4b3a98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4b3a9c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x4b3a9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4b3aa0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x4b3aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4b3aa4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x4b3aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4b3aa8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x4b3aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b3aac: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3AACu;
        // 0x4b3ab0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3AB4u;
    // 0x4b3ab4: 0x0  nop
    ctx->pc = 0x4b3ab4u;
    // NOP
    ctx->pc = 0x4b3ab8u;
}
